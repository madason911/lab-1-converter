#include <stdio.h>
#include <stdlib.h>

#define LENGTH 100
 int n = 0;
 /*create a stack of 100 elements*/
 int stack[LENGTH];
 int pop(void) {
     if (n > 0) {
          return stack[--n];
     }  else {
          printf("ERROR\n\n");
          printf("It is impossible to use this operation for an empty stack\n");

          return 0;
     }
 };
 int push(int a) {
     stack[n++] = a;
 };
 int empty() {
     return (n == 0);
 }



 int main(int argc, char *argv[]) {

    /* int znak = atof(argv[1]);*/
  /* create an infinite loop*/
     while (1>0) {
         int znak = getchar();
         int x;
         switch (znak) {
          case ' ' : break;
             case '+' :
           push(pop() + pop()); break;
             case '-' :
           push(-pop() + pop()); break;
             case '*' :
           push(pop() * pop()); break;
             case '/' :
           push(pop() / pop()); break;
             case '=' :
           printf("Result = %d\n\n", pop()); break;
             default:
                 /*take one character and return it back to the input stream*/
                 ungetc(znak, stdin);
                 if (scanf("%d", &x) != 1) {
                     printf("ERROR\n\n");
                     printf("We must work with integers\n");
                     return -1;
                 }  else {
                     push(x);
                 }
                 break;
           }
      }
 }

