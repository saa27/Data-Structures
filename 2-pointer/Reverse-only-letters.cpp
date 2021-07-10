#include <bits/stdc++.h>
using namespace std;

string reverseOnlyLetters(string s) {
        int n = s.length();
        if(n == 1)
            return s;
        int l =0;
        int r =n-1;
        int i=0;
        string res="";
        while(r>=0 || l<=n-1){
            if(isalpha(s[l]) and isalpha(s[r])){
                res +=s[r];
                r--;
                l++;
            }
            else if(!isalpha(s[l])){
                res+= s[l];
                l++;
            }
            else if(!isalpha(s[r]))
                r--;
        }
        return res;
}

int main(){
    string a = "7_28]";
    string ans = reverseOnlyLetters(a);

    cout<<ans;
    return 0;
}