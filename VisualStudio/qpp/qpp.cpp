// qpp.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

#include <iostream>
#include "qpp.h"

using namespace qpp;

int main()
{
	std::cout << "Hello, Quantum++!\nThis is the |0> state:\n";
	std::cout << disp(st.z0) << '\n';
	std::cin.get();
}
