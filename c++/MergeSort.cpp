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

int n;
int in[MAX_N],tmp[MAX_N];
void merge(int left,int mid,int right){
	int h,i,j,k;
	h=left;
	i=left;
	j=mid+1;
	while(h<=mid && j<=right){
		if(in[h]<=in[j]){
			tmp[i]=in[h];
			h++;
		}
		else {
			tmp[i]=in[j];
			j++;
		}
		i++;
	}
	if(h>mid){
		for(k=j;k<=right;k++){
			tmp[i]=in[k];
			i++;
		}
	}
	else {
		for(k=h;k<=mid;k++){
			tmp[i]=in[k];
			i++;
		}
	}
	for(k=left;k<=right;k++) in[k] = tmp[k];

}
void mergeSort(int left,int right){
	if(left == right)
		return;
	int mid =(left + right )/2;
	mergeSort(left,mid);
	mergeSort(mid+1,right);
	merge(left,mid,right);

}

int main(){
	int n=8;
	in[0]=4;in[1]=2;in[2]=1;in[3]=0;in[4]=5;in[5]=6;in[6]=9;in[7]=8;
	mergeSort(0,n-1);
	for(int i=0;i<n;i++)
		cout<<in[i]<<endl;
	return 0;
}