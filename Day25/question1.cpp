#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int singleNumber = 0;
    for (int num : nums) {
        singleNumber ^= num;
    }

    cout << singleNumber << endl;

    return 0;
}
