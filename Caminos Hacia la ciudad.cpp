#include <iostream>

using namespace std;

int main () {
    int decision;
    cout << "Vas muy tranquilo hacia New York" << endl;
    cout << "Inesperadamente ocurre un accidente en el bus que ibas" << endl;
    cout << "Te lavantas y ves que todo esta destruido y que no hay nadie en donde estas" << endl;
    cout << "Piensas que hacer y se te vienen a la mente varias opciones para salir de ahi y llegar a la ciudad" << endl;
    cout << "1. Caminar por la carretera" << endl;
    cout << "2. Gritar por ayuda a todo pulmon" << endl;
    cout << "3. Buscar entre las mochilas de los pasajeros" << endl;
    cout << "4. Caminar por un bosque" << endl;
    cout << "5. Esperar en silencio " << endl;
    cout << "Piensas en que esto es un buen codigo pero lo importante ¿Que haces?" << endl;
    cin >> decision;

    if (decision == 1) {
        cout << "Caminar por la carretera es una buena idea, pero no hay nadie en la carretera" << endl;
        cout << "Te encuentras con un perro que parece perdido" << endl;
        cout << "El perro te sigue y te ayuda a encontrar el camino hacia la ciudad" << endl;
        cout << "Finalmente, llegas a New York con la ayuda del perro, quien se convierte en tu fiel compañero." << endl;
    } else if (decision == 2) {
        cout << "Gritar por ayuda no es una buena idea, ya que no hay nadie cerca" << endl;
        cout << "Te quedas solo y sin opciones" << endl;
        cout << "Pero de repente, un grupo de personas escucha tu grito y viene a ayudarte" << endl;
        cout << "Con su ayuda, logras llegar a la ciudad sano y salvo." << endl;
    } else if (decision == 3) {
        cout << "Buscar entre las mochilas de los pasajeros es una buena idea" << endl;
        cout << "Encuentras comida y agua, lo que te ayuda a sobrevivir" << endl;
        cout << "Con las provisiones, logras mantenerte fuerte y encuentras un mapa que te guía hacia la ciudad." << endl;
    } else if (decision == 4) {
        cout << "Caminar por el bosque es arriesgado, pero puedes encontrar un camino alternativo" << endl;
        cout << "Te encuentras con un grupo de personas que tambien estan perdidas" << endl;
        cout << "Juntos, encuentran un sendero que los lleva a la ciudad, formando una nueva amistad en el proceso." << endl;
    } else if (decision == 5) {
        cout << "Esperar en silencio no es una buena idea, ya que no sabes si alguien vendra" << endl;
        cout << "Te quedas solo y sin opciones" << endl;
        cout << "Sin embargo, después de varias horas, un helicóptero de rescate te encuentra y te lleva a la ciudad." << endl;
    } else {
        cout << "Opcion invalida. Por favor, elige una opcion valida." << endl;
    }

}
