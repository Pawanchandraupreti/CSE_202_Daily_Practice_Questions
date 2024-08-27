#include <iostream>

using namespace std;

float calculateAverage() {
    int grades[5];
    int sum = 0;

    for (int i = 0; i < 5; ++i) {
        cout << "Enter grade " << (i + 1) << ": ";
        cin >> grades[i];
        sum += grades[i];
    }

    return static_cast<float>(sum) / 5;
}

int main() {
    float average = calculateAverage();
    cout << "The average grade is: " << average << endl;

    return 0;
}