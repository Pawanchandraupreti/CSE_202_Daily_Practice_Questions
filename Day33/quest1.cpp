#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<char, int>& a, const pair<char, int>& b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

string frequencySort(string s) {
    unordered_map<char, int> freqMap;
    for (char c : s) {
        freqMap[c]++;
    }

    vector<pair<char, int>> freqVec(freqMap.begin(), freqMap.end());
    sort(freqVec.begin(), freqVec.end(), compare);

    string result;
    for (auto& entry : freqVec) {
        result += string(entry.second, entry.first);
    }
    return result;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    string sortedString = frequencySort(s);
    cout << "Sorted string by frequency: " << sortedString << endl;

    return 0;
}
