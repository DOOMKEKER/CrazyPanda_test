#include <iostream>

enum { ARMOR, WEAPON, MOD, INVENT };

int main(void) {
  int input;
  while (true) {
    std::cout << "Choose what you want to do\n"
                 "1 - Add Armor\n"
                 "2 - Add Weapon\n"
                 "3 - Add Modification"
                 "4 - Show inventory"
              << std::endl;
    std::cin >> input;
    switch (input) {
      case ARMOR:
        /* code */
        break;

      case WEAPON:
        /* code */
        break;

      case MOD:
        /* code */
        break;

      case INVENT:
        /* code */
        break;

      default:
        break;
    }
  }
}
