#include<iostream>
#include"factorial.h"
#include"Asg_26.h"
int main() {
	int result_ptr= 1;
	int result = 1;
	int num;

#ifdef DEBUG

	num = 5;
	Factorial_ptr(&num, &result_ptr);
	std::cout << "Factorial_Ptr= "<< result_ptr << std::endl;


	Factorial_ref(num, result); // 5 , 1
	std::cout << "Factorial_Ref= " << result << std::endl;
#endif // DEBUG

	Asg_26();

	return 0;




}