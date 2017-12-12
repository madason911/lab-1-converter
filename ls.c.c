#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
/*define the length of the string*/
#define max-size 128
int main(int argc, char **argv)
{
    /*To work with directories, you need to define a variable of type DIR*/
    DIR *qaz;
    /*create struct*/
    struct dirent *dp;
    char filename[max-size];
    if ( argc < 2 )
        strcpy(filename, ".");
    else
        strcpy(filename, argv[1]);
    printf("%s\n\n", filename);
    /*open directories*/
    qaz=opendir(filename);
    while( (dp=readdir(qaz)) != NULL )
            printf("%s\n", dp->d_name);
    /*close directories*/
    closedir(qaz);
    return 0;
}