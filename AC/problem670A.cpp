#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    int mindayoff = n/7 * 2 + min(n%7,2);
    int maxdayoff = (n+1)/7 * 2 - (n%7==6);
    cout << min(mindayoff, maxdayoff) << " " << max(mindayoff, maxdayoff) << endl;
    return 0;
}

