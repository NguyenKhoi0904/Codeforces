#include <bits/stdc++.h>

using namespace std;
enum Shape{
    TETRAHEDRON,
    CUBE,
    OCTAHEDRON,
    DODECAHEDRON,
    ICOSAHEDRON,
    UNKNOWN
};
Shape getShape(string &shapeName){
    static unordered_map<string,Shape> shapeMap = {
        {
            "Tetrahedron", TETRAHEDRON
        },
        {
            "Cube", CUBE
        },
        {
            "Octahedron", OCTAHEDRON
        },
        {
            "Dodecahedron", DODECAHEDRON
        },
        {
            "Icosahedron", ICOSAHEDRON
        }
    };
    auto it = shapeMap.find(shapeName);
    if (it != shapeMap.end()) {
        return it->second;
    }
    return UNKNOWN;
}
int main(){
    int n; cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++){
        Shape shape = getShape(v[i]);
        switch (shape){
        case TETRAHEDRON:
            sum += 4;
            break;
        case CUBE:
            sum += 6;
            break;
        case OCTAHEDRON:
            sum += 8;
            break;
        case DODECAHEDRON:
            sum += 12;
            break;
        case ICOSAHEDRON:
            sum += 20;
            break;

        }
    }
    cout << sum << endl;
    return 0;
}

