#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMinTankSize(int n, int x, vector<int>& stations) {
    int maxDistance = max(stations[0], x - stations[n - 1]);
    for (int i = 1; i < n; i++) {
        maxDistance = max(maxDistance, stations[i] - stations[i - 1]);
    }
    return maxDistance;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> stations(n);
        for (int i = 0; i < n; i++) {
            cin >> stations[i];
        }

        cout << findMinTankSize(n, x, stations) << endl;
    }

    return 0;
}
