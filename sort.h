/**********************************************************/
/*******************Sorting Algorithms*********************/
/**********************************************************/

//Helping Functions
void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void printElementsInArray(int *a, int length){
	int i;
	for (i = 0; i < length; i++)
		printf("%d ", a[i]);
}

/**********************************************************/
/**********************************************************/

//Insertion Sort
void insertionSort(int *a, int n){
	int i, j;
	for (i = 1; i < n; i++){
		j = i;
		while (j > 0 && (a[j] < a[j-1])){
			swap(&a[j], &a[j-1]);
			j--;
			/*
			printElementsInArray(a, n);
			printf("\n");
			*/
		}
	}
}

/**********************************************************/
/**********************************************************/

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
		/*
		printElementsInArray(a, n);
		printf("\n");
		*/
	}
}

/**********************************************************/
/**********************************************************/

//Merge Sort
void merge(int *a, int min, int mid, int max){
	int i, j, k, m;
	int *temp = (int *) malloc((max+min+1) * sizeof(int));
	j = min;
	k = mid + 1;
	for (i = min; j <= mid && k <= max; i++){
		if (a[j] < a[k])
			temp[i] = a[j++];
		else
			temp[i] = a[k++];
	}
	if (j > mid){
		while (k <= max)
			temp[i++] = a[k++];
	} else {
		while (j <= mid)
			temp[i++] = a[j++];
	}
	for (k = min; k <= max; k++)
		a[k] = temp[k];
}

void mergeSort(int *a, int low, int high){
	if (low >= high)
		return;
	int mid = (low + high) / 2;
	mergeSort(a, low, mid);
	mergeSort(a, mid+1, high);
	merge(a, low, mid, high);
	/*
	printElementsInArray(a, high+1);
	printf("\n");
	*/
}

/**********************************************************/
/**********************************************************/

//Quick Sort
int partition(int *a, int p, int r){
	int x, i, j;
	x = a[p];
	i = p;
	for (j = p+1; j <= r; j++){
		if (a[j] <= x){
			i++;
			swap(&a[i], &a[j]);
		}
	}
	swap(&a[i], &a[p]);
	return i;
}


void quickSort(int *a, int p, int r){
	int q;
	if (p < r){
		q = partition(a, p, r);
		quickSort(a, p, q-1);
		quickSort(a, q+1, r);
		/*
		printElementsInArray(a, r);
		printf("\n");
		*/
	}
}

/**********************************************************/
/**********************************************************/

//Counting Sort
void countingSort(int *a, int n){
	int i, k = 0, j = 0;
	for (i = 0; i < n; i++)
		k = a[i] > k ? a[i] : k;
	int *c = (int *) malloc((k+1) * sizeof(int));
	for (i = 1; i <= k; i++)
		c[i] = 0;
	for (i = 0; i < n; i++)
		c[a[i]]++;
	/*
	printElementsInArray(c, k+1);
	printf("\n");
	*/
	for (i = 1; i <= k; i++)
		while (c[i]--)
			a[j++] = i;
}

/**********************************************************/
/**********************************************************/

//Bubble Sort
void bubbleSort(int *a, int n){
	int i, j;
	for (i = 0; i < n-1; i++)
		for (j = 0; j < n-i-1; j++){
			if (a[j] > a[j+1])
				swap(&a[j], &a[j+1]);
			/*
			printElementsInArray(a, n);
			printf("\n");
			*/
		}
}