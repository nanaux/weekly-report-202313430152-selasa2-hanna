//Created by 23343068_Hanna Fadilah

#include <stdio.h>

void main(){
	
	int score = 0;
	
	int *p_score = &score;
	
	printf("Isi *p_score = %d\n", *p_score);
	
	printf("Isi score awal = %d\n", score);
	
	*p_score = 5;
	
	printf("Isi score setelah diubah = %d\n", score);
}