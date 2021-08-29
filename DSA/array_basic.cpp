/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>

using namespace std;

int
main ()
{
  // int A[10] = {2, 4, 6, 8, 10, 12} ;
  // cout<<"Hello World";
  // A[0] = 12 ;
  // A[1] = 24 ;
  // A[2] = 45 ;

  // cout <<sizeof(A)<<endl ;
  // cout<<A[5]<<endl ;
  // printf("%d\n" , A[6]);


  // for (int i = 0; i < 10 ; i++)
  // {
  //     cout<<i<<" "<<A[i]<<endl ;



  // }

  int n;



  cout << "Enter size : ";
  cin >> n;
  int A[n];

  cout << "The input size is " << n << endl;

for (int x:A)
    {
      cout << x << endl;
    }


  return 0;
}
