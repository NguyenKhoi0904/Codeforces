//#include <bits/stdc++.h>
//
//using namespace std;
//int main(){
//    int t; cin >> t;
//    while(t--){
//        int n; cin >> n;
//        vector<int> a(n);
//        for (int i = 0; i < n; i++)
//            cin >> a[i];
//        sort(a.begin(), a.end());
//        vector<int> b(n);
//        for (int i = 0; i < n; i++)
//            cin >> b[i];
//        sort(b.begin(), b.end());
//        long long int step = 0;
//        for(int i = 1; i < n-1; i++){
//            step = step + a[i]-a[0];
//            step = step + b[i]-b[0];
//        }
//        if (n > 2){
//            if (a[n-1]-a[0] < b[n-1]-b[0]){
//                int tmp = a[n-1]-a[0];
//                step = step + tmp;
//                b[n-1] = b[n-1] - tmp;
//                step = step + b[n-1] - b[0];
//            }else if (a[n-1]-a[0] > b[n-1]-b[0]){
//                int tmp = b[n-1]-b[0];
//                step = step + tmp;
//                a[n-1] = a[n-1] - tmp;
//                step = step + a[n-1] - a[0];
//            }else{
//                step = step + a[n-1] - a[0];
//            }
//        }
//        cout << step << endl;
//    }
//    return 0;
//}

#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> b[i];
        long long int step = 0;
        int min_a = *min_element(a.begin(), a.end());
        int min_b = *min_element(b.begin(), b.end());
        for(int i = 0; i < n; i++){
            step = step + max(a[i]-min_a,b[i]-min_b);
        }
        cout << step << endl;
    }
    return 0;
}

