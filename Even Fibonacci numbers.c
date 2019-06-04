#include<stdio.h>


int fib(int i){
	
		
		if(i ==0 )
			return 1;
		else
			return i+fib(i-1);
		
	
	
	
}


main(){
	
	
	int i =0 ;
	long int sum =0;
	for(i=0;i<8;i++){
		
		if(fib(i) % 2 ==0 ){
				sum += i;
		}
	
	}
	
	
	printf("%d",sum);	
	
}
