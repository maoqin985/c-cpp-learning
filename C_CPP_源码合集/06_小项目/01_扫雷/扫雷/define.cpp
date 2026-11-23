#include"claim.h"
void display(char arr[row][line]) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < line; j++)
			printf("%c ", arr[i][j]);
		printf("\n");
	}
}
void getdine(char arr[rows][lines]) {
	srand((unsigned int)time(NULL));
	int count = 10;
	while (count) {
		int a = rand() % 10;
		int b = rand() % 10;
		if ((a > 0 && a < 12)&&(b>0&&b<12)) {
			if (arr[a][b] != '1')
				arr[a][b] = '1';
			count--;
		}
	}
}
void check(char arr1[rows][lines], char arr2[row][line], int a, int b)
{
	if (a < 0 || a >= row || b < 0 || b >= line) {
		printf("坐标超出边界：%d,%d,请重新输入坐标：\n", a, b);
		return;
	}
	if (arr1[a][b] != '1') {
		int c = 0;
		for (int i = -1; i <= 1; i++)
			for (int j = -1; j <= 1; j++)
				if (arr1[a + i][b + j] == '1')
					c++;
		arr2[a-1][b-1] = c+48;
	}
	else if (arr1[a][b] == '1')
					printf("踩中雷了！游戏结束。");			
	}

