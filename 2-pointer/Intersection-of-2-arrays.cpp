#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        set<int>::iterator itr;
        vector<int> res;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] < nums2[j])
                i++;
            else if(nums1[i] > nums2[j])
                j++;
            else{
                s.insert(nums1[i]);
                i++;
                j++;
            }
        }
        
        int k = 0;
        for (itr = s.begin(); itr != s.end(); itr++){
            res.push_back(*itr);
        }
        
        return res;
    }
};