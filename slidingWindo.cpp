#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int longstSubstr(string s){

    vector<int> mpp(256,-1);
    int l=0;
    int r=0;

    int n=s.size();
    int len=0;

    while(r<n){

        if(mpp[s[r]]!=-1)
            l=max(mpp[s[r]]+1,l);

            mpp[s[r]]=r;

            len=max(len,r-l+1);
            r++;
    }
        return len;
    }
};


int main() {
  string s = "takeUforward";

  Solution obj;
  cout << "The length of the longest substring without repeating characters is " <<obj.longstSubstr(s);

  return 0;
}