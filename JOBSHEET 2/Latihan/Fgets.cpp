//Created by 23343068_Hanna Fadilah

#include <stdio.h>

int main(){
	char name[50], email[50];
	
	printf("Nama : ");
	fgets(name, sizeof(name), stdin);
	
	printf("Email : ");
	fgets(email, sizeof(email), stdin);
	
	printf("\n------------------------\n");
	printf("Nama Anda : %s", name);
	printf("Alamat Email : %s", email);
	
	return 0;
}