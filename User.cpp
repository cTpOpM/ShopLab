//
// Created by Tommaso on 06/01/2022.
//

#include "User.h"

void User::userInterface() {
    std::cout << "////////TODO////////" << std::endl;
    std::string n;
    std::string i;
    int q;
    std::cout << "create a list? name->";
    std::cin >> n;
    int end = 1;
    std::cout << "now insert the items and the quantity" << std::endl;

    while (end != 0) {
        std::cout << "name->";
        std::cin >> i;
        std::cout << "quantity->";
        std::cin >> q;
        Item it(i);

        std::cout << "to end digit 0";
        std::cin >> end;
    }

}

void User::showLists() {
    list->showList();
}
