#include<stdio.h>
int a, b, n, ram, ang;

int main(){
	scanf("%d %d %d", &a, &b, &n);
	for(int i = 0; i < n; i++){
		int data[101] = {0};
		for(int j = 0; j < 1; ){
			scanf("%d", &ram);
			if(ram == 0)j++;
			if(ram > 0)data[ram]++;
			else data[ram  * -1]--; 
		}
		if(data[a] != 0 && data[b] != 0)ang++;
	}
	printf("%d", ang);
	return 0;
}
