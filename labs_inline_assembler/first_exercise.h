// Copyright (c) 2017 Denis Skripov
// https://github.com/nizhikebinesi/labs_inline_assembler
#pragma once

#include <vector>
#include <string>

namespace exercises {
	// Exercise:
	// ����������   �����   �������,  �  �������  ����������   ������   �����
	// ��������� ��������� ������ ��������.
	int index_of(char* src, char* tgt);
	//
	std::vector<int> prefix_function(std::string s);
	//
	int index_of_pratt(std::string src, std::string tgt);
}