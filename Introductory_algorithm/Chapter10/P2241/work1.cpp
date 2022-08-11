#include <cstdio>
#include <algorithm>

typedef unsigned long long ull;

using namespace std;
ull n, m, squ, rec;

int main() {
    scanf("%lld %lld", &n, &m);
    for (ull a = 1; a <= min(m, n); a++)
        squ += (n - a + 1) * (m - a + 1);
    rec = n * (n + 1) * m * (m + 1) / 4 - squ;
    printf("%lld %lld\n", squ, rec);
    return 0;
}
