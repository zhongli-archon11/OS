#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("myfile.txt","r+");
    char path[100];

    char ch;
    int words= 0;

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }
    printf("Total words = %d\n", words);

    fclose(fp);

    return 0;
}
