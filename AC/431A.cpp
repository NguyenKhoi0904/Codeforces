#include <bits/stdc++.h>

using namespace std;
int main(){
    vector<int> a(4);
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    string s; cin >> s;
    int calories = 0;
    for(char e : s)
        calories += a[e-'0'-1];
    cout << calories << endl;
    return 0;
}
