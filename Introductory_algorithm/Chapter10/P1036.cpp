#include <iostream>

namespace programNamespace {
    using namespace std;
    int a[30];
    int n, k, ans;

    bool check(int x) {     // 判断质数
        for (int i = 2; i * i <= x; i++)
            if (x % i == 0)
                return 0;
        return 1;
    }

    int main() {
        ios::sync_with_stdio(false);
        cin >> n >> k;
        for (int i = 0; i < n; i++) cin >> a[i];
        int U = 1 << n; // U-1即为全集
        for (int S = 0; S < U; S++) // 枚举所有子集[0, U)
            if (__builtin_popcount(S) == k) {     // 找到k元子集
                int sum = 0;
                for (int i = 0; i < n; i++)
                    if (S & (1 << i))       // 如果第i个元素在S中
                        sum += a[i];
                if (check(sum)) ans++;
            }
        cout << ans << endl;
        return 0;
    }
}

int main() {
    return programNamespace::main();
}
