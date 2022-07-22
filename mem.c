#include <stdio.h>
#include <limits.h>

int find_max_val_from_array(int* arr, int len) {
	int i;
	int max = INT_MIN; //0x7FFFFFFF;
	for (i = 0; i < len; i++) {
		if (max < arr[i]) {
			max = arr[i];
		} 
	}
	return max;
}

int find_min_val_from_array(int* arr, int len) {
	int i;
	int min = INT_MAX; //0x7FFFFFFF;
	for (i = 0; i < len; i++) {
		if (min > arr[i]) {
			min = arr[i];
		} 
	}
	return min;
}

void find_min_max_val_from_array(int* arr, int len, int* _min, int* _max) {
	int i;
	int min = INT_MAX; //0x7FFFFFFF;
	int max = INT_MIN; //0x7FFFFFFF;
	// arr[i] => ptr
	for (i = 0; i < len; i++, arr++) {
		if (min > *(arr)) {
			min = *(arr);
		} 
		if (max < *(arr)) {
			max = *(arr);
		} 
	}
	*_min = min;
	*_max = max;
}

int main(void) {
	int i, len;
	int arr[10] = {1, 3, 5, 7, 1, 17, 89, 2, 5, 8};
	int min;
	int max; //0x80000000;
	len = sizeof(arr) / sizeof(int);

	/*
	for (i = 0; i < len; i++) {
		scanf("%d", &arr[i]);
		// arr[i] = input()
	}
	*/

	for (i = 0; i < len; i++) {
		/* finding min/max */
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	/*
	min = find_min_val_from_array(arr, len);
	max = find_max_val_from_array(arr, len);
	*/
	find_min_max_val_from_array(arr, len, &min, &max);

	printf("min: %d, max: %d\n", min, max);
	return 0;
}
