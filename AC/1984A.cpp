#include <bits/stdc++.h>

using namespace std;
struct stringPair{
    string temp;
    string b;
};
int main(){
    int t; cin >> t;
    vector<stringPair> answer;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        bool flag = false;
        int left = 0, right = n-1,mid;
        for(int i = 0; i < n-1; i++){
            if (a[i] - a[0] != a[n-1] - a[i+1]){
                flag = true;
                mid = i;
                break;
            }
        }
        if (flag){
            string tmp = "";
            for(int i = 0; i <= mid; i++){
                tmp += 'R';
            }
            for(int i = mid + 1; i < n; i++){
                tmp += 'B';
            }
            answer.push_back({"YES", tmp});
        }
        else{
            answer.push_back({"NO", ""});
        }
    }
    for (auto e : answer){
        cout << e.temp << endl;
        if (e.b != "")
            cout << e.b << endl;
    }
    return 0;
}

