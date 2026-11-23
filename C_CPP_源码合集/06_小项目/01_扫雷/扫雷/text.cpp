#include"claim.h"
void menu() {
	printf("**************************\n");
	printf("****请选择 1.开始游戏*****\n");
	printf("****请选择 0.离开    *****\n");
	printf("**************************\n");
}
int main() { 
		char dine[rows][lines];
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < lines; j++)
				dine[i][j] = '0';
			char show[row][line];
			for (int i = 0; i < row; i++)
				for (int j = 0; j < line; j++)
					show[i][j] = '*'; 
			int a;  
			menu();
		while(scanf_s("%d",&a)!=0){  
		if (a == 1) {
			getdine(dine);
			while (1) {
				display(show);
				int m, n;
				printf("请输入你要猜的雷的坐标：\n");
				scanf_s("%d %d", &m, &n);
				check(dine, show, m, n);
				if (dine[m][n] =='1')
					return 0;
			}
		}
		else if (a == 0) {
			printf("游戏已结束\n");
			return 0;
		}
		else
			printf("输入错误，请重新输入\n");	
		}
	return 0;
	}


