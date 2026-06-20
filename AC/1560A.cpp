#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> answer;
    while(n--){
        int k; cin >> k;
        for (int i = 1; ;i++){
            if (i % 3 == 0 || i % 10 == 3)
                continue;
            if(--k == 0){
                answer.push_back(i);
                break;
            }
        }
    }
    for (int e : answer)    cout << e << endl;
    return 0;
}

