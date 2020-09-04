#include <iostream>
#include <cstdlib>

void clear_screen()
{
  #ifdef WINDOWS
      std::system("cls");
  #else
      // Assume POSIX
      //std::system("clear");
      std::cout << "\f";
  #endif
}
void start(){
  std::cout << "Du stehst auf einer Strasse und vor dir gabelt sich ein Weg nach links und rechts" << '\n';
  std::std::cout << "Wohin möchtest du gehen ? (L) oder (R)" << '\n';

}
int main() {
  clear_screen();

  start();
  std::cout<<"\ntest";

  return 0;
}
