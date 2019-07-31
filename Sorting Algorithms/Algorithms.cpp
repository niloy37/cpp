// Autor: Lukas Vyhnalek
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void selectionSort(int input[], int n) { 
	// n is length of our array
	for (int i = 0; i < n - 1; i++) {
		// i points at first number behind "wall"
		int indexOfSmallest = i;
		for (int j = i + 1; j < n; j++) {
			if (input[j] < input[indexOfSmallest]) {
				indexOfSmallest = j;
			}
		}
		// swap
		int temp = input[i];
		input[i] = input[indexOfSmallest];
		input[indexOfSmallest] = temp;
	}
}

void bubbleSort(int input[], int n) {
	for (int i = 0; i < n - 1; i++) {
		// i represents how many elements 
		// have bubbled to correct place
		for (int j = 0; j + 1 < n - i; j++) {
			if (input[j] > input[j + 1]) {
				//swap
				int temp = input[j];
				input[j] = input[j + 1];
				input[j + 1] = temp;
			}
		}
	}
}

void merge(int input[], int from, int middle, int to) {
	int lengthLeft = middle - from + 1;
	int lengthRight = to - middle;
	int *left = new int[lengthLeft + 1];
	int *right = new int[lengthRight + 1];

	for (int i = 0; i < lengthLeft; i++) {
		left[i] = input[from + i];
	}
	for (int i = 0; i < lengthRight; i++) {
		right[i] = input[middle + i + 1];
	}
	left[lengthLeft] = INT_MAX;
	right[lengthRight] = INT_MAX;

	int leftPointer = 0;
	int rightPointer = 0;
	for (int i = from; i <= to; i++) {
		if (left[leftPointer] > right[rightPointer]) {
			input[i] = right[rightPointer];
			rightPointer++;
		}
		else {
			input[i] = left[leftPointer];
			leftPointer++;
		}
	}
}

void mergeSort(int input[], int from, int to) {
	if (from < to) {
		int middle = (from + to) / 2;
		mergeSort(input, from, middle);
		mergeSort(input, middle + 1, to);
		merge(input, from, middle, to);
	}
}

// this function can be used for "mergeSort call" where you only pass array
// it generates "from" and "to" parameters
void mergeSortExecutor(int input[], int n) {
	mergeSort(input, 0, n - 1);
}

int partition(int input[], int from, int to) {
	int pivot = input[to];
	int wall = from;
	for (int i = from; i < to; i++) {
		if (input[i] <= pivot) {
			int temp = input[wall];
			input[wall] = input[i];
			input[i] = temp;
			wall++;
		}
	}
	input[to] = input[wall];
	input[wall] = pivot;

	return wall;
}

void quickSort(int input[], int from, int to) {
	if (from < to) {
		int indexOfPivot = partition(input, from, to);
		quickSort(input, from, indexOfPivot - 1);
		quickSort(input, indexOfPivot + 1, to);
	}
}

// this function can be used for "quickSort call" where you only pass array
// it generates "from" and "to" parameters
void quickSortExecutor(int input[], int n) {
	quickSort(input, 0, n - 1);
}


int* generateArray(int size, int from, int to) {
	int* result = new int[size];
	for (int i = 0; i < size; i++) {
		result[i] = from + (rand() % static_cast<int>(to - from + 1));
	}
	return result;
}

bool isSorted(int array[], int n) {
	for (int i = 0; i < n - 1; i++) {
		if (array[i] > array[i + 1]) {
			return false;
		}
	}
	return true;
}

bool isSortedDecreasing(int array[], int n) {
	for (int i = 0; i < n - 1; i++) {
		if (array[i] < array[i + 1]) {
			return false;
		}
	}
	return true;
}

