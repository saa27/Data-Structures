#include <bits/stdc++.h>

using namespace std;

bool matchingPair(char c,char d){
    if(c=='(' && d==')')
    return true;
    else if(c=='{' && d=='}')
    return true;
    else if(c=='[' && d==']')
    return true;
    return false;
}

// Complete the isBalanced function below.
string isBalanced(string s) {

std::stack<char> st;

for(size_t j=0;j<s.size();j++){
    if(s[j]=='('||s[j]=='{'||s[j]=='['){
        st.push(s[j]);
    }
    else{
       
        if(st.empty()==true)
        return "NO";
        char x = st.top();
        st.pop();
        if(matchingPair(x,s[j])==false)
        return "NO";
    }
}
if(st.empty())
return "YES";
else
return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
