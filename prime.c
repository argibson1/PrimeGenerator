#include <stdio.h>
#include <math.h>

int main(){

	int numberOfPrimes = 0, prime = 0;
	long long int m = 1, n;
	scanf("%d", &numberOfPrimes);
	int primes[numberOfPrimes];
	for(int i = 0; prime < numberOfPrimes; i++){
		n = i+1;
		if(n > m){
			int temp = m;
			m = n;
			n = temp;
		}
		for(int remainder = m%n; remainder != 0 ;remainder = m%n){
			m = n;
			n = remainder;
		}
		if(n == 1){	
			printf("prime #%d = %d\n" , prime+1, i+1); 
			primes[prime] = i+1;
			prime++; 
		}
		m = 1;
		for(int i = 0; i < prime; i++){
			m*=primes[i];
		}
	}

	return 0;
}
