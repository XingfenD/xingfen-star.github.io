#include <stdio.h>

int main(int argc, char* argv[])
{
    int n1, n2;
    scanf_s("%d %d", &n1, &n2);
    // �ӷ�
    // �����ӳ���
    printf("result1: %d\n", n1 + 1);
    // �����ӳ���
    printf("result2: %d\n", 1 + 2);
    // �����ӱ���
    printf("result3: %d\n", n1 + n2);

    // ����
    // ����������
    printf("result4: %d\n", n1 - 1);
    // ����������
    printf("result5: %d\n", 1 - 2);
    // ����������
    printf("result6: %d \r\n", n1 - n2);

    // �˷�
    // �����˳���(����ֵΪ��2����)
    printf("result7: %d\n", n1 * 7);
    // �����˳���(����ֵΪ2����)
    printf("result8: %d\n", n1 * 8);
    // ���������
    printf("result9: %d\n", 3 * 3);
    // �������
    printf("result10: %d\n", n1 * 6 + 5);
    // ���������
    printf("result11: %d\n", n1 * n2);

    // ����
    // ����Ϊ�޷���2����
    printf("result12: %u\n", (unsigned)argc / 16);
    printf("result13: %llu\n", (unsigned long long)argc / 16);
    // ����Ϊ�޷��ŷ�2����(��)
    printf("result14: %u\n", (unsigned)argc / 9);
    printf("result15: %llu\n", (unsigned long long)argc / 9);
    // ����Ϊ�޷��ŷ�2����(��)
    printf("result16: %u\n", (unsigned)argc / 7);
    printf("result17: %llu\n", (unsigned long long)argc / 7);
    // ����Ϊ�з���2����
    printf("result18: %d\n", argc / 8192);
    printf("result19: %lld\n", (long long)argc / 8192);
    // ����Ϊ�з��Ÿ�2����
    printf("result20: %d\n", argc / -8192);  //�������Գ���������Ϊ2����
    printf("result21: %lld\n", (long long)argc / -8192);  //�������Գ���������Ϊ2����
    // ����Ϊ�з��ŷ�2����(��)
    printf("result22: %d\n", argc / 9);  //�������Գ���������Ϊ��2����
    printf("result23: %lld\n", (long long)argc / 9);  //�������Գ���������Ϊ��2����
    // ����Ϊ�з��ŷ�2����(��)
    printf("result24: %d\n", argc / 7);  //�������Գ���������Ϊ��2����
    printf("result25: %lld\n", (long long)argc / 7);  //�������Գ���������Ϊ��2����
    // ����Ϊ�з��Ÿ���2����(��)
    printf("result26: %d\n", argc / -5);  //�������Գ���������Ϊ����2����
    printf("result27: %lld\n", (long long)argc / -5);  //�������Գ���������Ϊ����2����
    // ����Ϊ�з��Ÿ���2����(��)
    printf("result28: %d\n", argc / -7);  //�������Գ���������Ϊ����2����
    printf("result29: %lld\n", (long long)argc / -7);  //�������Գ���������Ϊ����2����

    return 0;
}