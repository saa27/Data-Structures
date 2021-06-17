class Solution {
public:
    int romanToInt(string s) {
        int count = 0;
        int prev = 0;
        unordered_map <char, int> roman = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        
        
        for(int i = s.length()-1; i>=0;i--){
            char ch = s[i];
            int curr = roman[ch];
            if(curr>=prev)
                count += curr;
            else
                count -= curr;
            prev = curr;
        }
        return count;
    }
};