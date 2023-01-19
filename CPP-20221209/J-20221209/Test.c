#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
struct mumber
{
    int num;
    char name[20];
    int top;
    int prize;
};
void main()
{
    struct mumber person[50], temp2;
    int score[50];
    int i, j, u, temp1;
    double a, b, c, d;
    printf("输入总人数");
    scanf("%d", &u);
    for (i = 0; i < u; i++)
    {
        printf("输入选手信息:序号，名字，分数");
        fflush(stdin);
        gets(person[i].name);
        scanf("%d,%d", &person[i].num, &score[i]);
    }
    for (i = 1; i < u; i++)/*冒泡法将成绩从大到小排序，并将学生信息与成绩对应*/
        for (j = 0; j < u - i; j++)
        {
            if (score[j] < score[j + 1])
            {
                temp1 = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp1;
                temp2 = person[j];
                person[j] = person[j + 1];
                person[j + 1] = temp2;
            }
        }
    a = u * 0.05;
    b = u * 0.1;
    c = u * 0.2;
    d = u * 0.3;
    for (i = 0; i < u; i++)
    {
        person[i].top = i + 1;
        if (i < a)
        {
            person[i].prize = 1;

        }
        else if (i >= a && i < b)
        {
            person[i].prize = 2;
        }
        else if (i >= b && i < c) 
        {
            person[i].prize = 3;
        }
        else if (i >= c && i < d)
        {
            person[i].prize = 4;
        }
        else
        {
            person[i].prize = 0;
        }
    }
    for (i = 0; i < u; i++)
    {
        printf("%d,%s,%d,%d,%d\n", person[i].num, person[i].name, score[i], person[i].top, person[i].prize);
    }
}