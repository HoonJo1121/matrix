#pragma once

#include <cstdint>
#include <cstring>

class Matrix
{
public:
	Matrix(uint32_t rows, uint32_t cols);
	~Matrix();

	uint32_t getRows();
	uint32_t getCols();

	inline double& at(uint32_t row, uint32_t col)
	{
		return data_[row * cols_ + col];
	};

private:
	uint32_t rows_;
	uint32_t cols_;
	double* data_;
};