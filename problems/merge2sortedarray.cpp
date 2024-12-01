#include <iostream>
#include <vector>
using namespace std;

vector<int> merge2SortedArray(vector<int>& a, vector<int>& b) {
    int i = a.size() - 1; // Pointer to the last valid element in original `a`
    int j = b.size() - 1; // Pointer to the last element in `b`

    a.resize(a.size() + b.size()); // Resize `a` to accommodate all elements

    int k = a.size() - 1; // Pointer to the last position in resized `a`

    // Merge `a` and `b` from the back
    while (i >= 0 && j >= 0) {
        if (a[i] > b[j]) {
            a[k] = a[i];
            k = k - 1;
            i = i - 1;
        } else {
            a[k] = b[j];
            k = k - 1;
            j = j - 1;
        }
    }

    // Copy remaining elements from `b` (if any)
    while (j >= 0) {
        a[k] = b[j];
        k = k - 1;
        j = j - 1;
    }

    // Remaining elements in `a` are already in place, no need to copy them
    return a;
}

int main() {
    vector<int> a = {1, 1, 3, 4, 7};
    vector<int> b = {2, 3, 5, 6};

    vector<int> newArr = merge2SortedArray(a, b);

    // Print the merged array
    for (int num : newArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
