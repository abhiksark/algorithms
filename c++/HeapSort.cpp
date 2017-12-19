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


void Heapify(int array[],int root,int size){
    int left = 2 * root + 1, largest;
    int right = left + 1, temp;

    if(left < size && array[left] > array[root])
        largest = left;
    else
        largest = root;

    if(right < size && array[right] > array[largest])
        largest = right;

    if(largest != root){
        temp = array[root];
        array[root] = array[largest];
        array[largest] = temp;
        Heapify(array, largest, size);
    }
}

void BuildHeap(int array[], int size){
    for(int i = (size - 1) / 2; i >= 0; i--)
        Heapify(array, i, size);
}


void HeapSort(int array[], int size){
    BuildHeap(array, size);
    int temp, i;

    for(i = size - 1; i > 0; i--){
        temp = array[0];
        array[0] = array[i];
        array[i] = temp;
        Heapify(array, 0, i);
    }
}

void PrintArray(int array[], int size){
    for(int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main(){
	int array[] = {2, 4, 3, 1, 6, 8, 4};
	HeapSort(array,7);
	PrintArray(array, 7);
	return 0;
}