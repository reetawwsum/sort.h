/***************************************/
/***********Sorting Algorithms**********/
/***************************************/

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

//Insertion Sort
void insertionSort(int *a, int n){
	int i, j;
	for (i = 1; i < n; i++){
		j = i;
		while (j > 0 && (a[j] < a[j-1])){
			swap(&a[j], &a[j-1]);
			j--;
		}
	}
}