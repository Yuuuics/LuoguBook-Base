#include <iostream>
#include <algorithm>

using namespace std;
int nowTime, maxTime, sum;	// 子集中的时间和、最大合法时间和、该课作业总时长
int ans, maxDeep;	// 答案，最深递归层数限制（作业数量）
int s[4], a[21];	// 每课作业数量，每个作业的耗时

void dfs(int x) {
	if (x > maxDeep) {	// 所有作业枚举完毕，达到了最大递归层数
		maxTime = max(maxTime, nowTime);	// 如果解更优，更新答案
		return;
	}
	if (nowTime + a[x] <= sum / 2) {	// 如果放入这个作业是合法的，选择它
		nowTime += a[x];	// 增加子集中这道题目的时间
		dfs(x + 1);	// 下一层递归
		nowTime -= a[x];	// 去除掉子集中这道题目的时间
	}
	dfs(x + 1);		// 不选这个题目，直接进行下一层递归
}

int main() {
	cin >> s[0] >> s[1] >> s[2] >> s[3];
	for (int i = 0; i < 4; i++) {	// 四种科目
		nowTime = 0;
		maxDeep = s[i];
		sum = 0;	// 每次换科目都要初始化
		for (int j = 1; j <= s[i]; j++) {
			cin >> a[j];
			sum += a[j];	// 记录这科作业总耗时
		}
		maxTime = 0;
		dfs(a);	// 开始枚举第一个题目
		ans += (sum - maxTime);	// 加上答案
	}
	cout << ans << endl;
	return 0;
}
