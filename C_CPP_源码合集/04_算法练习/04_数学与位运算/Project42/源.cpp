//#include <stdio.h>
//int main() {
//    int year, month, two;
//    while (scanf_s("%d %d", &year, &month) != EOF) {
//        if ((year % 4 == 0 && year % 100!= 0) || year % 400 == 0)
//            two = 29;
//        else
//            two = 28;
//        switch (month) {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            printf("%d\n", 31);
//            break;
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            printf("%d\n", 30);
//            break;
//        case 2:
//            printf("%d\n", two);
//            break;
//        }
//    }
//    return 0;
//}
#include <stdio.h>
int main() {
    int arr[8] = { 2, 2, 3, 4, 5, 5, 7, 7 };
    int n = 8;
    int xorsum = 0;
    for (int i = 0; i < n; i++)
        xorsum ^= arr[i];
    int diff = xorsum & -xorsum;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] & diff)
            a ^= arr[i];
        else
            b ^= arr[i];
    }
    printf("%d %d\n", a, b);
    return 0;
}