#include <iostream>
#include <cstring>

int main() {
    int N;
    std::cin >>N;
   
    if (N >= 90)std::cout << "A";
    else if(N>=80)std::cout << "B";
    else if (N >= 70)std::cout << "C";
    else if (N >= 60)std::cout << "D";
    else std::cout << "F";

   
   
   
	return 0;
}