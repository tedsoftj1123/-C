#include<stdio.h>

void a(int n) {
	if(n%2) {
		printf("%d�� �Ҽ��Դϴ�.", n);
	}
	else {
		printf("%d�� �Ҽ��� �ƴմϴ�.", n);
	}
}

int main() {
	int n;
	printf("���� �Է� : ");
	scanf("%d", &n);
	a(n);
}
