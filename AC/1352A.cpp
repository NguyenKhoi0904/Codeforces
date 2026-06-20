#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int p = 1;
    vector<int> st;
    for (int i = 0; i < n; i++){
        while(a[i] > 0){
            int tmp = a[i] % 10;
            if (tmp > 0){
                st.push_back((tmp*p));
            }
            a[i] = a[i] / 10;
            p *= 10;
        }
        p = 1;
        cout << st.size() << endl;
        for (auto num : st) cout << num << " ";
        cout << endl;
        st.clear();
    }
    delete[] a;
    return 0;
}
