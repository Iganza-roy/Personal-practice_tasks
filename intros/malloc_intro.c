#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char *name;

    n = 4;
    name = malloc(n * sizeof(char));

    name[0] = 'R';
    name[1] = 'o';
    name[2] = 'y';
    name[3] = '\n';

    printf("%s", name);
    return 0;
}
