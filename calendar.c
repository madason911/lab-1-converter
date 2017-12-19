#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{ int n=atof(argv[3]);
  int mounth=atof(argv[2]);
  int chislo=atof(argv[1]);
   int i,sum,qwe,j,summa;
   sum=qwe=0;
 for (i=1;i<=n;i++){
        if ((i%4==0 && i%100!=0)&&(i%400==0)){
           sum=sum+366;}
           else{
            sum=sum+365;
           }
           }
           if ((n%4==0 && n%100!=0)&&(n%400==0)){
                if (mounth==1){
            qwe=0;
        }
        if (mounth==2){
            qwe=31;

        }
        if (mounth==3){
            qwe=60;
        }
        if (mounth==4){
            qwe=91;
        }
        if (mounth==5){
            qwe=121;

        }
        if (mounth==6){
            qwe=152;
        }if (mounth==7){
            qwe=182;
        }
        if (mounth==8){
            qwe=213;

        }
        if (mounth==9){
            qwe=244;
        }if (mounth==10){
            qwe=274;
        }
        if (mounth==11){
            qwe=305;

        }
        if (mounth==12){
            qwe=335;
        }
           }
           else{
        if (mounth==1){
            qwe=0;
        }
        if (mounth==2){
            qwe=31;

        }
        if (mounth==3){
            qwe=59;
        }
        if (mounth==4){
            qwe=90;
        }
        if (mounth==5){
            qwe=120;

        }
        if (mounth==6){
            qwe=151;
        }if (mounth==7){
            qwe=181;
        }
        if (mounth==8){
            qwe=212;

        }
        if (mounth==9){
            qwe=243;
        }if (mounth==10){
            qwe=273;
        }
        if (mounth==11){
            qwe=304;

        }
        if (mounth==12){
            qwe=334;
        }
           }
        summa=sum+qwe+chislo+1;
 if (summa%7==5){
        printf("vtornik");}
 else if(summa%7==6){
    printf("sreda");
 }
 else if(summa%7==0){
    printf("chetverg");
 }
 else if(summa%7==1){
    printf("friday");
 }
 else if(summa%7==2){
    printf("suttarday");
 }
 else if(summa%7==3){
    printf("sunday");
 }
else{
    printf("monday");
}

    return 0;


}

