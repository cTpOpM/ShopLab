//
// Created by Tommaso on 06/01/2022.
//

#include "User.h"

#include <memory>

void User::ListCreator() {
    std::cout << "////////TODO////////" << std::endl;
    std::string listName;
    std::string ItemName;
    int quantity;
    std::cout << "create a list? name->";
    std::cin >> listName;
    int end = 1;
    List temporary(listName);
    std::cout << "now insert the items and the quantity" << std::endl;
    while (end != 0) {
        std::cout << "name->";
        std::cin >> ItemName;
        std::cout << "quantity->";
        std::cin >> quantity;
        temporary.addLItem(new Item(ItemName, quantity));
        std::cout << "to end digit 0";
        std::cin >> end;
    }
    list->addList(temporary);
}

void User::showLists() {
    list->showList();
}

void User::ShowSpecificList(const std::string &listName) {
    list->showSpecificList(listName);
}

void User::ShowNameOfLists() {

}

void User::InterfaceList(const std::string &listName) {

}

void User::UserInterface() {

}


