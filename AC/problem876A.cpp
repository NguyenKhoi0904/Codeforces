#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,a,b,c; cin >> n >> a >> b >> c;
    n--;
    int walk = 0;
    char point = 'r';
    while(n--){
        if(point == 'r'){
            walk += min(a,b);
            point = (a<b)?'o':'e';
        }else if (point == 'o'){
            walk += min(a,c);
            point = (a<c)?'r':'e';
        }else{
            walk += min(b,c);
            point = (b<c)?'r':'o';
        }
    }
    cout << walk << endl;
    return 0;
}

