#include "Encrypt.h" 
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

Encrypt::Encrypt(){

}

string Encrypt::getPlain() const {
	return m_plain;
}

string Encrypt::getCipher() const{
	return m_cipher;
}

bool Encrypt::read(bool isPlain, string filename){
	ifstream monFic(filename.c_str());
	if(monFic){
		isPlain ? cout << "Lecture msg non-chiffre:\n" : cout << "Lecture msg chiffre:\n" ;
        string ligne; 

    while(getline(monFic, ligne)) 
        cout << ligne << endl;
	}
	else{
		cout << "Erreur ouverture du fichier" << endl;
		return false ;
	}
	return true ;
}

bool Encrypt::write(bool isPlain, string filename){
	ofstream monFic(filename.c_str());
	if(monFic){
		if(isPlain){
			cout << "Ecriture du msg non chiffre" << endl;
			monFichier << m_plain << endl ;
		}
		else{
			cout << "Ecriture du msg chiffre" << endl;
			monFichier << m_cipher << endl ;
		}
	}
	else {
		cout << "Erreur: impossible d'ouvrir le fichier (valeur retourne false)" << endl;
		return false;
	}

	return true ;
}

string Encrypt::encode(){
	string cipher = m_cipher;
	m_cipher = m_plain ;
	return cipher;
}

string Encrypt::decode(){
	string plain = m_plain;
	m_plain = m_cipher ;
	return plain;
}

void Encrypt::setPlain(string code){
	m_plain = code ;
}

void Encrypt::setCipher(string code){
	m_cipher = code ;
}