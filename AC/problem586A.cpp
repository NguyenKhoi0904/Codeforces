#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int tmp = 0;
    for(int i = 0; i < n; i++){
        if (a[i] != 0){
            tmp = i;
            break;
        }
    }
    int pairs = 0;
    for(int i = tmp; i < n-1;){
        if (a[i] == 1){
            pairs++;
            i++;
        }else{
            int c = 1;
            for(int j = i+1; j < n; j++){
                if(a[j] == 0){
                    c++;
                    i = j;
                }
                else{
                    i = j;
                    break;
                }
            }
            if (c == 1) pairs++;
        }
    }
    if (a[n-1] == 1) pairs++;
    cout << pairs << endl;
    return 0;
}

