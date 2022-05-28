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
	printf("자연수를 입력하세요 : ");
	scanf("%d", &n);
	printf("%d의 약수 개수 : %d", n, f(n, cnt));
}
