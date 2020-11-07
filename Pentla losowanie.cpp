#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int i,x,min=100,max=0;
	float suma=0;
	for (i=0 ; i<100 ; i++){
		x = rand()%100;
		cout << x << ",";
		suma = suma + x;
		if (x<min) min=x;
		else if (x>max) max=x;
	}
	suma=suma/100;
	cout << "\nSrednia wylosowanych liczb: " << suma << endl;
	cout << "Najmniejsza liczba: " << min << "\nNajwiêksza liczba: " << max;
	return 0;
}
