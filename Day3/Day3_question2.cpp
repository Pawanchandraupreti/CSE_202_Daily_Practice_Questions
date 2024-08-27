#include <iostream>

using namespace std;

int main() {
    int N;
    
    cout << "Enter a number: ";
    cin >> N;
    
    int factorial = 1;

    for (int i = 1; i <= N; ++i) {
        factorial *= i;
    }
    
    cout << "The factorial of " << N << " is: " << factorial << endl;
    
    return 0;
}