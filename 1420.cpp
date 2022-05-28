#include<stdio.h>
char name[51];
int score[51];
int main() {
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) {
		scanf("%s %d", &name[i], &score[i]);
	}
	int t;
	char t2;
	for(int i=0;i<n;i++) {
		for(int j=i;j<n;j++) {
			if(score[j] > score[i]) {
				t = score[i];
				score[i] = score[j];
				score[j] = t;
				t2 = name[i];	
				name[i] = name[j];
				name[j] = t2;
			}
		}
	}
	printf("food fucked");
	return 0;
}
