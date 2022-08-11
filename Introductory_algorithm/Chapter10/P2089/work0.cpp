#include <cstdio>
#include <algorithm>

#define rep(i, a, b) for (int i = max(1, a); i <= min(3, b); i++)

using namespace std;
int n, ans, cnt = 10;
int li[60500][15];

int main() {
    scanf("%d", &n);
    rep(a, n - 27, n - 9)
        rep(b, n - 24 - a, n - 9)
            rep(c, n - 21 - a - b, n - 7 - a - b)
                rep(d, n - 18 - a - b - c, n - 6 - a - b - c)
                    rep(e, n - 15 - a - b - c - d, n - 5 - a - b - c - d)
                        rep(f, n - 12 - a - b - c - d - e, n - 4 - a - b - c - d - e)
                            rep(g, n - 9 - a - b - c - e - f, n - 3 - a - b - c - d - e - f)
                                rep(h, n - 6 - a - b - c - d - e - f - g, n - 2 - a - b - c - d - e - f - g)
                                    rep(i, n - 3 - a - b - c - d - e - f - g - h, n - 1 - a - b - c - d - e - f - g - h)
                                        rep(j, n - a - b - c - d - e - f - g - h - i, n - a - b - c - d - e - f - g - h - i) {
                                            li[ans][0] = a;
                                            li[ans][1] = b;
                                            li[ans][2] = c;
                                            li[ans][3] = d;
                                            li[ans][4] = e;
                                            li[ans][5] = f;
                                            li[ans][6] = g;
                                            li[ans][7] = h;
                                            li[ans][8] = i;
                                            li[ans][9] = j;
                                            ans++;
                                        }
    printf("%d\n", ans);
    for (int i = 0; i < ans; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", li[i][j]);
        }
        printf("\n");
    }
    return 0;
}
