#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int m; cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];
    double mm = INT_MIN; int c = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            double tmp = 1.0*b[j]/a[i];
            if(tmp == (int)tmp){
                if(tmp > mm){
                    mm = tmp;
                    c = 1;
                }else if(tmp == mm){c++;}
            }
        }
    }
    cout << c << endl;
    return 0;
}

