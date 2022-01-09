//
// Created by Tommaso on 06/01/2022.
//

#include "User.h"

#include <memory>

void User::userInterface() {
    std::cout << "////////TODO////////" << std::endl;
    std::string n;
    std::string i;
    int q;
    std::cout << "create a list? name->";
    std::cin >> n;
    int end = 1;
    List a(n);
    std::cout << "now insert the items and the quantity" << std::endl;
    while (end != 0) {
        std::cout << "name->";
        std::cin >> i;
        std::cout << "quantity->";
        std::cin >> q;
        a.addLItem(new Item(i, q));
        std::cout << "to end digit 0";
        std::cin >> end;
    }
    list->addList(&a);
}

void User::showLists() {
    list->showList();
}
