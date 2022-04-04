#include <stdio.h>
#include <string.h>
void ghepxau(char c[], char a[], char b[])
{
    int i, j, n1, n2;
    n1 = strlen(a);
    n2 = strlen(b);
    j = 0;
    for (i = 0; i < n1; i++)
        c[i] = a[i];
    for (j = 0; j < n2; j++)
        c[j + n1] = b[j];
}
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        char a[15][15], tmp[15];
        scanf("%d\n", &n);
        for (int i = 0; i < n; i++)
            scanf("%s", a[i]);
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                char c[30];
                ghepxau(c, a[i], a[j]);
                char d[30];
                ghepxau(d, a[j], a[i]);
                if (strcmp(c, d) > 0)
                {
                    strcpy(tmp, a[i]);
                    strcpy(a[i], a[j]);
                    strcpy(a[j], tmp);
                }
            }
        }
        for (int i = 0; i < n; i++)
            printf("%s", a[i]);
        printf("\n");
    }
    return 0;
}
