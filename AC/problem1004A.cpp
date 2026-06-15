#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    long long d; cin >> d;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cities = 0;
    for(int i = 0; i < n-1; i++){
        int tmp =  a[i]+d;
        int temp = a[i+1]-d;
        if (tmp < temp) cities+=2;
        else if(tmp == temp) cities++;
    }
    cout << cities+2 << endl;
    return 0;
}

