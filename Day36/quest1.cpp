#include <iostream>
#include <vector>

using namespace std;

int playGame(vector<int>& a) {
    int result = a[0];
    for (int i = 1; i < a.size(); i++) {
        if (i % 2 == 1) {
            result = min(result, a[i]);
        } else {
            result = max(result, a[i]);
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << playGame(a) << endl;
    }

    return 0;
}
