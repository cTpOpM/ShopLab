//
// Created by Tommaso on 06/01/2022.
//

#ifndef SHOPLAB_SHOPLIST_H
#define SHOPLAB_SHOPLIST_H

#include <list>
#include <memory>
#include "Item.h"
#include "List.h"

class ShopList {
public:
    ShopList() = default;

    [[maybe_unused]] void removeList(const std::string &n);

    void addList(List *list);

    void showList();

private:
    std::list<List *> shopL;
};


#endif //SHOPLAB_SHOPLIST_H
