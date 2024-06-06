#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        int last = -1;
        int cur;
        int max = INT_MAX;
        for (int i = 0; i < N; i++) {
            cin >> cur;
            if (i == 0) {
                last = cur;
                continue;
            }
            max = std::min(max, std::max(cur, last));
            last = cur;
        }
        cout << max - 1 << endl;
    }
}
