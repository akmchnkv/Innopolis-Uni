#include <stdio.h>
int main()
{
    char str[100];
    FILE *fout;
    fout = fopen("C:\\Users\\user\\Desktop\\out.txt", "w");

    printf ("write text \n");
    fgets(str, 100, stdin);
    puts(str);

    fprintf (fout,"%s", str);
    fclose(fout);
}
