#include <stdio.h>
#include <string.h>

// 은행 계좌를 위한 구조체 정의
struct account {
    char name[12];  // 계좌주 이름
    int actnum;     // 계좌번호
    double balance; // 잔고
};

int main() {
    struct account mine = {"홍길동", 1001, 300000};
    struct account yours;

    strcpy(yours.name, "이동원");
    // yours.name = "이동원"; // 오류
    yours.actnum = 1002;
    yours.balance = 500000;

    printf("구조체 크기: %zu\n", sizeof(mine));
    printf("%s %d %.2f\n", mine.name, mine.actnum, mine.balance);
    printf("%s %d %.2f\n", yours.name, yours.actnum, yours.balance);

    return 0;
}