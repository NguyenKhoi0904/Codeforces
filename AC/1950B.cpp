#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int temp,tmp;
        bool flag = true;
        for(int i = 0; i < n; i++){

            if (flag){
                for(int k = 0; k < 2; k++){
                    tmp = 0;
                    for(int j = 0; j < n; j++){
                        if (tmp % 2 == 0){
                            cout << "##";
                            tmp++;
                        }else{
                            cout << "..";
                            tmp++;
                        }
                    }
                    cout << endl;
                }
                flag = false;
            }else{
                for(int k = 0; k < 2; k++){
                    tmp = 0;
                    for(int j = 0; j < n; j++){
                        if (tmp % 2 == 0){
                            cout << "..";
                            tmp++;
                        }else{
                            cout << "##";
                            tmp++;
                        }
                    }
                    cout << endl;
                }
                flag = true;
            }
        }
    }
    return 0;
}

