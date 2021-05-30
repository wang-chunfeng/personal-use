
#include <stdio.h>
  
int add(int a, int b);
int subtraction(int a, int b);
  
struct p_fun {
    int (*pFunAdd) (int a, int b);
    int (*pFunSubtraction)(int a, int b);
};

int main() {
    struct p_fun pFun;
    pFun.pFunAdd = add;
    pFun.pFunSubtraction = subtraction;
    printf("%d, %d", pFun.pFunAdd(1, 2), pFun.pFunSubtraction(2, 1));
    return 0;
}
  
int add(int a, int b) {
    return a + b;
}
  
int subtraction(int a, int b) {
    return a - b;
}