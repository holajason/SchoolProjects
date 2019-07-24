#include <iostream>
#include <ctime>
#include <time.h>
#include <vector>
#include <random>
#include <omp.h>
#include <cstdlib>
#include <stdlib.h>
using namespace std;



int main() {
	A:
	int thread_count, i, n;
	cout << "Enter the size of the array: ";
	cin >> n;
	int *arr = new int[n];

	int *x = new int[n];
	int *y = new int[n];
	int *z = new int[n];

	cout << "Input the number of threads to be used: ";
	cin >> thread_count;
	
	clock_t start, end;
	float duration, sum_time;

	start = clock();

	for (i = 0; i < n; i++) {
		x[i] = i*i;
		y[i] = exp((double)x[i]);
		z[i] = y[i] = sin(3.14);
	}
	
	end = clock();
	duration = (float)(end - start) / CLOCKS_PER_SEC; //duration in sec
	cout << "Duration = " << duration << " (sec)" << endl;
	goto A;
	system("pause");
	return 0;
}

//
//int main(void) {
//
//	//float array[] = { 1.2,1.35,1.23,3.32,-1.2,-1.45 };
//	//for (int i = 0; i < sizeof(array) / sizeof(*array); i++) {
//	//	cout << array[i]<<endl;
//	//}
//	for (int i = 0; i < 5; i++) {
//		srand(static_cast<unsigned int>(time(NULL)));
//		double x = -1. + rand() / (RAND_MAX / 2.);
//		std::cout << x << std::endl;
//	}
//}

