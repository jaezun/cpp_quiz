/*
Which of the following is FALSE about references in C++
A
References cannot be NULL
B
A reference must be initialized when declared
C
Once a reference is created, it cannot be later made to reference another object; it cannot be reset.
References cannot refer to constant value

Discuss it


Question 2 Explanation: 
We can create a constant reference that refers to a constant. For example, the following program compiles and runs fine.
*/

#include<iostream>
using namespace std;

int main()
{
  const int x = 10;
  const int& ref = x;

  cout << ref;
  return 0;
}
