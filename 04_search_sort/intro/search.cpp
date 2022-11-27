#include <stdio.h>
int searching (FILE *fin);
double x;
int main ()
{
    char filename[256];
    int result;
    FILE *fin;
    printf("Type file name ->");
    scanf("%s",filename);
    printf("Type the desired number ->");
    scanf("%lf", &x);
    fin = fopen (filename, "r");
    if (!fin)
    {
        printf ("Cant open file %s\n", filename);
        return -1;
    }
    printf("start searching\n");
    result = searching(fin);
    switch(result)
    {
        case 1:
            printf ("The file contains desired number\n");
            break;
        case 0:
            printf ("The file doesn't contain desired number\n");
            break;
        case -1:
            printf ("Not enough data\n");
            break;
    }
    fclose (fin);
    return 0;
}

int searching (FILE *fin)
{
    double y;
    if (fscanf(fin, "%lf", &y) != 1)
        return -1;
    while (fscanf(fin, "%lf", &y) == 1)
    {
        if (y == x)
            return 1;
    }
    return 0;
}
