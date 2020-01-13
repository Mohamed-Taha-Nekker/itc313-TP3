#include "Encrypt.h"
#ifndef _caesar_h
#define _caesar_h
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Caesar: public Encrypt {
	public:
    	Caesar(int decalage = 3);
    	std::string encode();
    	std::string decode();
	private:
    	int m_decalage;
};