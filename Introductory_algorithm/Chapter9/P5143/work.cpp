#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;
int n;
double totalDistance;
struct node {
    int x{}, y{}, z{};
    friend bool operator < (node a, node b) {
        return a.z < b.z;
    }
} a[50500];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d %d %d", &a[i].x, &a[i].y, &a[i].z);
    sort(a + 1, a + n + 1);
    for (int i = 2; i <= n; i++)
        totalDistance += sqrt(pow(a[i - 1].x - a[i].x, 2) + pow(a[i - 1].y - a[i].y, 2) + pow(a[i - 1].z - a[i].z, 2));
    printf("%.3lf\n", totalDistance);
    return 0;
}
