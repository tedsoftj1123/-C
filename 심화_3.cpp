#include<stdio.h>

int fact(int n, int t) {
	for(int i=n;i>0;i--) {
		t *= i;
	}
	return t;
}

int main() {
	int n, t=1;
	printf("�ڿ����� �Է��ϼ��� : ");
	scanf("%d", &n);
	printf("%d! = %d", n, fact(n, t));
}
