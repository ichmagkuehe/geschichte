#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

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

void test() {
    std::vector<std::string>inventar;
    std::vector<std::string>::iterator iter;
    std::string story = "Du stehst auf einer Strasse und vor dir gabelt sich ein Weg nach links und rechts,wohin m\oechtest du gehen ? links oder rechts ? ";
    std::string eingabe;
    std::string links = "\nVor dir ist eine lange Strasse die zu einer verlassener Villa fuehrt. Es liegt ein Brief vor dir";
    std::string rechts = "\nEin langer Pfad fuehrt zu einem mysterioesen Wald..";

    std::cout << story << std::endl;
    std::cin >> eingabe;

    if (eingabe == "links" || eingabe == "Links")
    {
        std::cout << links << std::endl;
        std::cin >> eingabe;
        if (eingabe == "nimm")
        {
            inventar.push_back("Brief");
            std::cout << "Du hebst den Brief auf und legst ihn in deinen Rucksack\n";
           

        }
        std::cin >> eingabe;
        if (eingabe == "rucksack" || eingabe == "inventar" )
        {
            for (iter = inventar.begin(); iter != inventar.end(); iter++)
                std::cout << *iter << " ";
        }

    }
    
    if (eingabe == "rechts" || eingabe == "Rechts")
    {
        std::cout << rechts << std::endl;

    }
}


int main() {
  //clear_screen();

 //start();
  test();
  

  return 0;
}
