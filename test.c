#include <stdio.h>

#include "cfunctional.h"

int main() {

	double arr[3] = {1.0, 2.0, 2.0};

	double arr2[3];

	$(arr, printf("%.2f\n", _) )

	printf("\n" );

	$$(arr, arr2, return -_ )

	printf("\n" );

	$(arr2, printf("%.2f\n", _) )

	printf("\n" );

	$$(arr, arr, 
		printf("%.2f, ", _);
		double y = _ + 0.5;
		return y*y 
	)

	printf("\n\n" );

	$(arr, printf("%.2f\n", _) )

	printf("\n" );

	printf("all tests run\n");

	return 0;
}