#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outFile("details.txt");
    if (outFile.is_open()) {
        outFile << "Name: John Doe" << endl;
        outFile << "Age: 30" << endl;
        outFile << "Occupation: Software Developer" << endl;
        outFile.close();
    }

    ifstream inFile("details.txt");
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }

    return 0;
}
