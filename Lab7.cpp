#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool findPair(vector<int>& arr, int target, pair<int, int>& result) {
    unordered_map<int, int> freq;

    for (int i = 0; i < arr.size(); i++) {
        if (freq.find(target - arr[i]) != freq.end()) {
            result = make_pair(arr[i], target - arr[i]);
            return true;
        }
        freq[arr[i]]++;
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
    }
    else {
        cout << "No pair found that sums to " << target << endl;
    }

    return 0;
}
