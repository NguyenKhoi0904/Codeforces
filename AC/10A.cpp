#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,p1,p2,p3,t1,t2; cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    vector<vector<int>> a(n, vector<int>(2));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin >> a[i][j];
        }
    }
    int power = 0;
    if (n==1){
        power = (a[0][1] - a[0][0]) * p1;
        cout << power << endl;
    }else{
        for(int i = 0; i < n-1; i++){
            power += (a[i][1] - a[i][0]) * p1;
            int tmp = (a[i+1][0] - a[i][1]);
            if (tmp <= t1){
                power += tmp*p1;
                tmp = 0;
            }else{
                power += t1*p1;
                tmp -= t1;
                if (tmp <= t2){
                    power += tmp*p2;
                    tmp = 0;
                }else{
                    power += t2*p2;
                    tmp -= t2;
                    if(tmp > 0){
                        power += tmp*p3;
                    }
                }
            }
        }
        power += (a[n-1][1] - a[n-1][0]) * p1;
        cout << power << endl;
    }
    return 0;
}

