#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int count = 0;
    bool inWord = false;

    for (char c : s) {
        if (c != ' ' && !inWord) {
            count++;
            inWord = true;
        } else if (c == ' ') {
            inWord = false;
        }
    }

    cout << "Words: " << count;
    return 0;
}
