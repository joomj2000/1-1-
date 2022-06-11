#include <iostream>

using namespace std;

int main()
{
  int n;
  scanf("%d",&n);
  int div=2;  
  if(n!=1)
  {
    while(n>1)
    {
      if(n%div==0)  
      {
        printf("%d\n",div);
        n/=div;
      }
      else  
      {
        div++;
      }
    }
  }
}
