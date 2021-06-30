#include <iostream>
#include <cstdlib>

using namespace std;

void swap(int a[], int x, int y){
    int temp = a[x];
    a[x]= a[y];
    a[y] = temp;
}

int locOfSmallest(int a[],int start, int end){
    int i = start;
    int j = i;
    while(i<=end){
        if(a[i]<a[j]){
            j = i;
        }
        i++;
    }
    return j;
}

void selectionSort(int a[],int n){
    int i = 0;
    while(i<n-1){
        int j = locOfSmallest(a,i,n-1);
        swap(a,i,j);
        i++;
    }
}

int main(){
    int a[] = {50,98,349,92,10}; 
    int size = sizeof(a)/sizeof(int);
    for(int i=0;i<size;i++){
        cout<<a[i] <<" ";
    }
    cout<<endl;
    selectionSort(a,size);
    for(int i=0;i<size;i++){
        cout<<a[i] <<" ";
    }
    return 0;
}