#include <bits/stdc++.h>

using namespace std;
int main(){
    int b,k; cin >> b >> k;
    vector<int> a(k);
    for (int i = 0; i < k; i++)
        cin >> a[i];
    if (b % 2 == 0){
        if (a[k-1] % 2 == 0) cout << "even\n";
        else cout << "odd\n";
    }else{
        int odd = 0;
        for(int i = 0; i < k; i++){
            if (a[i]%2 !=0) odd++;
        }
        if (odd%2 == 0) cout << "even\n";
        else cout << "odd\n";
    }
    return 0;
}
