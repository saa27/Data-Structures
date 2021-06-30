#include <iostream>
#include <cstdlib>

#define MAX 100
using namespace std;

int main(){
    int n;
    int a[MAX];
    cout<<"enter size:"<<endl;
    cin>> n;

    for(int i=0;i<n;i++){
        a[i] = rand();
    }
    for(int i=0;i<n;i++){
        cout<<a[i] <<" ";
    }
    cout<<endl;

    //sorting an array in ascending order using swapping
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                int temp = a[i];
                a[i] = a[j];
                a[j] =temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i] <<" ";
    }
    return 0;
}