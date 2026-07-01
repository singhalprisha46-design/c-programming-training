#include <iostream>
#include <algorithm>   // required for reverse(),sort(),max_element()
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string rev = s;
    reverse(rev.begin(), rev.end());

    if (s == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
