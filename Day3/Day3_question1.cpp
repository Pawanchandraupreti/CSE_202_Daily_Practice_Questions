#include <iostream>

using namespace std;

int main() {
    int N;
    
    cout << "Enter a number: ";
    cin >> N;
    
    int sum = 0;
    
    for (int i = 1; i <= N; ++i) {
        sum += i;
    }
    
    cout << "The sum of the first " << N << " natural numbers is: " << sum << endl;
    
    return 0;
}