/*
abhiksarkar
Merge Sort
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <complex>
#define MAX_N 1000001
using namespace std;
typedef long long lld;
int *temp;
void conquerMerge(int array[], int left, int right, int mid){
    int k = left, i, j;

    for(i = left, j = mid + 1; i <= mid && j <= right; k++){
        if(array[i] <= array[j]){
            temp[k] = array[i];
            i++;
        }
        else{
            temp[k] = array[j];
            j++;
        }
    }

    while(i <= mid){
        temp[k] = array[i];
        i++;
        k++;
    }

    while(j <= right){
        temp[k] = array[j];
        j++;
        k++;
    }

    for(i = left; i <= right; i++)
        array[i] = temp[i];
}
void divide(int array[], int left, int right){
    if(left < right){
        int mid = left + (right - left) / 2;

        divide(array, left, mid);
        divide(array, mid + 1, right);

        conquerMerge(array, left, right, mid);
    }
}
void MergeSort(int array[], int size){
    temp = new int[size];
    divide(array, 0, size - 1);
    delete [] temp;
}
void PrintArray(int array[], int size){
    for(int i = 0; i < size; i++)
        cout << array[i] << " ";

    cout << endl;
}

int main(){
	int array[] = {2, 4, 3, 1, 6, 8, 4};
	MergeSort(array,7);
	PrintArray(array, 7);
	return 0;
}