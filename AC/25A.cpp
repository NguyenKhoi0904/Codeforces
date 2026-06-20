#include <iostream>
#include <vector>

#define ln "\n"
using namespace std;

void Solve(){
    int n; cin >> n;
    vector<int> odd, even;
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        if(tmp % 2 == 0) even.push_back(i+1);
        else odd.push_back(i+1);
    }
    if(even.size() < odd.size()) cout << even[0] << ln;
    else cout << odd[0] << ln;
}
int main(){
    Solve();
    return 0;
}
