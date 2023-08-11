#include <iostream>
#include <time.h>




using namespace std;
//---------------------Функции и Прототипы---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------САМА ПРОГА-------------------------------------
	const double PI = acos(-1.0);

	int v, t;

	double u, r;

	cout << "Задайте стартовую скорость: " << endl << "V = ";
	cin >> v;

	cout << "Задайте время полета тела: " << endl << "T = ";
	cin >> t;

	//a = arcsin(gT / 2V) )


	u = asin(9.8 * t / (2 * v));
	r = u * 180 / PI;

	cout << endl << "Тело было брошенно под углом:  " << r << "  к горизонту" << endl << endl;

	system("pause");

	return 0;
}
