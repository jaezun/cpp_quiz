//What is the return value of f(p, p) if the value of p is initialized to 5 before the call? Note that the first parameter is passed by reference, whereas the second parameter is passed by value.
int f(int &x, int c) {
   c  = c - 1;
   if (c == 0) return 1;
   x = x + 1;
   return f(x, c) * x;
} 
/*
A
3024
B
6561
C
55440
D
161051

Question 1 Explanation: 
Since c is passed by value and x is passed by reference, all functions will have same copy of x, but different copies of c. f(5, 5) = f(x, 4)*x = f(x, 3)*x*x = f(x, 2)*x*x*x = f(x, 1)*x*x*x*x = 1*x*x*x*x = x^4 Since x is incremented in every function call, it becomes 9 after f(x, 2) call. So the value of expression x^4 becomes 9^4 which is 6561. 1

*/
