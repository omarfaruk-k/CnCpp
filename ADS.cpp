#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> vv;

        for (int i = 0; i < n; i++) {
            int st,ed;
            cin >> st >> ed;
            vv.push_back({st, ed});
        }

        sort(vv.begin(), vv.end());

        int cnt = 1;
        int prev= vv[0].second;

        for (int i = 1; i < n; i++) {
            if (vv[i].first >= prev) {
                cnt++;
                prev = vv[i].second;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
