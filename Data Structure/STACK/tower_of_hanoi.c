#include <stdio.h>
void TOH(int num, char start, char aux, char end);

int main()
{
    int num;
    printf("Enter the number of ring");
    scanf("%d", &num);
    TOH(num, 'a', 'b', 'c');
    return 0;
}

void TOH(int num, char start, char aux, char end)
{
    if (num == 1)
    {
        printf("\nMove %d from %c to %c ", num, start, end);
        return;
    }
    TOH(num - 1, start, end, aux);
    printf("\nMove %d from %c to %c ", num, start, end);
    TOH(num - 1,aux,start,end);
}
