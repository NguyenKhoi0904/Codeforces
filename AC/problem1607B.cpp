#include <bits/stdc++.h>

using namespace std;
//int ct(int x0, int n){ // Nếu x0 là chẵn, ngược lại thì sum+1
//    int sum = 0,c = 0,l = 0;
//    bool flag = true;
//    for(int i = 2; i <= n; i++){
//        if(flag){
//            sum += i;
//            c++;
//            if (c == 2){
//                c = 0;
//                flag = false;
//            }
//        }else{
//            sum += (-1)*i;
//            l++;
//            if (l == 2){
//                l = 0;
//                flag = true;
//            }
//        }
//    }
//    return sum-1;
//}
void Solve(){
    long long x0, n; cin >> x0 >> n;
    long long d;
    switch (n%4){
    case 0:
        d = 0;
        break;
    case 1:
        d = n;
        break;
    case 2:
        d = -1;
        break;
    case 3:
        d = -n-1;
        break;
    }
    if (x0 % 2 == 0){
        cout << x0 - d << endl;
    }else cout << x0 + d << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

