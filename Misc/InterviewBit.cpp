#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    vector<int> a;
    while(n--){
        cin>>x;
        a.push_back(x);
    }

    unordered_map<int,int> mp;
    for(int i=0;i<a.size();i++){
        mp[a[i]]++;
    }
    for(int i=0;i<a.size();i++){
        auto it = mp.find(a[i]);
        if(it != mp.end()){
            a[i] = a[i]+it->second-1;
            mp.erase(it);
        }
    }
   
   for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
    


