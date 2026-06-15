#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    vector<int> answer;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        bool flag = false;
        for(int i = 1; i < n-1; i++){
            if (a[i] != a[i-1]){
                if (a[i-1] != a[i+1]){
                    answer.push_back(i-1);
                    flag = true;
                    break;
                }
                else{
                    answer.push_back(i);
                    flag = true;
                    break;
                }
            }
        }
        if (!flag){
            if (a[n-1] != a[n-2]) answer.push_back(n-1);
        }
    }
    for(auto e: answer) cout << e + 1 << endl;
    return 0;
}
