#include <cstdio>

using namespace std;
#define MAXN 100
int a[MAXN], n, ans;
int b1[MAXN], b2[MAXN], b3[MAXN];		// 分别记录y, x + y, x - y + 15是否被占用

void dfs(int x) {		// 第x行的皇后放哪儿
	if (x > n) {		// 如果所有皇后已经放置
		ans++;			// 增加结果数量
		if (ans <= 3) {		// 输出前三种答案
			for (int i = 1; i <= n; i++)
				printf("%d ", a[i]);
			puts("");
		}
		return;
	}
	for (int i = 1; i <= n; i++)
		if (b1[i] == 0 && b2[x + i] == 0 && b3[x - i + 15] == 0) {
			a[x] = i;		// 记录放置位置
			b1[i] = 1;		// 占位
			b2[x + i] = 1;
			b3[x - i + 15] = 1;
			dfs(x + 1);		// 下一层递归
			b1[i] = 0;		// 取消占位
			b2[x + i] = 0;
			b3[x - i + 15] = 0;
		}
}

int main() {
	scanf("%d", &n);
	dfs(1);
	printf("%d\n", ans);
	return 0;
}
