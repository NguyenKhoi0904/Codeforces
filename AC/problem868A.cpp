#include<bits/stdc++.h>

using namespace std;

void readInput(string &password, int &n, vector<string> &words) {
    // Đọc mật khẩu từ dòng đầu tiên
    cin >> password;

    // Đọc số lượng từ
    cin >> n;

    // Đọc n từ tiếp theo và lưu vào vector words
    words.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }
}

int main() {
    string password;
    int n;
    vector<string> words;
    readInput(password, n, words);

    bool flag1 = false, flag2 = false;
    for(int i = 0; i < n; i++){
        if(password[0] == words[i][1]) flag1 = true;
        if(password[1] == words[i][0]) flag2 = true;
        if (password == words[i]){
            cout << "YES\n";
            return 0;
        }
    }
    if (flag1 && flag2) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
