#include <cstdio>
int Fibonacci(int num) {
    if(num == 0)
        return 0;
    if(num == 1)
        return 1;
    return Fibonacci(num-2) + Fibonacci(num-1);
}
int main() {
    int num;
    scanf("%d",&num);
    printf("%d",Fibonacci(num));
}