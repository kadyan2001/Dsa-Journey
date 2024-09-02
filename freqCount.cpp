#include<bits/stdc++.h>
using namespace std;



    void frequency(int arr[],int n){

        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[arr[i]]++;

        }

        int maxFreq=0;
        int minFreq=n;
        int maxEle=0 ;
        int minEle=0;

        for(auto it:mp){
            int count=it.second;
            int ele=it.first;

            if(count>maxFreq){
                maxFreq=count;
                maxEle=ele;
            }

            if(count<minFreq){
                minFreq=count;
                minEle=ele;
            }
        }

        cout<<maxEle<<endl;
        cout<<minEle<<endl;
    }

    int main(){
        int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    frequency(arr, n);
    return 0;
    }
