#include<iostream>
#include"ptr_ref_1.h"
#include"ptr_ref_2.h"
int main() {
	int result_ptr= 1;
	int result = 1;
	int num;
	std::cout << "Welcome to Cpp tutorials"  << std::endl;
#ifdef DEBUG

	num = 5;
	Factorial_ptr(&num, &result_ptr);
	std::cout << "Factorial_Ptr= "<< result_ptr << std::endl;


	Factorial_ref(num, result); // 5 , 1
	std::cout << "Factorial_Ref= " << result << std::endl;
#endif // DEBUG

	Ptr_Ref();

	return 0;




}