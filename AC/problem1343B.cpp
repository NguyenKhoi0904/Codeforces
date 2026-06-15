#include <bits/stdc++.h>

using namespace std;
struct Result{
    string s;
    vector<int> v;
};
int main(){
    int t; cin >> t;
    vector<Result> result;
    while(t--){
        int n; cin >> n;
        vector<int>  tmp;
        if ((n/2)%2 == 0){
            int even = 2, sum = 0;
            for(int i = 0; i < n/2; i++){
                tmp.push_back(even);
                sum += even;
                even+=2;
            }
            int odd = 1;
            for (int i = n/2; i < n-1; i++){
                tmp.push_back(odd);
                sum -= odd;
                odd+=2;
            }
            tmp.push_back(sum);
            result.push_back({"YES",tmp});
        }else{
            result.push_back({"NO",tmp});
        }
    }
    for (auto e: result){
        cout << e.s << endl;
        if (e.v.size() != 0){
            for (auto ele: e.v)
                cout << ele << " ";
            cout << endl;
        }
    }
    return 0;
}

