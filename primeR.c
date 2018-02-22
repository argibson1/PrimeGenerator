#include <stdio.h>

int main(){

	int num;
	scanf("%d",&num);
	long int bin[num];
	int prime[num];

	for(int i = 0; i < num; i++){
		bin[i] = 1;
	} 
	
	int counter = 0;

	for(int i = 0; i < num; i++){
		if(bin[i] == 1){
			bin[i] = 0;
			prime[counter] = i+2;
			counter++;
			for(int j = 2*i+2; j < num; j+=(i+2)){
				bin[j] = -1;
			}
		} 
	}

	for(int i = 0; i <= counter; i++){
		printf("%d: %d", i+1, prime[i]);
		if (i%7 == 0){
			printf("\n");
		}else{
			printf("\t");
		}
	}
	
	return 0;
}
