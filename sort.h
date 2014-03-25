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

//Selection Sort
void selectionSort(int *a, int n){
	int i, j, smallest;
	for (i = 0; i < n-1; i++){
		smallest = i;
		for (j = i + 1; j < n; j++){
			if (a[j] < a[smallest])
				smallest = j;
		}
		swap(&a[i], &a[smallest]);
	}
}