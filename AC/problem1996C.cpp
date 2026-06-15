#include <iostream>
#include <vector>
#include <algorithm>

#define ln "\n"
typedef long long ll;
using namespace std;
void Solve(){
    int n,q; cin >> n >> q;
    string s_A,s_B; cin >> s_A >> s_B;
    vector<vector<int>> frequency_A(n+1, vector<int>(26,0));
    vector<vector<int>> frequency_B(n+1, vector<int>(26,0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 26; j++){
            frequency_A[i+1][j] = frequency_A[i][j];
        }
        frequency_A[i+1][s_A[i] - 'a']++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 26; j++){
            frequency_B[i+1][j] = frequency_B[i][j];
        }
        frequency_B[i+1][s_B[i] - 'a']++;
    }

    while(q--){
        int l,r; cin >> l >> r;
        int ans = 0;
        l-=1;
        int tmp_a,tmp_b;
        for(int i = 0; i < 26; i++){
            tmp_a = frequency_A[r][i] - frequency_A[l][i];
            tmp_b = frequency_B[r][i] - frequency_B[l][i];
            ans += abs(tmp_a - tmp_b);
        }
        cout << ans/2 << ln;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

//#include <bits/stdc++.h>
//typedef long long ll;
//using namespace std;
//
//void Solve() {
//    int n, q;
//    cin >> n >> q;
//    string a, b;
//    cin >> a >> b;
//
//    // Mảng tiền xử lý tần số ký tự
//    vector<vector<int>> freqA(n + 1, vector<int>(26, 0));
//    vector<vector<int>> freqB(n + 1, vector<int>(26, 0));
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < 26; j++) {
//            freqA[i + 1][j] = freqA[i][j];
//            freqB[i + 1][j] = freqB[i][j];
//        }
//        freqA[i + 1][a[i] - 'a']++;
//        freqB[i + 1][b[i] - 'a']++;
//    }
//
//    for (int i = 0; i < n+1; i++) {
//        for (int j = 0; j < 26; j++) {
//            cout << freqA[i][j] << " ";
//        }
//        cout << endl;
//    }
//    cout << endl;
//    for (int i = 0; i < n+1; i++) {
//        for (int j = 0; j < 26; j++) {
//            cout << freqB[i][j] << " ";
//        }
//        cout << endl;
//    }
//    cout << endl;
//    while (q--) {
//        int l, r;
//        cin >> l >> r;
//
//        vector<int> countA(26, 0), countB(26, 0);
//        for (int i = 0; i < 26; i++) {
//            countA[i] = freqA[r][i] - freqA[l - 1][i];
//            countB[i] = freqB[r][i] - freqB[l - 1][i];
//        }
//        for(int i = 0; i < 26; i++) cout << countA[i] << " ";
//        cout << endl;
//        for(int i = 0; i < 26; i++) cout << countB[i] << " ";
//        cout << endl;
//        int c = 0;
//        for (int i = 0; i < 26; i++) {
//            if (countB[i] < countA[i]) {
//                c += countA[i] - countB[i];
//            }
//        }
//        cout << c << endl;
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    int t;
//    cin >> t;
//    while (t--) {
//        Solve();
//    }
//    return 0;
//}
