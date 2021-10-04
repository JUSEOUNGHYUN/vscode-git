using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{

    // 스피드 조정 변수
    [SerializeField]
    private float walkSpeed; // 걷는 속도
    [SerializeField]
    private float runSpeed;
    [SerializeField]
    private float crouchSpeed;

    private float applySpeed;

    // 점프 조정 변수
    [SerializeField]
    private float jumpForce;

    // 상태 변수
    private bool isRun = false;         
    private bool isCrouch = false;
    private bool isGround = true;

    //앉았을 때 얼마나 앉을지 결정하는 변수
    [SerializeField]
    private float crouchPosY;           // 앉는것
    private float originPosY;           // 숙였다가 돌아오는것
    private float applyCrouchPosY;      // 


    // 땅 착지 여부
    private CapsuleCollider capsuleCollider;

    // 카메라 민감도
    [SerializeField]
    private float lookSensitivity; // 카메라 민감도

    // 카메라 한계
    [SerializeField]
    private float cameraRotationLimit; // 고개를 들때 각도 제한 자연스럽게
    private float currentCameraRotationX = 0;

    // 필요한 컴포넌트
    [SerializeField]
    private Camera theCamera;
    private Rigidbody rigid;


    void Start()
    {
        capsuleCollider = GetComponent<CapsuleCollider>();
        rigid = GetComponent<Rigidbody>(); 
        applySpeed = walkSpeed;
        originPosY = theCamera.transform.localPosition.y;
        applyCrouchPosY = originPosY;

    }

    void Update()
    {
        IsGround();
        TryJump();
        TryRun();
        TryCrouch();
        Move();
        CameraRotation();
        CharacterRotation();
    }

    // 앉기 시도
    private void TryCrouch()
    {
        if (Input.GetKeyDown(KeyCode.LeftControl))
        {
            Crouch();
        }
    }

    // 앉기 동작
    private void Crouch()
    {
        isCrouch = !isCrouch;
        /*if (isCrouch)
            isCrouch = false;
        else
            isCrouch = true;*/
        if (isCrouch)
        {
            applySpeed = crouchSpeed;
            applyCrouchPosY = crouchPosY;
        }
        else
        {
            applySpeed = walkSpeed;
            applyCrouchPosY = originPosY;
        }

        StartCoroutine(CrouchCoroutine()); 
    }

    // 부드러운 동작 실행.
    IEnumerator CrouchCoroutine()       // 병렬 처리
    {
        float _posY = theCamera.transform.localPosition.y;
        int cnt = 0;

        while(_posY != applyCrouchPosY)
        {
            cnt++;
            _posY = Mathf.Lerp(_posY, applyCrouchPosY, 0.3f); // Lerp : 보간 자연스럽게 해주는 것
            theCamera.transform.localPosition = new Vector3(0, _posY, 0);
            if (cnt > 15)
                break;
            yield return null;
        }
        theCamera.transform.localPosition = new Vector3(0, applyCrouchPosY, 0f);
    }

    // 지면 체크
    private void IsGround()
    {
        isGround = Physics.Raycast(transform.position, Vector3.down, capsuleCollider.bounds.extents.y + 0.1f);
    }

    // 점프 시도 
    private void TryJump()
    {
        if(Input.GetKeyDown(KeyCode.Space) && isGround)
        {
            Jump();
        }
    }

    // 점프
    private void Jump()
    {
        // 앉은 상태에서 점프시 앉은 상태 해제.
        if (isCrouch)
            Crouch();

        rigid.velocity = transform.up * jumpForce;
    }
   
    // 달리기 시도
    private void TryRun()
    {
        if (Input.GetKey(KeyCode.LeftShift))
        {
            Running();
        }
        if (Input.GetKeyUp(KeyCode.LeftShift))
        {
            RunningCancle();
        }
    }

    // 달리기 실행
    private void Running()
    {
        if (isCrouch)
            Crouch();
        isRun = true;
        applySpeed = runSpeed;
    }

    // 달리기 취소
    private void RunningCancle()
    {
        isRun = false;
        applySpeed = walkSpeed;
    }

    // 움직임 실행
    private void Move()
    {
        float _moveDrix = Input.GetAxisRaw("Horizontal"); // 좌 우
        float _moveDriz = Input.GetAxisRaw("Vertical"); // 정면과 뒤

        Vector3 _moveHorizontal = transform.right * _moveDrix; // 1,0,0 * 1,0,0 or 1,0,0
        Vector3 _moveVertical = transform.forward * _moveDriz;

        Vector3 _veclocity = (_moveHorizontal + _moveVertical).normalized * applySpeed;
        // (1,0,0) = right + (0,0,1) = forward = (1,0,1) = 2
        // normalized = (1,0,0) + (0,0,1) = (0.5, 0, 0.5)

        rigid.MovePosition(transform.position + _veclocity * Time.deltaTime);
    }

    // 좌우 캐릭터 회전
    private void CharacterRotation()
    {
        float _yRotation = Input.GetAxisRaw("Mouse X");
        Vector3 _caharcterRotationY = new Vector3(0f, _yRotation, 0f) * lookSensitivity;
        rigid.MoveRotation(rigid.rotation * Quaternion.Euler(_caharcterRotationY));
        Debug.Log(rigid.rotation);
        Debug.Log(rigid.rotation.eulerAngles);
    }

    // 상하 카메라 회전
    private void CameraRotation()
    {
        float _xRotation = Input.GetAxisRaw("Mouse Y");
        float _cameraRotationX = _xRotation * lookSensitivity; // 너무 확 올라가지 않게
        currentCameraRotationX -= _cameraRotationX; // += : 마우스 반전 |  -= 마우스 그대로
        currentCameraRotationX = Mathf.Clamp(currentCameraRotationX, -cameraRotationLimit, cameraRotationLimit);
        // Calmp : 45,-45안으로 가두는것

        theCamera.transform.localEulerAngles = new Vector3(currentCameraRotationX, 0f, 0f);
    }

}
