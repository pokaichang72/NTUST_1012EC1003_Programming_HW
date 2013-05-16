#include<stdio.h>
#include<stdlib.h>


/*
 * hanoi()
 * 計算將 level 階河內塔從 source 移到 target, 利用 temp 作暫存, 所需的步驟, 並印出過程.
 *
 * level: 階數
 * source: 原柱代號
 * target: 目標柱代號
 * temp: 暫存柱代號
 * return: 完成移動需要的步驟數 steps
 */
int hanoi(int level, char source, char target, char temp)
{
	/* case one: 移動 x (x > 0) 層的塔，遞迴 */
	if (level > 0) {
		int steps=0;  //計算步驟數用的

		/* 首先把壓住第一層 (最下面那層) 的通通搬到 temp 去 */
		steps += hanoi(level-1, source, temp, target);

		/* 然後輕鬆地的把第一層搬到目標 target */
		printf("%c -> %c\n", source, target);
		steps++;

		/* 最後把丟在 temp 的撿回來蓋在 target 第一層上 */
		steps += hanoi(level-1, temp, target, source);

		/* 就完成了，傳回步驟數 */
		return steps;
	}

	/* case two: 移動 0 層的塔，需要 0 個步驟 */
	else {
		return 0;
	}
}


int main()
{
	int x;

	printf("幾層？");
	scanf("%d", &x);
	printf("Total steps: %d\n", hanoi(x, '1', '3', '2'));

	return 0;
}
