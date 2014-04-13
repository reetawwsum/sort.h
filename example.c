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
	//insertionSort(a, length);
	//selectionSort(a, length);
	//mergeSort(a, 0, length-1);
	//quickSort(a, 0, length-1);
	//countingSort(a, length);
	//bubbleSort(a, length);
	//heapSort(a, length);
	//bucketSort(a, length);
	radixSort(a, length);
	printElementsInArray(a, length);
	return 0;
}