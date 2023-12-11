//Created by 23343068_Hanna Fadilah
#include <stdio.h>

int main (){
	char password[30];
	
	printf("Log in aktivasi belajar\n");
	printf("Masukkan Password anda : ");
	scanf("%s", &password);
	
	if( strcmp(password, "Semangat") == 0){
		printf("Selamat datang Calon sukses\n");
	} else {
		printf("Password anda salah, coba lagi!\n");
	}
	
	printf("Silahkan nikmati dunia IDE C");
	
	return 0;
}