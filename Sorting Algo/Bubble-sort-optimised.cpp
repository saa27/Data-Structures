#include <bits/stdc++.h>
using namespace std;

void swap(int a[], int x, int y){
    int temp = a[x];
    a[x]= a[y];
    a[y] = temp;
}

void bubbleSort(int a[], int n){
    for (int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(a[j+1]<a[j]){
                swap(a,j+1,j);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

int main(){
    int a[] = {50,98,349,92,10}; 
    int size = sizeof(a)/sizeof(int);
    for(int i=0;i<size;i++){
        cout<<a[i] <<" ";
    }
    cout<<endl;
    bubbleSort(a,size);
    for(int i=0;i<size;i++){
        cout<<a[i] <<" ";
    }
    return 0;
}