



#include <stdio.h>

int main() {
    unsigned int a = 4194303;        // Declare an integer variable
    unsigned int *p = &a;       // Pointer p points to the address of a
    unsigned int **ptr1 = &p;    // Pointer to pointer ptr points to the address of p

for (a = 0;a<4194304;a++) {
    printf("Value of a: \t %d\n", a);       // Direct access to a
    printf("Value of a using p: \t %d\n", *p);  // Access a through p
    printf("Value of a using ptr1: \t %d\n", **ptr1); // Access a through ptr

}
	printf("\t\n .... dunno !!!!\n");
    return 0;
}

