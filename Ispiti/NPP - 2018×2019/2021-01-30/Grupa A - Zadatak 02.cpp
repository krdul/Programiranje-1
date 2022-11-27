#include <iostream>
using namespace std; 

int main()
{	
	int bacanje1, bacanje2, bacanje3, br = 0, bacanje6, bacanje5, bacanje4;
	srand(time(0));
	do {
		bacanje1 = rand() % 6 + 1;
		bacanje2 = rand() % 6 + 1;
		bacanje3 = rand() % 6 + 1;
		cout << bacanje1 << "  " << bacanje2 << "  " << bacanje3 << endl; 
	
		bacanje4 = rand() % 6 + 1;
		bacanje5 = rand() % 6 + 1;
		bacanje6 = rand() % 6 + 1;
		cout << bacanje4 << "  " << bacanje5 << "  " << bacanje6 << endl;

		br++;
	
	} while (bacanje1 != bacanje4 || bacanje2 != bacanje5 || bacanje3 != bacanje6);

	cout << "Bilo je potrebno: " << br << " bacanja";


	return 0; 
}

