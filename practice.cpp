#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    
    vector<int> arr(5, 0); // Use a vector to store counts of group sizes 1 to 4.

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr[a]++;
    }

    cnt = arr[4]; // Count the number of groups of size 4.

    if (arr[3] >= arr[1]) {
        cnt += arr[3]; // If there are enough groups of size 3, add them to the count.
        arr[1] = 0; // Set the remaining groups of size 1 to 0.
    }
    else {
        cnt += arr[3]; // Add all groups of size 3.
        arr[1] -= arr[3]; // Subtract the groups of size 3 from groups of size 1.
    }

    if (arr[2] >= arr[1]) {
        if (arr[2] % 2 == 0)
            cnt += (arr[2] / 2); // If there are enough groups of size 2, add half of them.
        else
            cnt += (arr[2] / 2) + 1; // If there's an odd group of size 2, add half and one more taxi.
    }
    else {
        arr[2] += (arr[1] / 2); // Fill groups of size 2 with half of the groups of size 1.
        cnt += (arr[2] / 2); // Add half of the groups of size 2.
        if (arr[2] % 2 != 0 || arr[1] % 2 != 0) {
            cnt++; // If there's an odd group of size 2 or 1, add one more taxi.
        }
    }

    cout << cnt << endl;

    return 0;
}
