#include <cstdio>

using namespace std;
#define rep(i, a, b) for (int i = a; i <= b; i++)
int n, ans, cnt = 10;

int main() {
    
    scanf("%d", &n);
    rep(a, 1, 3) rep(b, 1, 3) rep(c, 1, 3) rep(d, 1, 3) rep(e, 1, 3)
        rep(f, 1, 3) rep (g, 1, 3) rep(h, 1, 3) rep(i, 1, 3) rep(j, 1, 3)
            if (a + b + c + d + e + f + g + h + i + j == n)
                ans++;
    printf("%d\n", ans);
    rep(a, 1, 3) rep(b, 1, 3) rep(c, 1, 3) rep(d, 1, 3) rep(e, 1, 3)
        rep(f, 1, 3) rep (g, 1, 3) rep(h, 1, 3) rep(i, 1, 3) rep(j, 1, 3)
            if (a + b + c + d + e + f + g + h + i + j == n)
                printf("%d %d %d %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g, h, i, j);
    return 0;
}
