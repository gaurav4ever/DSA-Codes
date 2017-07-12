#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


long findMax(long K);


int main(){

	long testcases;

	scanf("%lu\n",&testcases);
	long K[testcases];

	long i =0;
	for(i=0;i<testcases;i++){
	
		scanf("%lu\n",K[i]);
	
	}

	i = 0;
	for(i=0;i<testcases;i++)
		printf("%lu\n",findMax(K[i]));


	return 0;	
}


long findMax(long K){

	long j =0;
	long max = 0;
	for(j=1;j<K;j++){

	if(max<(j*(K-j)))
		max = j*(K-j);
		
	}

	return max;

}
