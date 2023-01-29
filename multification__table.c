
#include <stdio.h>
#define N 10
void main()
{
    int no = 1, count = 1, ans;
    printf("    MULTIPLICATION TABLE(1 TO 7\n");
    printf("    ---------------------------");
    printf("\n");
    do
    {
        do
        {
            printf("%5d", no * count);
            count++;
        } while (count <= 7);
        printf("\n");
        no++;
        count = 1;
    } while (no <= N);
    printf("\n prince_22DCE057");
}
