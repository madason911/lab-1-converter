#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int wsx(const char *fname ,const char *word)
{
    FILE *qaz;
    char mas[200];
    char *fmas;
    char *istr;
    char *edc;
    int symbol=1,inword=0;

  qaz=fopen(fname,"r");
if(qaz==0){
    printf("ERROR\n");
}
else{
    printf("Such file exists\n\n");
}
    while(1>0){
            fmas=fgets(mas,sizeof(mas),qaz);

         if(fmas==NULL){

            if ( feof (qaz) != 0){
                printf ("\nread from file is complete\n");
            break;
            }
            else{
                printf ("\nERROR reading from file\n");
            break;
            }
         }
         printf("  %s",fmas);

    }
     istr = strtok (mas," ");
      while (istr != NULL){

     edc = strstr (mas,word);
      if ( edc == NULL)
        printf ("String not found\n");
      else
        printf ("The search string starts with a character \n");
      if ( fclose (qaz) == EOF){
        printf ("ERROR\n");}
      else{ printf ("closed programs completed successfully\n");}
        symbol= (strlen(mas) - strlen(edc)) + (inword * (strlen(edc)) + 1);
        printf("%d\n\n",symbol);
        istr = strtok(NULL, " ");
				inword++;}
     return 0;


}
int main(int argc, char *argv[]){

    if (argc == 3){
	  if (strstr(argv[1], ".txt") == NULL){
        printf("ERROR\n");
		    exit (1);
		}
		else
			wsx(argv[1],argv[2]);
	}
	else{
		printf("ERROR\n");
		exit (1);
	}

	return 0;
}
