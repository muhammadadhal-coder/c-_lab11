
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    k = k % n;

    for (int i = 0; i < n; i++) {
        cout << arr[(i + k) % n];

        if (i < n - 1) {
            cout << " ";
        }
    }

    cout << "\n";

    delete[] arr;
    arr = nullptr;

    return 0;
}
