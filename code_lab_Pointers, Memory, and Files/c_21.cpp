#include <iostream>
using namespace std;

int* grow(int* old, int n, int new_n)
{
    int* bigger = new int[new_n];
    for (int i = 0; i < n; i++) {
        bigger[i] = old[i];
    }
    delete[] old;
    return bigger;
}

int main()
{
    int capacity = 1;
    int size = 0;
    int* a = new int[capacity];

    int x;
    while (cin >> x) {
        if (size == capacity) {
            a = grow(a, size, capacity * 2);
            capacity *= 2;
        }
        a[size] = x;
        size++;
    }

    cout << "size = " << size << "\n";
    cout << "capacity = " << capacity << "\n";
    for (int i = 0; i < size; i++) {
        cout << a[i];
        if (i < size - 1) cout << " ";
    }
    cout << "\n";

    delete[] a;
    a = nullptr;
    return 0;
}