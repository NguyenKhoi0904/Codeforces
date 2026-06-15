#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; cin >> s;
    int n = s.size();
    vector<int> answer;
    for (int i = 0; i < n;){
        if (s[i] == '-'){
            if (s[i+1] == '.'){
                answer.push_back(1);
                i+=2;
            }
            else{
                answer.push_back(2);
                i+=2;
            }
        }else{
            answer.push_back(0);
            i+=1;
        }
    }
    for(int e : answer) cout << e;
    return 0;
}

