#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>



/*define the length of the string*/
#define max_size 128
int main(int argc, char **argv)
{
    /*To work with directories, you need to define a variable of type DIR*/
    DIR *qaz;
    /*create struct*/
    struct dirent *dp;
    char filename[max_size];
    if ( argc < 2 )
        argv[1] = ".";

    /*open directories*/
    qaz=opendir(argv[1]);
    while( (dp=readdir(qaz)) != NULL )
            printf("%s\n", dp->d_name);
    /*close directories*/
    closedir(qaz);
    return 0;
}
