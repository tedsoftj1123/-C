#include<stdio.h>

int fact(int n, int t) {
	for(int i=n;i>0;i--) {
		t *= i;
	}
	return t;
}

int main() {
	int n, t=1;
	printf("자연수를 입력하세요 : ");
	scanf("%d", &n);
	printf("%d! = %d", n, fact(n, t));
}
