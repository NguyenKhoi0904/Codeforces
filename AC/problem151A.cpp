#include <bits/stdc++.h>

using namespace std;
int main(){
    //n: friends
    //k: bottles
    //l: milliliters
    //c limes
    //d slices
    //p grams of salt
    //nl milliliters of the drink
    //np grams of salt
    int n, k, l, c, d, p, nl, np; cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min((k*l)/nl,min(c*d,p/np))/n << endl;
    return 0;
}