void printArray(int array[], int n) {
	for (int i = 0; i < n; i++) {
		cout << array[i] << ", ";
	}
	cout << endl;
}
void bubbleSortOpt(int input[], int n);
void quickSortMedianExecutor(int input[], int n);
int main()
{
	const int SIZE_OF_TESTING_ARRAY = 1000;
	const int NUMBER_OF_ARRAYS = 1000;
	const int RANGE_FROM = 1;
	const int RANGE_TO = 1000;

	const int NUMBER_OF_ALGORITHMS = 6; // Do not change unless you add another algorithm
	string functionNames[NUMBER_OF_ALGORITHMS] = { "Selection Sort" ,"Bubble Sort" ,"Optimalized Bubble Sort" ,"Merge Sort" ,"Quick Sort" ,"Median Quick Sort"};
	void (*functions[NUMBER_OF_ALGORITHMS])(int*,int) = { selectionSort, bubbleSort, bubbleSortOpt, mergeSortExecutor, quickSortExecutor, quickSortMedianExecutor };

	for (int i = 0; i < NUMBER_OF_ALGORITHMS; i++) {
		bool allSorted = true;
		clock_t begin = clock();

		for (int j = 0; j < NUMBER_OF_ARRAYS; j++) {
			int* inputArray = generateArray(SIZE_OF_TESTING_ARRAY, RANGE_FROM, RANGE_TO);
			int cloneArray[SIZE_OF_TESTING_ARRAY];
			memcpy(cloneArray, inputArray, 4 * sizeof(int)); // Copy all numbers from inputArray to cloneArray

			(functions[i])(inputArray, SIZE_OF_TESTING_ARRAY);
			if (! isSorted(inputArray, SIZE_OF_TESTING_ARRAY)) {
				allSorted = false;
				cout << functionNames[i] << endl;
				cout << "ERROR this array is not sorted " << endl;
				printArray(cloneArray, SIZE_OF_TESTING_ARRAY);
				cout << "Returned " << endl;
				printArray(inputArray, SIZE_OF_TESTING_ARRAY);
			}
		} 

		clock_t end = clock();
		double seconds = double(end - begin) / CLOCKS_PER_SEC;

		if (allSorted) {
			cout << "*******************************************" << endl;
			cout << "Finished " << NUMBER_OF_ARRAYS << " tests." << endl;
			cout << functionNames[i] << endl;
			cout << "Took : " << seconds << " seconds." << endl;
		}
	}
	


	/*
	Example of Simple call
	int input[10] = { 10,8,9,7,6,5,4,3,2,1 };
	mergeSortExecutor(input, 10);
	printArray(input, 10);
	*/

	return 0;
}

void bubbleSortOpt(int input[], int n) {
	for (int i = 0; i < n - 1; i++) {
		// i represents how many elements have bubbled to correct place
		bool swapped = false;
		for (int j = 0; j + 1 < n - i; j++) {
			if (input[j] > input[j + 1]) {
				//swap
				swapped = true;
				int temp = input[j];
				input[j] = input[j + 1];
				input[j + 1] = temp;
			}
		}
		if (!swapped) {
			return;
		}
	}
}

int medianOfThree(int input[], int first, int middle, int last) {
	int array[] = { input[first], input[middle], input[last] };
	selectionSort(array, 3);
	if (array[1] == input[first]) {
		return first;
	}
	else if (array[1] == input[middle]) {
		return middle;
	}
	else {
		return last;
	}
}

int partitionMedian(int input[], int from, int to) {
	int indexOfPivot = medianOfThree(input, from, (from + to) / 2, to);
	int pivot = input[indexOfPivot];
	if (indexOfPivot != to) {
		input[indexOfPivot] = input[to];
	}
	int wall = from;
	for (int i = from; i < to; i++) {
		if (input[i] <= pivot) {
			int temp = input[wall];
			input[wall] = input[i];
			input[i] = temp;
			wall++;
		}
	}
	input[to] = input[wall];
	input[wall] = pivot;

	return wall;
}
void quickSortMedian(int input[], int from, int to) {
	if (from < to) {
		int indexOfPivot = partitionMedian(input, from, to);
		quickSortMedian(input, from, indexOfPivot - 1);
		quickSortMedian(input, indexOfPivot + 1, to);
	}
}

// this function can be used for "quickSortAverage call" where you only pass array
// it generates "from" and "to" parameters
void quickSortMedianExecutor(int input[], int n) {
	quickSortMedian(input, 0, n - 1);
}
