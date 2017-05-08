// Copyright (c) 2017 Denis Skripov
// https://github.com/nizhikebinesi/labs_inline_assembler
#pragma once

#include <cstdio>
#include <memory>
#include <cstdlib>

namespace exercises {
	// ������  ����  ������  ������������ ������ � ��������������  �����������
	// ���������, �����������  �  ���� ���������.������  �������������  �������  �
	// ������  �����������  �  �������.� ������� ������������  �������  ����������
	// �����������  ������� : 1)������� �������; 2)������� �������;  3)���������, 4)��������
	// �������, ������� �� ����������� i - ��� ������ � j - �� �������; 5)������ �������;
	// �������, ������� ����������� � �������.
	//
	// Exercise:
	// �������� �������� ��������� �������, ������, ��� ������� ������������ �
	// ������ �������� ��������.
	struct Matrix {
		unsigned int n;
		int **arr;
	};

	Matrix* create_matrix(unsigned int N);

	// zero if there are no errors else if i or j is not in [0; n) - -1
	int set_i_j_element(int elem, unsigned int j, unsigned int i, Matrix* m);

	// zero if there are no errors else if i or j is not in [0; n) - -1
	//int get_i_j_element(int* elem, unsigned int j, unsigned int i, Matrix* m) {
	int get_i_j_element(unsigned int j, unsigned int i, const Matrix* m);

	void fill_matrix(Matrix* m);

	Matrix* read_from_stdin();

	void erase_matrix(Matrix* m);

	void print_to_stdout(const Matrix* m);

	void make_i_j_c(
		unsigned int j, unsigned int i,
		const Matrix* a, const Matrix* b,
		Matrix* c, unsigned int n);

	Matrix* mult(const Matrix* b, const Matrix* a);

}