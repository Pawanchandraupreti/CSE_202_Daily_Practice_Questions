#include <iostream>
#include <string>
using namespace std;

void countVowelsConsonants(string str) {
    int vowels = 0, consonants = 0;
    for (char ch : str) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    countVowelsConsonants(input);
    return 0;
}
