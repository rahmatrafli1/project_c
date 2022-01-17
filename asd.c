#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(0));
    int i;

    for (i = 0; i < 20; i++)
    {
        int random = rand() % 100;
        printf("%d\n", random);
    }

    getch();
    return 0;
}
