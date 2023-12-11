//Created by 23343068_Hanna Fadilah

#include<stdio.h>

int main(){
	char username[30], password[30];
	
	printf("Welcome to My World\n");
	printf("Usename: ");
	scanf("%s", &username);
	printf("Password: ");
	scanf("%s", &password);
	
	if(username, "PINK"==0 ) {
		if(password, "pinkyy"==0 ){
			printf("Selamat datang ananda!\n");
		}else {
			printf("Password salah, silahkan coba lagi!\n");
		}
	}else {
		printf("Anda belum terdaftar\n");
	}
	return 0;
}