



#include<stdio.h>
#include<stdlib.h>

int main(void) {
int *arr;
int n=16383;

arr=(int *)malloc(n * sizeof(int));

if (arr == NULL) {
printf("\n\t ...Speicherfehler ?!\n");
return 1;
}

for (int i=0; i<n; i++){
arr[i]=i*16383;
}

for (int i=0; i<n; i++){
printf("%d",arr[i]);
}

free(arr);
printf("\t\n .... ready !!!!\n");
return(0);
}


