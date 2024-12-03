#include <iostream>
#include <vector>
using namespace std;

bool findPair(vector<int>& arr, int target, pair<int, int>& result) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == target) {
                result = make_pair(arr[i], arr[j]);
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<int> arr;
    int n, target;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    cout << "Enter the target sum: ";
    cin >> target;

    pair<int, int> result;
    if (findPair(arr, target, result)) {
        cout << "Pair found: (" << result.first << ", " << result.second << ")" << endl;
    } else {
        cout << "No pair found that sums to " << target << endl;
    }

    return 0;
}
