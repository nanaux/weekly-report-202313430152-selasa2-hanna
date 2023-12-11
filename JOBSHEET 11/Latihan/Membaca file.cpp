//Created by 23343068_Hanna Fadilah

#include <stdio.h>

void main()
{
	char buff[255];
	FILE *ptr;
	
	if((fptr = fopen("puisi.txt","r")) == NULL){
		printf("Error : File tidak ada");
		
		exit (1);
	}
	
	fgets(buff, 255, fptr);
	
	printf("%s", buff);
	
	fclose(fptr);
}