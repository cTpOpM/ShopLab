//
// Created by Tommaso on 06/01/2022.
//

#include "ShopList.h"

void ShopList::addList(List *list) {
    shopL.push_back(list);
}

[[maybe_unused]] void ShopList::removeList(const std::string &n) {

}

void ShopList::showList() {
    for (auto &itr: shopL) {
        itr->showItems();
    }
}


