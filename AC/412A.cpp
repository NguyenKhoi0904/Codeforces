#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,k; cin >> n >> k;
    string s; cin >> s;

    if (k == n){
        for (int i = n-1; i > 0; i--){
            cout << "PRINT " << s[i] << endl;
            cout << "LEFT" << endl;
        }
        cout << "PRINT " << s[0] << endl;
    }else if (k == 1){
        for(int i = 0; i < n-1; i++){
           cout << "PRINT " << s[i] << endl;
           cout << "RIGHT" << endl;
       }
        cout << "PRINT " << s[n-1] << endl;
    }else{
        if ((n-k)<= (k-1)){
            int tmp = n-k;
            while (tmp--)
                cout << "RIGHT" << endl;
            for (int i = n-1; i > 0; i--){
                cout << "PRINT " << s[i] << endl;
                cout << "LEFT" << endl;
            }
            cout << "PRINT " << s[0] << endl;
        }else{
            int tmp = k-1;
            while (tmp--)
                cout << "LEFT" << endl;
            for(int i = 0; i < n-1; i++){
               cout << "PRINT " << s[i] << endl;
               cout << "RIGHT" << endl;
           }
            cout << "PRINT " << s[n-1] << endl;
        }
    }
    return 0;
}

