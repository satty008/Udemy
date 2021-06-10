#include<iostream>

void Factorial_ptr(int* a, int* result) {
	for (int i = 1; i <= *a; i++) {
		*result = *result * i;

	}
}

void Factorial_ref(int a, int& result_ref) {
	for (int i = 1; i <= a; i++) {
		result_ref = result_ref * i;
		//result_ref = 120



	}
}