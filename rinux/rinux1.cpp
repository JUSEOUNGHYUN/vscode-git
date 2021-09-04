/*
PART 02 리눅스 운영 및 관리 
Chapter 01 파일 시스템 관련 명령어----------------------------------
section 01 권환 및 그룹 설정---------------------------------------------------

umask 
일반 파일 권한 664 –rw- rw- r-   touch로 만들시
디렉터리 권한 775 –rwx rwx rw- mkdir로 만들시
umask -p : umask 0022
umask –S : u=rwx, g=rx, o=rx

/usr/bin/paswwd
특수 권한 Set-Bit

특수 권한
setUID : u+s, u-s 설정 및 해제
setGID : g+s, g-s 설정 및 해제
sticky bit : o+t, o-t 설정 및 해제(디렉토리만 설정 가능)
sticky bit(공용 디렉토리 사용)
/tmp 안에 생성
생성 누구나 가능 삭제는 본인,관리자만


uid=4, gid=2, sticky bit=1
ex) 3 = gid + sticky

chown
소유권 변경
소유권 변경 시 참조하는 파일 : /etc/passwd
chown –R root y : y y -> root y
chown :root TST : y y -> y root


chgrp
-h : 소유권 그대로 두고 심볼릭 링크 파일의 그룹소유권만 변경
-R ihd ~ihduser : ihduser 사용자의 홈 디렉터리를 포함한 모든 파일,디렉토리 그릅 소유권을
ihd로 변경

alias c=clear

chmod
-R : 하위 디렉토리 내 파일의 허가권까지 모두 변경
-c : 변경된 파일 정보를 출력
chmod o=r : other r(읽기) 권한만 부여
drwxrwx---에 chmod o+t 설정하면
drwxrwx—T(실행권한X)
drwxrwx--x에 chmod o+t 설정하면
drwxrwx—t(실행권한O)

디스크 쿼터(파일 용량 개수 제한)
edquota : 쿼터를 설정(편집기 이용), 디스크사용량제한
quota : 사용자 할당량 사용
setquota : 직접 사용량 할당(편집기 사용X)
quotacheck : 쿼터 설정 확인 -> 검사하고 없을 경우 생성

section 02 파일 시스템의 관리--------------------------------------------------
저널링
JFS, XFS(고성능 저널링 시스템), ReiserFS

네트워크 파일 시스템
SMB, CIFS(SMB 확장), NFS

mount
-o 
loop : iso파일 마운트에 쓰인다. 
ro : Read Only. 읽기 전용
remount : 재마운트

eject
umount : 자동으로 수행되는 명령어

fdisk(파티션) 
새로운 파티션의 생성(n), 삭제(d), 타입결정(t)(속성지정)
swap : 82 리눅스의 가상 메모리를 사용하기 위한 파일 시스템
LVM : 8e 파티션을 원하는 대로 추가하거나 제거하고 그 크기도 조절할 수 있도록 해주는 방법
Raid : fd
Linux : 83
blkid : 파일시스템 타입이 어떻게 구성되어있는지
- UUID 값을 사용할 때 -

mkfs(리눅스 파일 시스템 생성) , mke2fs 
-t : 생성할 파일 시스템 타입(ext2, ext3, ext4)을 지정
-j : 저널링 옵션 결정 -> 저널링 사용하는 것 = ex3
-c : 배드블록 검사 기능

fsck
파일 시스템의 무결성 점검, 대화식으로 복구
/lost+found 디렉토리

du
디렉터리 별로 디스크 사용량 확인
- h : 사람이 보기 편하게
- s : 전체 사용량 하위디렉토리 보여주지 않음

df
파티션 단위로 사용량 확인

/etc/fstab 
어떤 파티션들을 어디에 자동으로 마운트, 외부장치들에 대한 마운트를 어떻
게 설정할것인지
dump 명령으로 통한 백업시 사용주기를 1.매일 데이터 백업가능 2. 이틀에 한번 데이터 백업 가능
1. 장치명
2. 마운트 될 디렉토리
3. 파일 시스템 유형
4. 마운트 될 때의 옵션 (defaults:기본값)

Chapter 02 셸(Shell)-------------------------------------------
shell : 로그인 셸이 기록되어 있는 환경 변수

csh
1978,1981 빌 조이 개발
히스토리 alias 기능 포함

tcsh
Ken Greer 1982년 개발
자동완성 기능, 자동 로그아웃


bash
브라이언 폭스 1989
리눅스 표준 셸 채택
POSIX 호환 가능

sh->csh->tcsh->ksh->bash->zsh
1979->1981->1982->1986->1989->1990
set : 셸에서 선언된 셸 변수 전부를 확인

chsh(change shell)
-l : 사용자가 사용 가능한 셸의 종류 확인 = cat/etc/shells
가능한 셸의 목록을

/etc/shells
셸 목록 확인

 확인하는 명령
-s, --shell : 셸 이름 지정
그냥 : 대화형 셸 변경

/sbin : 시스템관리를 위한 명령어
/bin : 기본적인 명령어

etc/passwd 
필드 1 : 사용자명
필드 2 : 패스워드
필드 3 : 사용자 uid
필드 4 : 사용자 gid
필드 5 : 사용자 이름
필드 6 : 사용자 홈 디렉토리
필드 7 : 사용자 로그인 쉘 변경

section 02 환경 설정------------------------------------------------------

주요 환경변수
PS1 : 셸 프롬프트 선언 시 사용하는 변수
PWD : 현재 디렉터리의 절대 경로명
HOME : 사용자의 홈 디렉토리 절대 경로
TIMEOUT : 일정 시간 동안 작업 하지 않을 경우 로그아웃
PATH : 실행할 명령어 경로 검색 /bin 추가

환경 변수 설정
export PATH=/home/ihd = PATH를 /home/ihd로 변경
export PATH=$PATH:/home/ihd = PATH에 /home/ihd 추가

bash 환경 설정 파일
~/.bash_logout : 로그아웃
~/.bash_profile : PATH, 환경 변수 등을 설정 또는 변경 
~/.bash_history : 명령어의 재사용이 가능하게 함

alias
오직 alias만 입력할 경우 alias가 설정된 단어들의 목록 나열

history
history 5 : 최근에 실행한 마지막 5개의 명령어 목록 출력
!! : 마지막으로 실행했던 명령문 실행
!n : n번째 명령어 실행

Chapter 03 프로세스 관리-------------------------------------------
section 01 개념 및 유형------------------------------------------------------
프로세스
init : 가장 먼저 실행되는 프로세스
init PID : 1

fork()
새로 생성된 프로세스 = 원래의 프로세스와 똑같은 코드
부모,자식 프로세스 관리

exec()
그대로의 프로세스에 덮어 씌움

데몬 (background)
standalone
프로세스가 메모리에 계속 상주하면서 클라이언트의 서비스 요청을 처리하는 방식
<-> 서로 반대
(x)inted
서비스 요청이 있을 때마다 inted라는 슈퍼 데몬에 의해 해당하는 데몬을 실행

시그널
프로세스간 메시지를 보내는 통신 할 때 이용
1 SIGHUP 종료 후 재시작
2 SIGINT Ctrl+c 종료
3 SIGQUIT Ctrl+/
9 SIGKILL 강제종료
15 SIGTERM 정상정료 Crtl + D
20 SIGTSTP Crtl + z 대기(중지) Suspend

kill –l
시그널 이름과 번호를 확인 할 때 

killall –l
시그널 옵션들을 확인할 때

section 02 프로세스 유틸리티---------------------------------------------------
ps
System v = - / 모든 프로세스 출력
BSD = 없음 / 터미널과 관련된(소유자) 프로세스 출력
GNU = --
PID(프로세스 식별번호),TTY(상태코드),TIME(CPU사용시간),CMD
-x : 데몬 프로세스처럼 터미널에 종속되지 않는 프로세스 출력
Z : 좀비 프로세스 작업 종료 but 부모 프로세스로부터 회수되지 않아 메모리 차지
PWD : 현재 작업 디렉토리를 알려주는 환경변수

jobs
작업이 중지된 상태
백그라운드로 진행중인 상태
+ : 현재 작업중
- : 작업 대기중

bg
포그라운드 -> 백그라운드 전환
일시정지(suspend)키 : Ctrl + z

fg
백그라운드 -> 포그라운드 전환
종료 : Ctrl + c

프로세스 우선순위 

nice
< : 우선순위가 인위적으로 높아진 상태
N : 우선순위가 낮아진(낮은) 상태
프로세스명
양수값 - , 음수값 --
default(기본값) : 10
renice
프로세스 번호
top
k : PID값을 입력하여 종료신호 보냄
t : CPU 항목을 on/off
m : 메모리 관련 항목을 on/off
W : 바꾼 설정을 저장
실시간 화면 출력, 모니터할 프로세스지ID지정
-d 시간		   -p PID
NI 기본값 = 1
일반 사용자 : NI값 증가
root사용자 : NI값 감소


nohup
nohup.out : 표준에러파일 출력
$HOME/nohup.out : 디렉터리에 쓰기가 불가능할 경우
사용자가 작업 중인 터미널 창을 닫아도 백그라운드로 보내진 작업은 유지

cron
7개 필드 : 분/시/일/월/요일/사용자/커맨드
/var/spool/cron/ 에 위치
crontab –ir : 파일삭제하기전에 사용자에게 확인
crontab –e : 작성, 수정



Chapter 04 에디터-----------------------------------------------
section 02 에디터 활용------------------------------------------------------

emacs
리처드 스톨만
파일 저장 : Crtl+x,Crtl+s
종료      : Crtl+x,Crtl+cf
[Esc]+% : Query replace 치환
LISP 언어 최적화

vi 편집기
빌 조이
. : 현재줄
$ : 줄의 맨끝
^ : 줄의 시작
% : 첫줄 부터 끝줄 까지
-r : 손상된 파일 회복
+ : 파일을 열 때 커서가 본문 마지막 행에 위치
vi +/ihd/etc/hosts : ihd 라는 문자열이 있는 위치에 커서를 둔다.
.exrc : 이 파일로 저장하면 자동으로 실행(지속적으로)
set nu : 줄번호 표시 설정
‘:’ : 명령모드에서 ex모드로 진입
cat .exre : 지속적으로 지정한 설정 이용
치환 : %/\<ihd\>/lunux/g
ab : 약어 설정
undo : 되감기 (삭제명령취소 복원)
.원본파일명.swp : 예기치 못하게 종료해버린 경우 swap파일 생김

pico
아보일 카 사르
a : 현재 행의 맨 앞으로 이동
e : 현재 행의 맨 끝으로 이동
i : 화면 갱신
o : 파일 저장
k : 현재 행을 삭제

Chapter 05 소프트웨어 설치 및 삭제----------------------------------
section 01 프로그램 설치------------------------------------------------------
rpm
레파지토리를 모아둔다.
-f : 이름을 표준 입력에서 읽음

rpm —nodeps
rpm —erase –e
yum —remove -r
의존성 관계를 무시하고 설치

rpm

rpm --force
기존에 설치된 패키지와 관계없이 강제로 설치

/etc/yum.repos.d
저장소 관련 파일들이 위치하는 디렉토리

SUSE
툴 : yast
패키지 관리 : zypper, YaST

section 02 소스 파일 설치------------------------------------------------------

소스 파일 컴파일 설치
gcc, tar, make, cmake(mysql)
패키지 파일 설치
rpm, dpkg
자동 설치 도구 이용
yum, apt-get


아카이브(tar)
다수 개의 파일이나 디렉터리를 하나의 파일로 묶는 것.

t : 파일 목록 나열
v : 명령 실할 때 대상이 되고 있는 파일 보여줌
p : 파일의 권한 그대로 유지(생성 되었을 때)
x : tar로 묶은 파일을 원본 파일로 해제
r : 파일의 마지막 부분에 파일 추가
gzip : z
bzip : j
xz : J
-C : 디렉토리 변경

소스코드 설치
configure --prefix
파일을 어떤 곳에 지정하겠다.
make clean : 파일 제거

Chapter 06 장치 설정--------------------------------------------- 
section 01 주변 장치 연결 및 설정-----------------------------------------------

LPRng : 515 포트, 
CUPS : 631포트
HTTP(WWW) : 80 웹서비스
https : 443
web – 8088

인쇄하기 위한 명령
cat kait.txt >/dev/lp0
lpr kait.txt
cat kait.txt | lpr

CUPS
어도비의 PPD(전자문서형식)형식의 텍스트 파일 이용
HTTP기반의 IPP사용
기본 문법이 아파치의 httpd.conf와 유사

system-config-printer
CentOS6 버전에서 사용하는 X윈도우 기반의 프린터 설정
프린터설정도구 -> 프린터 설치
직렬포트(SCSI) 스캐너 : /dev/sg0, /dev/scanner
USB스캐너 : /dev/usb/scanner/,/dev/usbscanner

SANE
스캐너 등의 이미지 관련 하드웨어를 사용할 수 있도록 해주는 API
GPL 라이센스 

XSANE
GTK+라이브러리

section 02 주변 장치 활용------------------------------------------------------
BSD 계열 : lpr, lpq, lprm, lpc
System V 계열 : lp, lpstat, cancel

lpr –r : 출력한 뒤 지정 파일 삭제

alsactl : ALSA 사운드 카드 제어
alsamixer : 오디오 프로그램
cdparanoia : 오디오 cd로부터 음악 파일 추출

PART 03 리눅스 활용
Chapter 01 X-Window
section 01 개념 및 사용법 

X윈도우
1984년 Bob Scheifler, Jim Gettys가 개발
디스플레이 장치에 의존적이지 않고 서로 다른 기종을 함께 사용할 수 있음


Xlib 고수준 라이브러리 -> XCB
Xt, Xaw, FLTK, Tk

X.org 
라이센스 : MIT
2004년 현재 많이 사용
XFree86 -> X.org Server > Wayland

/etc/inttab
리눅스 부팅시 X윈도를 실행하기 위해 부팅모드 설정
id:0:initdefault : 시스템 중지
id:1:initdefault : 단일 사용자 모드, 관리자인 루트로 로그인
id:3:initdefault : 콘솔 모드
id:5:initdefault : x윈도우 로그인 모드

startx
id:3 : 텍스트
id:5 : 그래픽

윈도우 매니저 : 창의 배치와 표현
데스크톱 환경 : 아이콘, 창, 도구 모음, 폴더, 배경화면
디스플레이 매니저 : 로그인 화면 아이디,패스워드

환경변수 DISPLAY
X클라이언트 프로그램을 원격지의 X서버에 전달하기 위해 수정하는 환경변수
A->B = A주소를 B주소로 변경
1:2 : 0부터 세기 때문에 1,2는 각각 두 번째,세 번째 

section 02 X-윈도우 활용 

구분
KDE
GNOME
이미지 뷰어
Gwenview
eog
데스크톱 이미지 뷰어

gThumb
텍스트 편집기
kwrite
gedit
사운드 및 비디오

Totem
카메라 동영상 프로그램

CHEESE
파일관리자
dolphin
nautilus
라이브러리
노키아(Qt)
GTK+
기본 브라우저
Konquerer
Web
윈도우 매니저
Kwin
Mutter -> Metacity
디스플레이 매니저
KDM
GDM
이미지 편집 프로그램

GIMP(포토샵)
안정성
GDM3가 KDE보다 안정성 높다.
커스터마이징
KDE가 압도적

KDE는 안드로이드 느낌
GNOME 아이폰 느낌
주요 언어 
c++
c


xauth
MMC 방식의 인증방식을 사용하기 위한 필수 유틸리티
X 서버에 접근할 수 있는 클라이언트 서버에 생성된 키 기반으로 제어할 때
Xauthority 파일의 쿠기 내용을 추가,삭제,리스트 출력 하는 유틸리티
MIT-MAGIC-COOKIE-1 : xauth list $DISPLAY

xhost
호스트 기반 인증 방식을 사용하기 위한 필요한 유틸리티
클라이언트를 +(지정) -(해제)한다.
xhost –ip나 도메인 이름 이용해 서버 접속
ex) 192.168.56.101 www.ihd.or.kr

Chapter 02 인터넷 활용
section 01 네트워크 개념 

MAN
DQDB : 이중버스토폴로지

UTP 케이블링
흰주, 주, 흰녹, 파랑, 흰파, 녹, 흰갈, 갈

TCP
3-way handshaking
ESTABLISHED 정보를 확인하는 명령의 조합 : ss,netstat

POP
Post Office Protocol
전자우편을 수신, 보관하기 위해 사용되는 메일 서버 프로토콜
IMAP
서버에서 이메일을 읽는 프로토콜

ICMP
메시지에 대한 오류 보고와 이에 대한 피드백을 원래 호스트에 보고하는 역할을 수행

ITU
이동통신분야 5G제정 국제전기통신연합

IEEE
LAN 및 MAN 관련 표준을 제정
MAN(DQDB) 프로토콜 제정

FDDI
전송 매체를 광섬유 케이블을 사용하여 설계된 링구조의 통신망



ICANN
도메인 관련 

EIA 
이더넷 케이블의 배열순서인 T568B를 표준화한 기구

이더넷 카드
mii-tool : 리눅스의 네트워크 설정 확인 및 설정
	  케이블의 상태를 확인
ifconfig : 이더넷 카드의 MAC주소를 확인할 때

ARP <-> RARP
IP->MAC

arp : IP 주소 기반으로 MAC주소를 확인(다른호스트)
ifconfig : 이더넷의 MAC주소를 확인
둘이 비교

주소공간 
IPv4 : 32bit
MAC : 48bit
IPv6 : 128bit , 플로 레이블

포트번호
ssh : 22
telnet : 23
HTTP : 80
X11 : 6000

section 02 인터넷 서비스의 종류 

응용프로그램
HTTP, POP3, DNS
SSL은 세션

원격 관리 서비스
telnet, ssh, rsh
sftp : ssh와 함께 동작하는 ftp
scp


FTP
get : FTP 서버로부터 파일을 전송받음 FTP->파일 (다운로드)
put : 자신의 시스템에 있는 파일을 FTP 서버로 전송 파일->FTP
get, recv : 지정한 파일을 로컬시스템으로 가져옴
put, send : 지정한 파일을 원격 시스템으로 전송
일반 데이터 전송용 : 20번
(신호)제어 데이터 전송 : 21번
/etc/services : 사용하는 포트 번호 확인할 때

telnet
telnet 호스트이름 포트번호
telnet 서버IP주소 포트번호
telnet 도메인명 포트번호
@를 통한 로그인 불가능

ssh
ssh 옵션 서버IP주소 || 도메인명
ssh 계정자명@서버IP주소
scp : 네트워크에 연결된 호스트 간의 파일 복사
sftp : 보안 암호화하여 파일 전송
-p : (port) : 서버에 접속할 포트를 지정
-l : (login_name) : 서버에 로그인할 사용자 지정
,ssh/authorized_keys : 서버 인증 파일을 통해 접근할 때

section 03 인터넷 서비스의 설정 


ifconfig
네트워크 인터페이스 구성을 위한 설정 또는 확인하는 시스템 관리 유틸리티

/etc/hosts
IP주소 이용 -> 자주 방문하던 사이트를 나만의 별칭 부여해서 손쉽게 접속

/etc/sysconfig/network
시스템 점검을 위해 외부 네트워크와의 연결을 차단
네트워크 연결 허용 여부 설정
NETWORKING

/etc/sysconfig/network-scripts
네트워크 인터페이스 환경 설정과 관련된 파일들이 저장되어있는 디렉토리


netstat (ss)대체
게이트웨이 주소 값을 확인하는 명령
네트워크 연결 상태 확인

ethtool
네트워크 인터페이스 물리적 연결 여부를 확인할 수 있는 명령어
이더넷 카드에 연결된 케이블의 상태를 확인


NFS 와 SAMBA 차이점
nfs : 리눅스끼리 데이터 교환할 때 사용
samba : 리눅스,윈도우,맥 등등 다른 운영체제끼리 데이터 교환

NFS
RPCBIND : 구동해야할 데몬
portmap : 먼저 수행되어야 한다.
RPC : 동적으로 서비스와 포트를 연결할 때 사용하는 방법

SAMBA
SMB/CIFS : 서버 메시지 블록 / SMB 확장 
CIFS : 파일이나 서비스를 요청하는 표준 프로토콜

FaaS(Function as a Service)
클라우드 컴퓨팅 서비스 모델
특정 이벤트가 발생 되었을 때 실행 -> 작업이 완료 -> 작업이 종료되게 하는 개념

유즈넷
인터넷을 이용하여 이야기를 나누는 토론 공간, 자유 게시판 서비스
IRC
전세계 채팅 프로그램 대화
고퍼
인터넷 정보검색 서비스

Docker
서버 운영에 필요한 프로그램과 라이브러리만 이미지로 만들어서 프로세스처럼 동작시키는 경량화된 가상화 방식

QNX : 유닉스 <-> TIZEN : 리눅스

리눅스 클러스터
고가용성 클러스터(HA) user -> primary Node || Backup Node
고계산용 클러스터(HPC)	
부하분산 클러스터(LVS)

오페라 : 노르웨이
파이어폭스 : 모질라제단
사파리 : 웹키트
크롬 : 웹키트 -> 블링크
오페라 : Presto -> 웹키트 -> 블링크
----------------------------------------------------------------------------------------------------
user = lin
echo = OOOO
$USER = ihdsuer 사용자이름 출력
$user = lin 출력
user = user 출력

startx
id:3 : 텍스트
id:5 : 그래픽


아두이노
라즈베리
임베디드
2005년 하드웨어 익숙X 보드마이크로컨트롤러
개발도상국 관련
소스공개, 재배포 용이
마이크로컨트롤러
마이크로프로세서
복잡하고 큰 메모리 차지함
외부의 기기 컨트롤 유리
외부의 신호 받아들여 연산 유리



잘 알려진 포트 : 0-1023
등록된 포트 : 1234-49151
동적 포트 : 49152-65535

lo
가상으로 만들어진 네트워크 인터페이스 장치

DHCP
회사 내에서 인터넷 접속할때마다 IP 충돌이 수시로 발생

고가용성
Back up, 백업 내용 나오면
서비스가 안끊기고 잘 지속

CUI 기반 네트워크 설정 : system-config-network
GUI 기반 네트워크 설정 : nm-connection-editor
*/