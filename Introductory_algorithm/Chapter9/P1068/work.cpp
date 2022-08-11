#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int n, m;
struct node {
    int k{}, s{};
    friend bool operator < (node a, node b) {
        if (a.s != b.s) return a.s > b.s;
        return a.k < b.k;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m;
    struct node a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i].k >> a[i].s;
    sort(a + 1, a + n + 1);
    int newM = floor(m * 1.5);
    int score = a[newM].s;
    for (int i = 1; i <= n; i++)
        if (a[i].s >= score && i > newM) newM++;
    cout << score << " " << newM << endl;
    for (int i = 1; i <= n; i++)
        if (a[i].s >= score) cout << a[i].k << " " << a[i].s << endl;
    return 0;
}
