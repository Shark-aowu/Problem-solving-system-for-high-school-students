#include<stdio.h>

int main(){
	int num, bigger = 0, data[10] = {0};
	for(int i = 0; i < 3; i++){
		scanf("%d", &num);
		data[num]++;
		if(data[num] > bigger) bigger = data[num];
	}
	printf("%d ", bigger);
	for(int i = 9; i >= 0; i--)
		if(data[i] != 0) printf("%d ", i); 
	return 0;
} 
