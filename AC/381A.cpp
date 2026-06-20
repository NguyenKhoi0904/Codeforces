#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int s = 0, d = 0;
    int i = 0, j = n-1;
    bool turn = true;
    while(i <= j){
        if(turn){
            s += max(a[i],a[j]);
            if (a[i] <= a[j]) j--;
            else i++;
            turn = false;
        }
        else{
            d += max(a[i],a[j]);
            if (a[i] <= a[j]) j--;
            else i++;
            turn = true;
        }
    }
    cout << s << " " << d;
    return 0;
}

