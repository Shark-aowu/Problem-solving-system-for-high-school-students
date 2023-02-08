#include<stdio.h>
int num[9], ram, bigger;

int main(){
	for(int i = 0; i < 3; i++){
		scanf("%d", &ram); 
		num[ram - 1]++;
	}
	for(int i = 0; i < 9; i++)if(num[i] > bigger)bigger = num[i];
	printf("%d ", bigger);
	for(int i = 8; i > -1; i--)if(num[i] != 0) printf("%d ", i + 1);
	return 0;
}
