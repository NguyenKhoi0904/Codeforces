#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int c1,c2,c3; cin >> c1 >> c2 >> c3;
        vector<int> a(5);
        for (int i = 0; i < 5; i++)
            cin >> a[i];
        bool flag = true;
        if (c1 < a[0] || c2 < a[1] || c3 < a[2]){
            cout << "NO" << endl;
        }else{
            for(int i = 0; i < 3; i++){
                switch (i){
                case 0:
                    if (c1 >= a[0]){
                        c1 -= a[0];
                        a[0] = 0;
                    }else{
                        a[0] -= c1;
                        c1 = 0;
                    }
                    break;
                case 1:
                    if (c2 >= a[1]){
                        c2 -= a[1];
                        a[1] = 0;
                    }else{
                        a[1] -= c2;
                        c2 = 0;
                    }
                    break;
                case 2:
                    if (c3 >= a[2]){
                        c3 -= a[2];
                        a[2] = 0;
                    }else{
                        a[2] -= c3;
                        c3 = 0;
                    }
                    break;
                }
            }

            if (c1 >= a[3]){
                c1 -= a[3];
                a[3] = 0;
            }else{
                a[3] -= c1;
                c1 = 0;
            }
            if (c2 >= a[4]){
                c2 -= a[4];
                a[4] = 0;
            }else{
                a[4] -= c2;
                c2 = 0;
            }
            if (a[3] + a[4] > c3) flag = false;
            if (flag) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}


//            case 3:
//                if (c1 >= a[3]){
//                    c1 -= a[3];
//                    a[3] = 0;
//                }else{
//                    a[3] -= c1;
//                    c1 = 0;
//                    if (c3 >= a[3]){
//                        c3 -= a[3];
//                        a[3] = 0;
//                    }else{
//                        a[3] -= c3;
//                        c3 = 0;
//                    }
//                }
//                break;
//            case 4:
//                if (c2 >= a[4]){
//                    c2 -= a[4];
//                }else{
//                    a[4] -= c2;
//                    c2 = 0;
//                    if (c3 >= a[4]){
//                        c3 -= a[4];
//                        a[4] = 0;
//                    }else{
//                        a[4] -= c3;
//                        c3 = 0;
//                    }
//                }

