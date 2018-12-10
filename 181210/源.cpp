#include <iostream>
#include <Eigen\Dense>
using namespace std;
using namespace Eigen;
void main()
{
	Matrix3d a;
	a << 1, 2, 3,
		3, 4, 5,
		6, 7, 8;
	MatrixXd b(3, 3);
	b << 2, 3, 4,
		1, 4, 5,
		1, 2, 3;
	cout << "a + b =\n" << a + b << endl;
	cout << "a - b =\n" << a - b << endl;
	cout << "Doing a += b;" << endl;
	a += b;
	cout << "Now a =\n" << a << endl;
	cout << "a^T=  " << a.transpose() << endl;
	cout << "a*b= " << a * b << endl;
	Vector3d v(1, 2, 3);
	Vector3d w(1, 0, 0);
	cout << "-v + w - v =\n" << -v + w - v << endl;
	cout << v << endl;
	cout << v.transpose() << endl;
	system("pause");
}
