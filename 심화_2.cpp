#include<stdio.h>

int f(int a, int b, int t) {
	for(int i=0;i<b;i++){
		t *= a;
	}
	return t;
}

int main() {
	int a, b, t;
	printf("�� ������ �Է��ϼ��� :");
	scanf("%d %d", &a, &b);
	t=1;
	printf("%d��%d���� : %d", a, b, f(a, b, t));
	return 0;
}
