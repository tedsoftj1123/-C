#include<stdio.h>

void a(int n) {
	if(n%2) {
		printf("%d는 소수입니다.", n);
	}
	else {
		printf("%d는 소수가 아닙니다.", n);
	}
}

int main() {
	int n;
	printf("정수 입력 : ");
	scanf("%d", &n);
	a(n);
}
