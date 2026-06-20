#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    int sum = accumulate(a.begin(), a.end(),0);
    int r, tmp = 0;
    for(int i = 0; i < n; i++){
        tmp += a[i];
        if (tmp > (sum-tmp)){
            r = i+1;
            break;
        }
    }
    cout << r << endl;
    return 0;
}

//5
//4 2 2 2 2
