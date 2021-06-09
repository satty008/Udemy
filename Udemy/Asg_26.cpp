#include<iostream>

void Asg_26() {
	//Try to modify x1 & x2 and see the compilation output
	int x = 5;
	//int* y = &x;
	int z ;
	const int MAX = 12;
	int& ref_x1 = x;
	const int& ref_x2 = x;

	//ref_x1 = 100;
	//std::cout << " ref_x1= " << &ref_x1 << std::endl;
	//std::cout << " x= " << &x << std::endl;

	x = 150;
	std::cout << "ref_x2= " << ref_x2 << std::endl;
	std::cout << " x= " << x << std::endl;
	std::cout << "Addr ref_x2= " << &ref_x2 << std::endl; //
	//std::cout << " Addr x= " << &x << std::endl;
	//std::cout << " Addr y= " << &y << std::endl;
	//y = y + 1;
	//ref_x2 = x; // compile error. 
	std::cout << "ref_x2= " << ref_x2 << std::endl;
	std::cout << " x= " << x << std::endl;
	std::cout << "Addr ref_x2= " << &ref_x2 << std::endl;
	std::cout << " Addr z= " << &z << std::endl;
	std::cout << " Addr x+1= " << (&x+1) << std::endl;


}

