#include<iostream>
#include <string> 

using namespace std;
string concatStr() {
    string a, b;
    cout << "Enter the first string: ";
    cin >> a;
    cout << "Enter the second string: ";
    cin >> b;
    return a + b;
}

int main() {
    string r= concatStr();
    
    cout << "Concatenated string: " <<r<< endl;

    return 0;
}