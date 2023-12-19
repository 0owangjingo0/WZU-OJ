#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> lst(n);

    for (int i = 0; i < n; i++) {
        cin >> lst[i];
    }

    sort(lst.begin(), lst.end());

    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        lst[i + 1] = lst[i] + lst[i + 1];
        sum += lst[i + 1];
        sort(lst.begin() + i + 1, lst.end());
    }

    cout << sum << endl;

    return 0;
}