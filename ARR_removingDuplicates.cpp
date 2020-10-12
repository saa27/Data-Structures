class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n = a.size();
        int i=0,j=0,k=0;
        
        while(i<n){
            j=i;
            while(j<n and a[j] == a[i])
                j++;
            a[k++] = a[i];
            i=j;
        }
        
        return k;
    }
};