#include <stdio.h>
int main()
{
    int impossible_number;
    FILE *flag;
    char c;
    if (scanf("%d", &impossible_number))
    {
        if (impossible_number > 0 && impossible_number > (impossible_number + 1))
        {
            printf("%d", impossible_number);
            flag = fopen("flag.txt", "r");
            while ((c = getc(flag)) != EOF)
            {
                printf("%c", c);
            }
        }
        else
        {
            impossible_number += 1;
        }
    }
    return 0;
}
