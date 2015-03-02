#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main () {

   int b, tries=0;
   srand((unsigned)time(0));
    int a=(rand()%100)+1;

  do {
    cout << "Adivina un número entre 1 y 100, tienes" << 10-tries << "intentos para atinarle" << endl;
    cin >> b;
    tries=tries+1;

    if (b>a) {
      cout << "Lástima," << b << "te pasaste. Try again amigo." << endl;
      cout << "Aún tienes " << (10-tries) << " oportunidades" << endl;
  }
        else if (b<a) {
          cout << "Lástima, tu elección(" << b <<") es muy pequeña"<< endl;
        }

          else if (b=a) {
            cout << "Acertaste! La respuesta correcta era:" << b << endl << "Quedaban" << (10-tries) << "intentos para lograrlo." <<endl;
            tries=10;
          }

} while ( tries<10 );

return 0;
}
