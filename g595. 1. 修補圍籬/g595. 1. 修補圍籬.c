#include<stdio.h>
int num, sum, data[100] = {0};

int main(){
	scanf("%d", &num);
	for(int i = 0; i < num; i++)
		scanf("%d", &data[i]);
	if(data[0] == 0)
		sum += data[1];
	for(int i = 1; i < num - 1; i++){
		if(data[i] == 0){
			if(data[i + 1] < data[i - 1])
				sum += data[i + 1];
			else
				sum += data[i - 1];
		}
	}
	if(data[num - 1] == 0)
		sum += data[num - 2];
	printf("%d", sum);
	return 0;
} 
