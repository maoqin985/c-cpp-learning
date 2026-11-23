#include<stdio.h>
//int main(){
//	int i=0,s=0,x;
//	for(i;i<100;i++){
//		scanf("%d",&x);
//		if(x<0)
//		break;
//		s+=x;
//	}
//	printf("%d",s);
//	return 0;
//}

// main() {
//    float length, width, perimeter, area;
//    printf("请输入长方形的长：");
//    scanf("%f", &length);
//    printf("请输入长方形的宽：");
//    scanf("%f", &width);
//    perimeter = 2*(length + width);
//   int area = length*width;
//    printf("长方形的周长是：%.2f\n", perimeter);
//    printf("长方形的面积是：%.2f\n", area);
//    return 0;
//}

//int main() {
//    int year;
//    printf("请输入一个年份：");
//    scanf("%d", &year);
//
//   
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//        printf("%d年是闰年。\n", year);
//    } else {
//        printf("%d年不是闰年。\n", year);
//    }
//
//    return 0;
//}



//int main() {
//    int N, sum = 0; 
//    printf("请输入一个正整数N：");
//    scanf("%d", &N);
//
//    
//    for (int i = 1; i <= N; i++) {
//        sum += i; 
//    }
//
//    printf("从1到%d的累加和是：%d\n", N, sum);
//    return 0;
//}



int main() {
    int numbers[10] = {12, 45, 7, 89, 23, 56, 3, 78, 34, 60};
    int max;
    max = numbers[0];
    for (int i = 1; i < 10; i++) {
        
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("数组中的最大值是：%d\n", max);
    return 0;
}
