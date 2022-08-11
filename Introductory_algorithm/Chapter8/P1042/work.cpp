#include <iostream>
#include <cmath>

using namespace std;
int f[2] = {11, 21};    // 两种赛制的获胜得分
int a[25 * 2500 + 10], n = 0;

int main() {
    ios::sync_with_stdio(false);
    char tmp;
    while (1) {
        cin >> tmp; // 不断读入结果
        if (tmp == 'E') break;
        else if (tmp == 'W') a[n++] = 1;        // 华华赢
        else if (tmp == 'L') a[n++] = 0;        // 华华输
    }
    for (int k = 0; k < 2; k++) {       // 两种赛制
        int w = 0, l = 0;
        for (int i = 0; i < n; i++) {
            w += a[i];
            l += 1 - a[i];
            if ((max(w, l) >= f[k]) && abs(w - l) >= 2) {
                cout << w << ":" << l << endl;
                w = l = 0;
            }
        }
        cout << w << ":" << l << endl;     // 未完成的比赛也要输出结果
        cout << endl;
    }
    return 0;
}
