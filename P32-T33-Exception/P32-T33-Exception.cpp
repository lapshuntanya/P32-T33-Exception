//#include <iostream>
//using std::cout;
//using std::endl;
//using std::cin;
//
//float average(int arr[], int size) {
//	int amount = 0;
//	float sum = 0;
//
//	for (int i = 0; i < size; i++) {
//		if (arr[i] % 2 != 0) {
//			amount++;
//			sum += arr[i];
//		}
//	}
//
//	if (amount == 0) throw "amount == 0"; //Програмна ВС
// 
//	return sum / amount;	 
//}
//
//int main() {
//	int A[5]{ 4, 2, 4, 76, 6 };
//	int B[5]{ 1, 2, 7, 76, 6 };
//
//	float a1 = 0, b1 = 0;
//
//	try{
//		a1 = average(A, 5);
//		cout << "Результат: " << a1 << endl;
//	}
//	catch (const char* s) {
//		cout << "Array A: " << s << endl;
//	}
//	
//
//	try {
//		b1 = average(B, 5);	
//		cout << "Результат: " << b1 << endl;
//	}
//	catch (const char* s) {
//		cout << s << endl;
//	}
//}
//
//


#include "Provider.h"

int main() {
	Provider Kievstar("Kievstar");

	Kievstar.addTariff(new SecondsTariff("", -500));

	Kievstar.showList();
}