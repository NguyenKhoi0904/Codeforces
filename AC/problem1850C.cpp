#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        vector<string> answer(8);
        for(int i = 0; i < 8; i++){
            cin >> answer[i];
        }
        int length = answer[0].size();
        string s;
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < length; j++){
                if (answer[i][j] != '.')
                    s += answer[i][j];
            }
        }
        cout << s << endl;
    }
    return 0;
}

