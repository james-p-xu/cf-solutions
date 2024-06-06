#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int T, X, Y;
    cin >> T;
    while (T--) {
        cin >> X >> Y;
        int xo;
        xo = X ^ Y;
        cout << (xo & -xo) << endl;
    }
}

