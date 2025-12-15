#include "matrix.h"
#include <tuple>

int main(){

	Matrix m1({{1,3},{2,4}});
	Matrix m3({ {1,3},{2,4} });

	Matrix m2({{5,7,-1},{0,5,6}},std::make_tuple(2,3));
	Matrix product = Matrix::Addmatrix(m1,m3);
	product.print();
	std::cout << "\n";

 
}
