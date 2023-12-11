//Created by 23343068_Hanna Fadilah

#include <stdio.h>

int sum(int n);

void main(){
	int number, result;
	
	printf("Enter a positive integer :");
	scanf("%d, &number");
	
	result = sum(number;)
	
	printf("sum = %d", result);
}

int sum(int num){
	if (num!=0)
		return + sum(num-1);
	else
		return num;
}