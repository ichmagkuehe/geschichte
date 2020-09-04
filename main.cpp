#include <iostream>
#include <cstdlib>
// das wird eine Geschichte fuer Linux Betriebssystem
void clear_screen()
{
  #ifdef WINDOWS
      std::system("cls");
  #else
      // Assume POSIX
      std::system("clear");

  #endif
}
void start(){
  char richtung;
  std::cout << "Du stehst auf einer Strasse und vor dir gabelt sich ein Weg nach links und rechts" << '\n';
  std::cout << "Wohin möchtest du gehen ? (L) oder (R)" << '\n';
  std::cin >> richtung;
  switch (richtung) {
    case 'L':
      std::cout << "Du siehst einen schoenen Wald\n";
      break;
    case 'R':
        std::cout << "Vor dir breitet sich eine flache Ebene aus, du siehst hohe Berge am Horizont\n";
        break;

  }

}
int main() {
  clear_screen();

  start();
  std::cout<<"\ntest";

  return 0;
}
