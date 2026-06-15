#include <bits/stdc++.h>

using namespace std;
void readInput(int &n,string &s, vector<string> &a){
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin >> s;
    a.resize(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}
int main(){
    int n;
    string s;
    vector<string> a;
    readInput(n,s,a);
    if (n % 2 == 0) cout << "home\n";
    else cout << "contest\n";
    return 0;
}

