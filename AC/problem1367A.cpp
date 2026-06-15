#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<string> answer;
    while(n--){
        string s; cin >> s;
        string tmp;
        for (int i = 0; i < s.size()-1;i++){
            if (i % 2 == 0) tmp += s[i];
        }
        tmp += s[s.size()-1];
        answer.push_back(tmp);
    }
    for (string e: answer)  cout << e << endl;
    return 0;
}

