#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    stack<char> st;
    st.push('A');
    for (char c : s){
        if (c != st.top()){
            st.push(c);
        }
    }
    cout << s.size() - (st.size() - 1) << endl;
    return 0;
}

