#include <cstdio>
#include <algorithm>

using namespace std;
typedef unsigned long long ull;

int main() {
    ull n, m, squ = 0, rec = 0;
    scanf("%lld %lld", &n, &m);
    for (ull x = 0; x <= n; x++) {
        for (ull y = 0; y <= m; y++) {
            ull tmp = min(x, y);
            squ += tmp;
            rec += x * y - tmp;
        }
    }
    printf("%lld %lld\n", squ, rec);
    return 0;
}
