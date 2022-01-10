//
// Created by Tommaso on 06/01/2022.
//

#include "ShopList.h"

void ShopList::addList(const List &list) {
    shopL.push_back(list);
}

[[maybe_unused]] void ShopList::removeList(const std::string &n) {

}

void ShopList::showList() {
    for (auto &itr: shopL) {
        itr.showItems();
    }
}

void ShopList::showSpecificList(const std::string &listName) {
    for (auto &itr: shopL) {
        if (itr.getName() == listName) {
            std::cout << itr.getName() << std::endl;
            itr.showItems();
        }
    }
}


