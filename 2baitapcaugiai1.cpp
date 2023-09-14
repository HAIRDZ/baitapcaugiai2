#include <iostream>
#include <unordered_map>

using namespace std;

int CountPair(int arr[], int n) {
    unordered_map<int, int> num_count;
    int count = 0;

    for (int i = 0; i < n; i++) {
        // Increment the count for the current number
        num_count[arr[i]]++;

        // If there was at least one occurrence before, add it to the count
        if (num_count[arr[i]] > 1) {
            count += num_count[arr[i]] - 1;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = CountPair(arr, n);
    cout << result << endl;

    return 0;
}
