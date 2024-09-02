#include<bits/stdc++.h>

using namespace std;


bool isPalindrome(int n){

    int revNum=0;

    int dup=n;


    while(n>0){

        int ld= n%10;

        revNum=(revNum*10)+ld;

        n=n/10;
    }

    if(revNum==dup){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n=133531;

    if(isPalindrome(n)){
        cout<<n<<"is a palindrome"<<endl;

    }
    else{
        cout<<n<<"is not a palindrome"<<endl;
    }

    return 0;

}