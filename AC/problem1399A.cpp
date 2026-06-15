#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    vector<string> ans;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        for (int i = 0; i < n-1; i++){
            for (int j = i+1; j < n; j++){
                if (abs(a[i] - a[j]) <= 1){
                    a[i] = -1;
                    break;
                }
            }
        }
        int possitive = 0;
        for(int i = 0; i < n && possitive <= 1; i++){
            if (a[i] > 0)   possitive++;
        }
        if (possitive <= 1) ans.push_back("YES");
        else    ans.push_back("NO");
    }
    for (auto e: ans) cout << e << endl;
    return 0;
}

// CÁCH GIẢI CỦA CODE FORCES

//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
////	freopen("output.txt", "w", stdout);
//#endif
//
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		cin >> n;
//		vector<int> a(n);
//		for (auto &it : a) cin >> it;
//		sort(a.begin(), a.end());
//		bool ok = true;
//		for (int i = 1; i < n; ++i) {
//			ok &= (a[i] - a[i - 1] <= 1);
//		}
//		if (ok) cout << "YES" << endl;
//		else cout << "NO" << endl;
//	}
//
//	return 0;
//}
