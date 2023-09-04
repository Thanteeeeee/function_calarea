#include<iostream>
using namespace std ;
void calcircle();
void calrec() ;
int main()
{
	char menu ;
	do
	{
	cout << "Program Calculate of Area." << endl ;
	cout << "**************************" << endl ;
	cout << "1. Circle." << endl ;
	cout << "2. Rectangle." << endl ;
	cout << "3. Exit." << endl ;
	cout << "Choose Menu : " ;
	cin  >> menu ;

	if(menu == '1') calcircle() ;
	else if (menu == '2') calrec() ;
	else if (menu == '3') cout << "--Exit--" << endl ;
	else cout << "Wrong menu!!!" << endl ;

	}while(menu != '3');

		system("pause");
	return 0 ;
}
void calcircle()
{
	float r,a,c ;
	cout << "Input radius : " ;
	cin  >> r ;
	a = 3.14f*r*r ;
	c = 2*3.14f*r ;
	cout << endl ;
	cout << "Area of circle : " << a << endl;
	cout << "Circumference of circle : " << c << endl;
	cout << "Diameter of circle : " << (2*r) << endl;
	cout << endl ;
}
void calrec()
{
	float w_r,a_r,h_r ;
	cout << "Input wide : " ;
	cin  >> w_r ;
	cout << "Input hight : " ;
	cin  >> h_r ;
	a_r = h_r*w_r ;
	cout << endl ;
	cout << "Area of Rectangle : " << a_r << endl;
	cout << endl ;
}