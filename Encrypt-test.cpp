#include "Encrypt.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	Encrypt enc;
	string msg = "Les sanglots longs Des violons De l'automne Blessent mon coeur D'une langueur Monotone.";
	enc.setPlain(msg);
	cout << "Affichage message non chiffré: " << e.getPlain() << endl;
	return 0;
}