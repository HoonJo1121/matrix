#include "Matrix.h"

Matrix::Matrix(uint32_t rows, uint32_t cols)
	: rows_(rows)
	, cols_(cols)
	, data_(NULL)
{
	data_ = new double[rows_ * cols_];
	memset(data_, 0, rows_ * cols_ * sizeof(double));
}

Matrix::~Matrix()
{
	if (data_ != NULL)
	{
		delete[] data_;
	}
}

uint32_t Matrix::getRows()
{
	return rows_;
}

uint32_t Matrix::getCols()
{
	return cols_;
}