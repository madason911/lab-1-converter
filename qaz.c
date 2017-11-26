#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*  argv[]){

   float cel,far,kel;
   cel=far=kel=0;
       int temp = atof(argv[1]);



  /*If the number of arguments is 2, we perform the following*/

	if (argc==2){
        if (temp > -273.15){
		 far=9*(temp+32)/5;
            kel=temp+273.15;
                  printf("C=%d\n F=%.2f\n K=%.2f\n",temp,far,kel);}
                  else{
                    printf("ERROR:below absolute zero for C\n");
                  printf("\n");}
        if (temp > -459.67){
         cel=(temp-32.0)*5/9;
            kel=(temp-32)*5/9+273.15;
                  printf("F=%d\n C=%0.2f\n K=%0.2f\n",temp,cel,kel);}
                  else{
                    printf("ERROR:below absolute zero for F\n");
                  printf("\n");}
        if (temp > 0){
         cel=temp-273.15;
            far=(temp-273.15)*9/5+32;
                  printf("K=%d\n C=%0.2f\n F=%0.2f\n",temp,cel,far);}
                  else{
                    printf("ERROR:below absolute zero for K\n");}

	}
	/*If the number of arguments is greater than 2, perform the following*/

	else {
        if(*argv[2]=='C' || *argv[2]=='c'){
         far=temp*9.0/5.0+32.0;
              kel=temp+273.15;
              if (temp > -273.15){
              printf("C=%0.2d\n F=%0.2f\n K=%0.2f\n",temp,far,kel);}
              else{
                printf("ERROR:below absolute zero for C\n");}
        }
       else if (*argv[2]=='F' || *argv[2]=='f'){
         cel=(temp-32.0)*5/9;
            kel=(temp-32)*5/9+273.15;
            if (temp > -459.67){
                  printf("F=%0.2d\n C=%0.2f\n K=%0.2f\n ",temp,cel,kel);}
                  else{
                    printf("ERROR:below absolute zero for F\n");}
       }
        else if (*argv[2]=='K' || *argv[2]=='k'){
         cel=temp-273.15;
             far=(temp-273.15)*9/5+32;
             if (temp > 0){
                  printf("K=%0.2d\n C=%0.2f\n F=%0.2f\n",temp,cel,far);}
                  else{
                 printf("ERROR:below absolute zero for K\n");}
        }

  return 0;
}
}
