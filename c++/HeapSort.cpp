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