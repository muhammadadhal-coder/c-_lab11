
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums;
    int x;

    while (cin >> x) {
        nums.push_back(x);
    }

    int max_val = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > max_val) {
            max_val = nums[i];
        }
    }

    cout << "count = " << nums.size() << "\n";
    cout << "max = " << max_val << "\n";

    for (int i = nums.size() - 1; i >= 0; i--) {
        cout << nums[i];
        if (i > 0) {
            cout << " ";
        }
    }

    cout << "\n";

    return 0;
}
