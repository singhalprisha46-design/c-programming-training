#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int *ptr = arr;
    int maxVal = *ptr;

    for (int i = 1; i < n; i++) {
        if (*(ptr + i) > maxVal) {
            maxVal = *(ptr + i);
        }
    }

    cout << "Largest: " << maxVal;

    return 0;
}
