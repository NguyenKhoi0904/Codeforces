#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<char> DIRS = {'v', '<', '^', '>'};

    char a, b;
    cin >> a >> b;
    int n;
    cin >> n;
    int a_index = find(DIRS.begin(), DIRS.end(), a) - DIRS.begin();
    int b_index = find(DIRS.begin(), DIRS.end(), b) - DIRS.begin();
    int delta = (b_index - a_index + 4) % 4;
    if (delta == 0 || delta == 2) {
        cout << "undefined" << endl;
    } else if (delta == n % 4) {
        cout << "cw" << endl;
    } else {
        cout << "ccw" << endl;
    }
    return 0;
}
