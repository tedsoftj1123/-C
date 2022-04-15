#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i < n * 2; i++) {
		if (i < n) {
			for (int j = 1; j <= i; j++) {
				printf("*");
			}
			for (int j = 1; j <= (n * 2) - (i*2); j++) {
				printf(" ");
			}
			for (int j = 0; j < i; j++) {
				printf("*");
			}
		}
		else {
			for (int j = 1; j <= n - (i-n); j++) {
				printf("*");
			}
			for (int j = ((i-n+1) * 2) - 1; j > 1; j--) {
				printf(" ");
			}
			for (int j = 0; j < n * 2 - i; j++) {
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
