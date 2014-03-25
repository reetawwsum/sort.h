#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main(void){
	int length, *a, i;
	printf("How many elements do you want to sort :");
	scanf("%d", &length);
	a = (int *) malloc (length * sizeof(int));
	for (i = 0; i < length; i++)
		scanf("%d", &a[i]);
	selectionSort(a, length);
	for (i = 0; i < length; i++)
		printf("%d ", a[i]);
	return 0;
}