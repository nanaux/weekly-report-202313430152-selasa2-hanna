//created by Hanna Fadilah_23343068
#include <stdio.h>

int main() {
    char text[] = "BORLAND";
    char *ptr = text;

    while (*ptr != '\0') {
        char *innerPtr = ptr;
        while (*innerPtr != '\0') {
            printf("%c", *innerPtr);
            innerPtr++;
        }
        printf("\n");
        ptr++;
    }

    return 0;
}