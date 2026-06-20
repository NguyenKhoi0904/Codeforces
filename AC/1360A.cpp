#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int a,b; cin >> a >> b;
        cout << pow(min(max(2*b,a),max(2*a,b)),2) << endl;
    }
    return 0;
}
//
//int main(){
//    int t; cin >> t;
//    while(t--){
//        int a,b; cin >> a >> b;
//        int tmp = max(a,b);
//        if (a%2 == 0 && b%2 == 0){
//            while(true){
//                if (tmp*tmp >= a*b*2){
//                    break;
//                }else tmp*=2;
//            }
//        }else{
//            while(true){
//                if (tmp*tmp >= a*b*2){
//                    break;
//                }else tmp+=1;
//            }
//        }
//        cout << tmp*tmp << endl;
//    }
//    return 0;
//}
