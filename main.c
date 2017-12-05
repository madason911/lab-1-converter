#include <stdio.h>
#include <stdlib.h>
 #include <malloc.h>

 int qq = 0;
 int stack[1000];
 int pop(void) {
     if (qq > 0) {
          return stack[qq--];
     } else {
          printf("ERROR\n");
          return 0;
     }
 };
 void push(int a) {
     stack[qq++] = a;
 };
 int empty() {
     return (qq == 0);
 }

 int main() {
     int i;
     while (1>0) {
         int znak = getchar();
         int x;
         switch (znak) {
             case '\n':
             case ' ' : break;
             case '=' : printf("Result = %d\n", pop()); break;
             case 27  : goto RESULT;
             case '+' : push(pop() + pop()); break;
             case '-' : push(-pop() + pop()); break;
             case '*' : push(pop() * pop()); break;
             case '/' : push(pop() / pop()); break;
             default:
                 ungetc(znak, stdin);
                 if (scanf("%d", &x) != 1) {
                     fprintf(stderr, "Can't read integer\n");
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
