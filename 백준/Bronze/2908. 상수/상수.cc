#include <iostream>
#include <cstring>


int main() {
    int A,B,a,b;
    std::cin >> A >> B;
   
    a = A / 100;
    A = A % 100;
    a += (A / 10)*10;
    A = A % 10;
    a += A*100;

    b = B / 100;
    B = B % 100;
    b += (B / 10)*10;
    B = B % 10;
    b += B*100;

    a > b ? std::cout << a : std::cout << b;

   
   
	return 0;
}