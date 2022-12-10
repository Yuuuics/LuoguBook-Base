#include <bits/stdc++.h>

using namespace std;
const int ARR = 300;

int n;
int value[ARR], winner[ARR];

void dfs(int x) {
    if (x >= 1 << n) {  // 叶子节点
        return;
    } else {
        dfs(2 * x); // 左子树
        dfs(2 * x + 1); // 右子树
        int lvalue = value[2 * x], rvalue = value[2 * x + 1];
        if (lvalue > rvalue) {
            // 左节点获胜
            value[x] = lvalue;  // 记录获胜方能力值
            winner[x] = winner[2 * x];  // 获胜方编号
        } else {
            // 右节点获胜
            value[x] = rvalue;
            winner[x] = winner[2 * x + 1];
        }
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < 1 << n; i++) {
        scanf("%d", &value[i + (1 << n)]);  // 读入各个节点的能力值
        winner[i + (1 << n)] = i + 1;   // 叶子节点的获胜方就是自己国家的编号
    }
    dfs(1); // 从根节点开始遍历
    printf("%d\n", value[2] > value[3] ? winner[3] : winner[2]);    // 找亚军
    return 0;
}
