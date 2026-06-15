#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int c;
    int s = 0;
    for(int i = 0; i < n-1; i++){
        c = 1;
        if (a[i] != 0){
            for(int j = i+1; j < n; j++){
                if (a[i] == a[j] ) c++;
            }
            if (c == 2) s++;
            else if (c == 3){
                    cout << -1 << endl;
                    return 0;
            }
        }
    }
    cout << s << endl;
    return 0;
}

