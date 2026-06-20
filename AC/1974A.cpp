#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int x,y; cin >> x >> y;
        int screen = 0;
        int empty = 0;
        if (y > 2){
            screen = ceil(y*1.0/2);
            if (y % 2 == 0){
                empty = 7 * screen;
            }else{
                empty = 7 * (screen-1) + 11;
            }
            if (x > empty){
                x = x - empty;
                int tmp = ceil(x*1.0/15);
                screen += tmp;
            }
        }else{
            switch(y){
            case 0:
                empty = 15;
                if (x != 0){
                    if (x > empty){
                        screen = 1;
                        x = x - empty;
                        int tmp = ceil(x*1.0/15);
                        screen += tmp;
                    }else screen = 1;
                }
                break;
            case 1:
                empty = 11;
                screen = 1;
                if (x > empty){
                    x = x - empty;
                    int tmp = ceil(x*1.0/15);
                    screen += tmp;
                }
                break;
            case 2:
                empty = 7;
                screen = 1;
                if (x > empty){
                    x = x - empty;
                    int tmp = ceil(x*1.0/15);
                    screen += tmp;
                }
                break;
            }
        }
        cout << screen << endl;
    }
    return 0;
}

//        while(x != 0 && y != 0){
//            if (x >= 2){
//                tmp = tmp - 8;
//                y-=2;
//                if (x >= 7){
//                    tmp = tmp - 7;
//                    x -= 7;
//                }else{
//                    tmp -= x;
//                    x = 0;
//                }
//                screen++;
//            }
//        }
