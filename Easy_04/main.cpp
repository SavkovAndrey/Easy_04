#include <iostream>
#include <time.h>




using namespace std;
//---------------------������� � ���������---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------���� �����-------------------------------------
	const double PI = acos(-1.0);

	int v, t;

	double u, r;

	cout << "������� ��������� ��������: " << endl << "V = ";
	cin >> v;

	cout << "������� ����� ������ ����: " << endl << "T = ";
	cin >> t;

	//a = arcsin(gT / 2V) )


	u = asin(9.8 * t / (2 * v));
	r = u * 180 / PI;

	cout << endl << "���� ���� �������� ��� �����:  " << r << "  � ���������" << endl << endl;

	system("pause");

	return 0;
}
