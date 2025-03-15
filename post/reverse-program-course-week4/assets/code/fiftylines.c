#include <stdio.h>

int main(int argc, char* argv[])
{
    int n1, n2;
    scanf_s("%d %d", &n1, &n2);
    // 加法
    // 变量加常量
    printf("result1: %d\n", n1 + 1);
    // 常量加常量
    printf("result2: %d\n", 1 + 2);
    // 变量加变量
    printf("result3: %d\n", n1 + n2);

    // 减法
    // 变量减常量
    printf("result4: %d\n", n1 - 1);
    // 常量减常量
    printf("result5: %d\n", 1 - 2);
    // 变量减变量
    printf("result6: %d \r\n", n1 - n2);

    // 乘法
    // 变量乘常量(常量值为非2的幂)
    printf("result7: %d\n", n1 * 7);
    // 变量乘常量(常量值为2的幂)
    printf("result8: %d\n", n1 * 8);
    // 两常量相乘
    printf("result9: %d\n", 3 * 3);
    // 混合运算
    printf("result10: %d\n", n1 * 6 + 5);
    // 两变量相乘
    printf("result11: %d\n", n1 * n2);

    // 除法
    // 除数为无符号2的幂
    printf("result12: %u\n", (unsigned)argc / 16);
    printf("result13: %llu\n", (unsigned long long)argc / 16);
    // 除数为无符号非2的幂(上)
    printf("result14: %u\n", (unsigned)argc / 9);
    printf("result15: %llu\n", (unsigned long long)argc / 9);
    // 除数为无符号非2的幂(下)
    printf("result16: %u\n", (unsigned)argc / 7);
    printf("result17: %llu\n", (unsigned long long)argc / 7);
    // 除数为有符号2的幂
    printf("result18: %d\n", argc / 8192);
    printf("result19: %lld\n", (long long)argc / 8192);
    // 除数为有符号负2的幂
    printf("result20: %d\n", argc / -8192);  //变量除以常量，常量为2的幂
    printf("result21: %lld\n", (long long)argc / -8192);  //变量除以常量，常量为2的幂
    // 除数为有符号非2的幂(上)
    printf("result22: %d\n", argc / 9);  //变量除以常量，常量为非2的幂
    printf("result23: %lld\n", (long long)argc / 9);  //变量除以常量，常量为非2的幂
    // 除数为有符号非2的幂(下)
    printf("result24: %d\n", argc / 7);  //变量除以常量，常量为非2的幂
    printf("result25: %lld\n", (long long)argc / 7);  //变量除以常量，常量为非2的幂
    // 除数为有符号负非2的幂(上)
    printf("result26: %d\n", argc / -5);  //变量除以常量，常量为负非2的幂
    printf("result27: %lld\n", (long long)argc / -5);  //变量除以常量，常量为负非2的幂
    // 除数为有符号负非2的幂(下)
    printf("result28: %d\n", argc / -7);  //变量除以常量，常量为负非2的幂
    printf("result29: %lld\n", (long long)argc / -7);  //变量除以常量，常量为负非2的幂

    return 0;
}