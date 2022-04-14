#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n * 2; i++) {
		if (i <= n) {
			for (int j = 0; j < n - i; j++) {
				printf(" ");
			}
			for (int j = 0; j < i * 2 - 1; j++) {
				printf("*");
			}
		}
		else {
			for (int j = i - n; j > 0; j--) {
				printf(" ");
			}
			for (int j = (n * 2 - (i - n) * 2) - 1; j > 0; j--) {
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
} 
