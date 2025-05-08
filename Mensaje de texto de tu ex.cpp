#include  <iostream>

using namespace std;

int main () {

    int situacion;

    cout << "A continuacion se presentaran unas situaciones ficticias."  << endl;
    cout << "Deberas de tomar decisiones para cada situacion, asi que elige bien :)" << endl;

    cout << "A Jorge le cayo un mensaje de su ex, pero no sabe que hacer......" << endl;
    cout <<"1. Dejarla en visto" << endl;
    cout <<"2. Responderle...." << endl;
    cout <<"3. Bloquearla :)" << endl;
    cout <<"4. Decirle que no lo moleste" << endl;
    cout <<"5. Preguntarle por que no lo deja en paz" << endl;
    cin  >> situacion;
switch (situacion) {
    case 1:
    cout <<"Solo ignorara sus demas mensajes :)" << endl;
    break; 

    case 2:
    cout <<"Nadie sabe lo que va a pasar con Jorge y su ex... tal vez regresen." << endl;
    break;

    case 3:
    cout <<"Ya no sabra mas de ella, a menos que ella cambie de numero......." << endl;
    break;

    case 4:
    cout <<"Creo que igual... ella seguira insistiendo." << endl;
    break;

    case 5:
    cout <<"Lo mas seguro es que le mande un testamento excusandose....." << endl;
    break;
}

return 0;

}
