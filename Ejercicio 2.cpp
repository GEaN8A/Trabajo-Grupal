#include  <iostream>

using namespace std;

int main () {

    int situacion;

    cout << "A continuacion se presentaran unas situaciones ficticias."  << endl;
    cout << "Deberas de tomar decisiones para cada situacion, asi que elige bien :)" << endl;

    cout << "Imagina que te mandan un mensaje de texto desde PR.... Que harias?" << endl;
    cout <<"1. Revisar quien mando el mensaje" << endl;
    cout <<"2. Confias en el mensaje y lo respondes..." << endl;
    cout <<"3. Le informas a alguien experto en mensajes de desconocidos." << endl;
    cout <<"4. Rastreas el numero y verificas la ubicacion y destinatario :)" << endl;
    cout <<"5. Borras el mensaje." << endl;
    cin  >> situacion;
switch (situacion) {
    case 1:
    cout <<"Al parecer es un famoso del genero urbano invitandote a su concierto...." << endl;
    break; 

    case 2:
    cout <<"Te responden ofreciendote un pase a un concierto pero no sabes de quien es, seria muy arriesgado ir..." << endl;
    break;

    case 3:
    cout <<"Te dice que no respondas ya que es en un Pais fuera de tu alcance y nadie sabe que puede pasar." << endl;
    break;

    case 4:
    cout <<"Al verfificar los datos te das cuenta que la ubicacion es en San Juan PR, y el mensaje es de Raul Ocasio!!!" << endl;
    break;

    case 5:
    cout <<"No pasa nada :)" << endl;
    break;
}

return 0;

}