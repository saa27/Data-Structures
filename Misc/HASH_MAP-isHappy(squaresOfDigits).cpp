class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> u;
        int sum=0;
        
        while(n){
            u[n]++;
            while(n){
                sum = sum + (n%10) * (n%10);
                n = n/10;
            }
            if(sum == 1) return true;
            if(u.count(sum) > 0) return false;
            
            n = sum;
            sum=0;
        }
      return false;  
    }
};