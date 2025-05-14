#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    if (argc != 1)
    {
        exit(1);
    }
    // char* fileName;
    // printf("Enter file name : ");
    // scanf("%s",fileName);
    // char fullFileName =
    FILE *fptr = fopen("../examples/main.gsp", "r");
    if (fptr == NULL)
    {
        printf("Not able to open the file.");
        exit(1);
    }
    fseek(fptr, 0, SEEK_END);
    long size = ftell(fptr);
    rewind(fptr);

    char *src = (char *)malloc(size + 1);

    while (fgets(src, size, fptr))
    {
        printf("%s", src);
    }

    // Close the file
    fclose(fptr);

    // fptr = fopen()
    return 0;
}