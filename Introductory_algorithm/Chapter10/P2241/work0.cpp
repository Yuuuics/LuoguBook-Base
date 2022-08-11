#include <cstdio>
#include <algorithm>

typedef unsigned long long ull;

using namespace std;
ull n, m, squ, rec;

int main() {
    scanf("%lld %lld", &n, &m);
    for (ull x = 0; x <= n; x++)
        for (ull y = 0; y <= m; y++) {
            ull tmp = min(x, y) + min(y, n - x) + min(n - x, m - y) + min(m - y, x);
            squ += tmp;
            rec += n * m - tmp;
        }
    printf("%lld %lld\n", squ / 4, rec / 4);
    return 0;
}
