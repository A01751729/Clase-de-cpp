#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

using std:: cin;
using std:: cout;
using std:: endl;
using std:: stringstream;
using std:: ifstream;
using std:: string;

int main(){
    ifstream archivo;
    archivo.open("/workspaces/Clase-de-cpp/clase6/inventario.csv");
    string linea;

    while(getline(archivo,linea))
    {
        cout<< linea << endl;
        stringstream token(linea);
        string pos1;
        getline(token,pos1,',');
        cout<<pos1<<endl;
    }
    archivo.close();


}