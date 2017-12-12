#include <stdio.h>
#include <stdlib.h>


 int n = 0;
 /*create a stack of 100 elements*/
 int stack[100];
 int pop(void) {
     if (n > 0) {
          return stack[--n];
     } else {
          printf("ERROR\n");
          return 0;
     }
 };
 void push(int a) {
     stack[n++] = a;
 };
 int empty() {
     return (n == 0);
 }

 int main() {
     int i;
  /* create an infinite loop*/
     while (1>0) {
         int znak = getchar();
         int x;
         switch (znak) {
             case '\n':
          case ' ' : break;
             case 1 : goto RESULT;
             case '+' : 
           push(pop() + pop()); break;
             case '-' : 
           push(-pop() + pop()); break;
             case '*' : 
           push(pop() * pop()); break;
             case '=' : 
           printf("Result = %d\n", pop()); break;
             case 1 : 
           goto RESULT;
             default:
                 ungetc(znak, stdin);
                 if (scanf("%d", &x) != 1) {
                     fprintf("ERROR\n");
                     return -1;
                 } else {
                     push(x);
                 }
                 break;
          }
    }
 RESULT:
     i = 0;
     while ( !empty() ){
         printf("Stack[%d] = %d\n", i,  pop());
         i++;
     }
     return 0;
 }
