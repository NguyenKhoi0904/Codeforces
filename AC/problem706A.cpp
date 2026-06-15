#include <bits/stdc++.h>

using namespace std;
int main(){
    int a,b; cin >> a >> b;
    int n; cin >> n;
    double time = INT_MAX;
    while(n--){
        int x,y,v; cin >> x >> y >> v;
        time = min(time,(1.0*sqrt(pow(x-a,2)+pow(y-b,2))/v));
    }
    cout << fixed << setprecision(6) << time << endl;
    return 0;
}
