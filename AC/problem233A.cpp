#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    if (n % 2 != 0) cout << -1 << endl;
    else{
        vector<int> a(n);
        iota(a.begin(), a.end(),1); // Tạo 1 vector có giá trị từ 1 -> n
        for(int i = 0; i < n; i+=2){
            swap(a[i],a[i+1]);
        }
        for (int e : a)
            cout << e << " ";
        cout << endl;
    }
    return 0;
}

