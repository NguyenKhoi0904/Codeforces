#include <bits/stdc++.h>

using namespace std;
// CHỈ SỬ DỤNG ĐƯỢC VỚI TRƯỜNG HỢP l,r bé
//int main(){
//    int n; cin >> n;
//    vector<int> result;
//    while(n--){
//        long long int l,r; cin >> l >> r;
//        if (r % 2 != 0){
//            r -= 1;
//        }
//        int max_sc = -1;
//        for (long long int x = r; x >= r/2; x-=2){
//            long long int tmp = x;
//            int score = 0;
//            if (tmp % 2 == 0){
//                while(tmp != 1){
//                    if (tmp % 2 == 0){
//                        tmp = tmp / 2;
//                        score++;
//                    }else{
//                        tmp = 1;
//                        score++;
//                    }
//                }
//            }
//            if (max_sc < score) max_sc = score;
//        }
//        result.push_back(max_sc);
//    }
//    for (auto e : result)
//        cout << e << endl;
//    return 0;
//}

int main(){
    int t; cin >> t;
    vector<int> re;
    while(t--){
        int l,r; cin >> l >> r;
        re.push_back((int)log2(r));
    }
    for (auto e : re)   cout << e << endl;
    return 0;
}
