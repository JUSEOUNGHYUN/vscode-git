#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d", &a);
	int sum = 0;

	for (int i = 0; i < a; i++) {
		scanf("%d %d", &b, &c);
		
		if (b > c) 
		sum += c;
		else if(b < c) 
		sum += c % b;
		
	}
	printf("%d", sum);
}