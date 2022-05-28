#include<stdio.h>

int f(int a, int b, int t) {
	for(int i=0;i<b;i++){
		t *= a;
	}
	return t;
}

int main() {
	int a, b, t;
	printf("두 정수를 입력하세요 :");
	scanf("%d %d", &a, &b);
	t=1;
	printf("%d의%d제곱 : %d", a, b, f(a, b, t));
	return 0;
}
