#include<iostream>

void Ptr_Ref() {

	//Try to modify x1 & x2 and see the compilation output
	int x = 5;
	int y = 10;
	const int MAX = 12;
	int& ref_x1 = x;
	const int& ref_x2 = x;   //ref_x2 is a reference to a constant integer. x cannot be changed by changing ref_x2.

	//Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
	const int* ptr1 = &x;  // ptr1 is a pointer to constant integer variable. ptr1 can be changed and pointed to "y". "x" cannot be changed by changing *ptr1. 
	int* const ptr2 = &x;  // ptr2 is a constant pointer to integer variable. Pointer cannot be changed. Pointee value can be changed through *ptr2.
	const int* const ptr3 = &x;  // ptr3 is a constant pointer to constant integer variable. Neither pointer nor pointee can be changed.
		

	//Find which declarations are valid. If invalid, correct the declaration
	const int* ptr4 = &MAX; // ptr4 is a pointer to constant integer variable. 
	//int* ptr5 = &MAX;  //  declares ptr5 as a pointer to a variable which is invalid as MAX is constant

	
	const int& r1 = ref_x1;  
	//int& r2 = ref_x2;  // declares r2 as a reference to integer. As ref_x2 is constant, compile error


	//int*& p_ref1 = ptr1; // Sol: const int*& p_ref1 = ptr1; 
	/*
	ptr1 holds address of x. 
	p_ref1 also holds address of x. p_ref1 is an alias of ptr1
	So if we change any of these two to hold some other address, the other pointer will also change.
	We are trying to make x as variable by *&p_ref1 but x is constant from ptr1 declaration above.
	int*& p_ref1 = &x; // Simplified from p_ref1 declaration above --> does nt work
	int& p_ref1 = x;  // This is not equivalent to above. --> Works
	*/

	//const int*& p_ref2 = ptr2; // Sol: const int*const & p_ref2 = ptr2; //
	/*
	ptr2 is constant but its alias p_ref2 is declared as variable. Not permitted. Solution to make it also constant
	But here x (pointed by ptr2) can be variable. So no need of const in the beginning.
	writing const in the beginning is redundant but right approach as ptr2 is already constant.
	*/

#ifdef DEBUG
	std::cout << "x value= " << x << std::endl;
	std::cout << "ref_x1 value= " << ref_x1 << std::endl;
	std::cout << "ref_x2 value= " << ref_x2 << std::endl;
#endif // DEBUG
}

