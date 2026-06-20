#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,d; cin >> n >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int step = 0;
    for(int i = 1; i < n; i++){
        if (a[i]<=a[i-1]){
            int temp = (a[i-1]-a[i])/d +1;
            step += temp;
            a[i] = a[i] + temp*d;
        }
    }
    cout << step << endl;
    return 0;
}

