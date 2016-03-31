#include <iostream>
using namespace std;

int doAdd(int a, int b) {
   return a + b;
}  

int doMinus(int a, int b) {
   return a - b;
} 

int main (int argc, char *argv[])
{
	int (*func_ptr)(int, int);

   	//
	func_ptr = doAdd;
	printf("function pointer 指向 doAdd => %d\n", (*func_ptr)(5, 3)); 

	//
	func_ptr = doMinus;
	printf("function pointer 指向 doMinus => %d\n", (*func_ptr)(5, 3));


	return 0;
}

