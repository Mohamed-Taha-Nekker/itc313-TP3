#ifndef _caesar_h
#define _caesar_h
#include "Encrypt.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Caesar2: public Encrypt {
	public:
    	Caesar2(int decalage = 3);
    	string encode();
    	string decode();
	private:
    	int m_decalage ;
};
