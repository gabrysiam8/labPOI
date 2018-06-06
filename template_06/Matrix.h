#ifndef Matrix_H
#define Matrix_H
#include <iostream>

template<typename T, int col, int row>
class Matrix
{
public:

	Matrix();

	void reset(T val);

	template<typename U> void add(Matrix<U, col, row> otherMat);

	template<int colID, int rowID> T& at();

	const T& get(int rowID, int colID) const;

private:

	T _mat[row][col];
};


template<typename T, int col, int row>
Matrix<T, col, row>::Matrix()
{
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
			_mat[i][j]=0;
	}
}


template<typename T, int col, int row>
template<typename U>
void Matrix<T, col, row>::add(Matrix<U, col, row> otherMat)
{
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
			_mat[i][j]+=otherMat.get(i, j);
	}
}


template<typename T, int col, int row>
void Matrix<T, col, row>::reset(T val)
{
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
			_mat[i][j]=val;
	}
}


template<typename T, int col, int row>
template<int colID, int rowID>
T& Matrix<T, col, row>::at()
{
	return _mat[rowID][colID];
}


template<typename T, int col, int row>
const T& Matrix<T, col, row>::get(int rowID, int colID) const
{
	return _mat[rowID][colID];
}



template<typename T, int col, int row>
std::ostream& operator<<(std::ostream& out, Matrix<T, col, row> mat)
{

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
			out<<mat.get(i, j)<<" ";
		out<<std::endl;
	}
	return out;
}

#endif