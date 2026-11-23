#include <cstdio>
#include <cstring>
#define Maxsize 200
int n;
struct Car {
    char A;
    char numbers[20];
    char time[10];
    int  minute;
};
struct Car park[12];
int top;
struct Car waitq[Maxsize];
int qfront, qrear;
struct Car tmp[12];
int ttop;
int toMinute(const char* t) {
    int h, m;
    sscanf(t, "%d:%d", &h, &m);
    return h * 60 + m;
}
void carsort(struct Car rec[], int cnt) {
    for (int i = 0; i < cnt - 1; i++) {
        for (int j = 0; j < cnt - 1 - i; j++) {
            if (toMinute(rec[j].time) > toMinute(rec[j + 1].time)) {
                struct Car t = rec[j];
                rec[j] = rec[j + 1];
                rec[j + 1] = t;
            }
        }
    }
}
void enterpark(struct Car c) {
    int t = toMinute(c.time);
    if (top < n) {
        c.minute = t;
        park[++top] = c;
        printf("%s 停车位置：%d\n", c.numbers, top);
    } else {
        waitq[qrear++] = c;
        printf("%s 停车场已满，在便道等待\n", c.numbers);
    }
}
void outpark(struct Car c) {
    int t = toMinute(c.time);
    int k;
    for (k = 1; k <= top; k++) {
        if (strcmp(park[k].numbers, c.numbers) == 0) break;
    }
    if (k <= top) {
        while (top > k) {
            tmp[++ttop] = park[top--];
        }
        int stay = t - park[k].minute;
        printf("%s 离开，停车场内停留时间：%d 分钟\n", c.numbers, stay);
        top--;
        while (ttop > 0) {
            park[++top] = tmp[ttop--];
        }
        if (qrear > qfront) {
            struct Car wc = waitq[qfront++];
            wc.minute = t;
            park[++top] = wc;
            printf("%s 从便道进入，停车位置：%d\n", wc.numbers, top);
        }
    } else {
        int i;
        for (i = qfront; i < qrear; i++) {
            if (strcmp(waitq[i].numbers, c.numbers) == 0) {
                for (int j = i; j < qrear - 1; j++) {
                    waitq[j] = waitq[j + 1];
                }
                qrear--;
                printf("%s 从便道离开\n", c.numbers);
                break;
            }
        }
    }
}
int main() {
    struct Car rec[Maxsize];
    int cnt = 0;
    top = 0;
    ttop = 0;
    qfront = qrear = 0;
    scanf("%d", &n);
    char op;
    while (scanf(" %c", &op) == 1) {
        if (op == 'E') {
            scanf("%*s %*s");
            break;
        }
        rec[cnt].A = op;
        scanf("%s %s", rec[cnt].numbers, rec[cnt].time);
        cnt++;
    }
    carsort(rec, cnt);
    for (int i = 0; i < cnt; i++) {
        if (rec[i].A == 'A') {
            enterpark(rec[i]);
        } else if (rec[i].A == 'D') {
            outpark(rec[i]);
        }
    }
    return 0;
}

