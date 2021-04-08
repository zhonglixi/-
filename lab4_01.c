#include "seqstack.h"

void Dto16(int m)
{
    // 定义顺序栈
    seqstack s;
    init(&s);
    printf("十进制数%d对应的十六进制数是:", m);
    while (m)
    {
        push(&s, m % 16);
        m /= 16;
    }
    while (!empty(&s))
        putchar(read(&s) < 10 ? pop(&s) + 48 : pop(&s) + 55);
    printf("\n");
}
int main()
{
    int m;
    printf("请输入待转换的十进制数：\n");
    scanf("%d", &m);
    Dto16(m);
    return 0;
}
