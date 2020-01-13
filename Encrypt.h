#ifndef _encrypt_h
#define _encrypt_h
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Encrypt {
    public:
        Encrypt();
        string getPlain() const ;
        string getCipher()const ;
        bool read(bool isPlain, string filename);
        bool write(bool isPlain, string filename);
        virtual string encode();
        virtual string decode();
        void setPlain(string code);
        void setCipher(string code);
    protected:
        string m_plain;
        string m_cipher;
};