#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,b,d; cin >> n >> b >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0, c = 0;
    for(int i = 0; i < n; i++){
        if (a[i] <= b){
            sum += a[i];
            if (sum > d){
                c++;
                sum = 0;
            }
        }
    }
    cout << c << endl;
    return 0;
}

