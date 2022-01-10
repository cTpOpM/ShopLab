//
// Created by Tommaso on 07/01/2022.
//

#include "List.h"

void List::addLItem(Item *it) {
    L.push_back(it);
}

[[maybe_unused]] const std::string &List::getName() const {
    return name;
}

[[maybe_unused]] void List::setName(const std::string &n) {
    List::name = n;
}

void List::showItems() {
    std::cout << name << std::endl;
    for (auto &itr: L) {
        itr->printCharacteristics();
    }
}


