//Created by 23343068_Hanna Fadilah

#include <stdio.h>

void main(){
	int umur = 19;
	float tinggi = 175.6;
	
	int *pointer_umur = &umur;
	int *pointer2 = umur;
	float *p_tinggi = &tinggi;
	
	printf("Alamat memori variabel 'umur' = %d\n", &umur);
	printf("Alamat memori variabel 'tinggi' = %d\n", &tinggi);
	
	printf("Referensi alamat memori *pointer_umur = %d\n", pointer_umur);
	printf("Referensi alamat memori *pointer2 = %d\n", pointer2);
	printf("Referensi alamat memori *p_tinggi = %d\n", p_tinggi);
	
	printf("Alamat memori *pointer_umur = %d\n", &pointer_umur);
	printf("Alamat memori *pointer2 = %d\n", &pointer2);
	printf("Alamat memori *p_tinggi = %d\n", &p_tinggi);
}