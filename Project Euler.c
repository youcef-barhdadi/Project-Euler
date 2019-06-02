#include<stdio.h>


int main(){

	int i=0;
	long sum =0;
	for(i=0;i<1000;i++){
		
		if(i%5 ==0 || i%3 ==0){
			sum+=i;
		}

		
	}
	
	printf("sum \t %d ",sum);
	
}
