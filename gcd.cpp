#include<bits/stdc++.h>
using namespace std;

int gcd(int n1,int n2){

    while(n1>0 && n2>0){

        if(n1>n2){
            n1=n1%n2;
        }
        else{
            n2=n2%n1;
        }

    }
        if(n1==0){
            return n2;
        }
        else{
            return n1;
        }
}

int main(){
    int n1=20,n2=15;

    int findGCD=gcd(n1,n2);

    cout<<"gcd of "<<n1<<"and"<<n2<<"is:"<<findGCD<<endl;
    return 0;
}