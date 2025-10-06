#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[128];

    printf("PLease enter key: ");
    if(scanf("%127s",input) != 1)
    {
        return 1;
    }
    if(strcmp(input, "__stack_check") == 0)
    {
        printf("Good job.\n");
        return 0;
    }
    else
    {
        printf("Nope.\n");
        return 1;
    }
    return 0;
}