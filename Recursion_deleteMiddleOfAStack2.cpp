#include <iostream>
#include<stack>
#include<algorithm>
using namespace std;


void deleteMiddle(stack<int> &s,int k){
    //Base condition
        if(s.size()==0) return;
        if(k==0) s.pop(); // k==1 means delete 1st element from top
    // hypothesis
    int ElAtTop = s.top();
    s.pop();
    deleteMiddle(s,k-1);
    // Induction step
    s.push(ElAtTop);
}

void deleteMiddleEl(stack<int> &st, int m){
    if(st.size()==0) return;  // edge case
    if(st.size()==m){  // base case 
        st.pop();
        return;
    }
    int temp = st.top();
    st.pop();
    deleteMiddleEl(st, m);
    st.push(temp);
}

int main() {

    /*
            6
            5                                                 6  
            4                                                 5  
            3                                                 3              
            2  |                                    |         2  
    before: 1  |  middle element = st.size()/2  + 1 |  after: 1 
    
    */
    int n; cin>>n;
    stack<int> st ;
    for(int i=0;i<n;i++){
        int temp ; cin>>temp;
        st.push(temp);
    }
    int m = st.size()/2 +1;
    // METHOD 1
    deleteMiddleEl(st,m);

    //METHOD 2
    // int k =st.size() - m ;
    // deleteMiddle(st,k);
    for(int i=0;i<n-1;i++){
        int temp = st.top();
        st.pop();
        cout<<temp<<" ";
    }
}