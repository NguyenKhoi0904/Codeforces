#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    char spectator = 'C';
    for(int i = 0; i < n; i++){
        switch(a[i]){
        case 1:
            if (spectator == 'A'){
                cout << "NO\n";
                return 0;
            }
            if (spectator == 'C')
                spectator = 'B';
            else spectator = 'C';
            break;
        case 2:
            if (spectator == 'B'){
                cout << "NO\n";
                return 0;
            }
            if (spectator == 'A')
                spectator = 'C';
            else spectator = 'A';
            break;
        case 3:
            if (spectator == 'C'){
                cout << "NO\n";
                return 0;
            }
            if (spectator == 'A')
                spectator = 'B';
            else spectator = 'A';
            break;
        }
    }
    cout << "YES\n";
    return 0;
}

