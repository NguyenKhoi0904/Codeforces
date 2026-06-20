#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,c; cin >> n >> c;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int l_score = 0, r_score = 0;
    int l_time = 0, r_time = 0;
    for (int i = 0, j = n-1; i < n && j >= 0; i++,j--){
        l_time += b[i];
        r_time += b[j];
        l_score = l_score + max(0,(a[i] - (l_time*c)));
        r_score += max(0, a[j] - (r_time*c));
    }
    if (l_score > r_score) cout << "Limak\n";
    else if (l_score < r_score) cout << "Radewoosh\n";
    else cout << "Tie\n" << endl;
    return 0;
}

