#include<stdio.h>

int main() {
	int n, m, arr[101][101] = {0}, cnt=1;
	scanf("%d %d", &n, &m);
	if(m%2){
		for(int i= m-1;i>=0;i--){
		if(i%2==0){
			for(int j=n-1;j>=0;j--){
				arr[j][i] = cnt++;
			}
		}
		else{
			for(int j=0;j<n;j++){
				arr[j][i] = cnt++;
			}
		}
		}
	}
	else{
		for(int i= m-1;i>=0;i--){
		if(i%2==0){
			for(int j=0;j<n;j++){
				arr[j][i] = cnt++;
			}
		}
		else{
			for(int j=n-1;j>=0;j--){
				arr[j][i] = cnt++;
			}
		}
	}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
