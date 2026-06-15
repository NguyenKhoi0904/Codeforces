//#include <bits/stdc++.h>
//
//using namespace std;
//int main(){
//    int t; cin >> t;
//    long long int ordinary_num;
//    while(t--){
//        int n; cin >> n;
//        if (n < 10) cout << n << endl;
//        else{
//            int logNumver = n / 10;
//            ordinary_num = 9 + logNumver
//            cout << ordinary_num << endl;
//        }
//    }
//    return 0;
//}

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        // Đếm số chữ số của n
        int num_digits = log10(n) + 1;

        // Số lượng số thông thường có ít hơn số chữ số của n
        int ordinary_num = (num_digits - 1) * 9;

        // Số lượng số thông thường có cùng số chữ số với n
        int first_digit = n / pow(10, num_digits - 1);

        // Tạo số thông thường lớn nhất có cùng số chữ số với n
        int largest_ordinary_with_same_digits = 0;
        for (int i = 0; i < num_digits; ++i) {
            largest_ordinary_with_same_digits = largest_ordinary_with_same_digits * 10 + first_digit;
        }

        // Nếu số đó <= n, cộng thêm số lượng đó vào ordinary_num
        if (largest_ordinary_with_same_digits <= n) {
            ordinary_num += first_digit;
        } else {
            ordinary_num += (first_digit - 1);
        }

        cout << ordinary_num << endl;
    }
    return 0;
}
