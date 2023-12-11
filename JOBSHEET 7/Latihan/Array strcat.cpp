//Created by 23343068_Hanna Fadilah

#include <stdio.h>

void main(){
	
	char nama[] = "Agariadne D. S.";
	char gelar[] = ", S.Kom, M.Pd.T.";
	
	strcat(nama, gelar);
	
	printf("Nama Lengkap\t: %s\n", nama);
}