#include<stdio.h>

int f(int n, int cnt) {
	for(int i=2;i<n;i++) {
		if(n%i == 0){
			cnt++;
		} 
	}
	return cnt;
}

int main() {
	int n, cnt=0;
	printf("�ڿ����� �Է��ϼ��� : ");
	scanf("%d", &n);
	printf("%d�� ��� ���� : %d", n, f(n, cnt));
}
