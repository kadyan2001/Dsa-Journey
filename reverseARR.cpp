#include<bits/stdc++.h>
using namespace std;


void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArr(int arr[],int start,int end){
    if(start<end){
        swap(arr[start],arr[end]);
        reverseArr(arr,start+1,end-1);
    }
}

int main(){
    int n=5;
    int arr[]={5,6,4,3,2};
    reverseArr(arr,0,n-1);
    printArr(arr,n);
}