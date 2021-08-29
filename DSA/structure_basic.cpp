#include <stdio.h>
#include <iostream>

using namespace std;


struct Rectangle
{
  int length;
  int breadth;
} ;


int main()
{
    
    struct Rectangle r1 = {10,5};
    cout<<"The size of the structure is "<<sizeof(r1)<<endl ;

    

    
  return 0;
}

