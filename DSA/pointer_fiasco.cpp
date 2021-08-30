/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int
main ()
{
  int a = 10;
  int *p;

  // p = &a ;



  // p = (int *)malloc(5*sizeof(int));   // C Syntax
  // p = new int[5] ; // C++ Syntax
  // p[0] = 10; p[1] = 15; p[2] = 20; p[3] = 25; p[4] = 30;

  // for (int i=0; i<5; i++){
  //     cout<<p[i]<<endl ;
  // }

  int *p1;
  char *p2;
  float *p3;
  double *p4;
  struct Rectangle *p5;

  cout << "Size of p1 " << sizeof (p1) << endl;
  cout << "Size of p2 " << sizeof (p2) << endl;
  cout << "Size of p3 " << sizeof (p3) << endl;
  cout << "Size of p4 " << sizeof (p4) << endl;
  cout << "Size of p5 " << sizeof (p5) << endl;






  // delete [] p; // Always free the memmory when you are dynamically allocating it 

  // free(p); //used in C language to free the memmory .


  // int A[5] = {1,2,3,4,5};
  // p = A;

  // for (int i=0; i<5; i++){
  //     cout<<p[i]<<endl;
  // }



  // cout<<a<<endl;
  // cout<<p<<endl;
  // cout<<*p<<endl;
  // cout<<&a<<endl;




  return 0;
}
