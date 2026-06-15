#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<string> a(n);
    cin.ignore();
    for (int i = 0; i < n; i++)
        getline(cin, a[i]);
    int length = a[0].size();
    int c = 0;
    for (int i = 0; i < length; i++){
        char cur = a[0][i];
        bool flag = true;
        for(int j = 1; j < a.size(); j++){
            if (a[j][i] != cur){
                flag = false;
                break;
            }
        }
        if (flag) c++;
        else break;
    }
    cout << c << endl;
    return 0;
}

