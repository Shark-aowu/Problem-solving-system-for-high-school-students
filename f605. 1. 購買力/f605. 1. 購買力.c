#include<stdio.h>
int n, d, num[3], ang[2];

int main(){
	scanf("%d %d", &n, &d);
	for(int i = 0; i < n; i++){
		int db[2] = {-1 ,101}; 
		for(int j = 0; j < 3; j++){
		scanf("%d", &num[j]);
		if(num[j] > db[0])db[0] = num[j];
		if(num[j] < db[1])db[1] = num[j];
		}
		if((db[0] - db[1]) >= d){
			ang[1] += ((num[0] + num[1] + num[2]) / 3);
			ang[0]++;
		}
	}
	printf("%d %d", ang[0], ang[1]); 
	return 0;
} 
