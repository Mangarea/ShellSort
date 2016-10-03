#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<stdio.h>
#include <algorithm> 

using namespace std;


void ShellSort(int* array, int begin, int end){
	int gap;
	int temp;
	int i, j;
	for (gap = end / 2; gap > 0; gap = gap/2){
		for (i =  gap-1; i < end; i ++){
			temp = array[i];
			for (j = i; j > gap-1 && array[j - gap] > temp; j = j-gap){
				array[j] = array[j - gap];
			}
			array[j] = temp;
		}
	} 
}

int main(){
	int n;
	cin >> n;
	int *array = new int[n];
	for (int i = 0; i < n; i++){
		array[i] = rand() % n;
	}

	ShellSort(array, 0, n);

	system("pause");

	delete[]array;

	return 0;
}