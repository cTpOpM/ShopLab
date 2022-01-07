//
// Created by Tommaso on 06/01/2022.
//

#ifndef SHOPLAB_SHOPLIST_H
#define SHOPLAB_SHOPLIST_H

#include <vector>
#include <memory>
#include "Item.h"
#include "List.h"

class ShopList {
public:
    ShopList() {
        shopL.clear();
    }

    void removeList(std::string n);

    void addList(std::string n, std::unique_ptr<List>);

    void showList();

private:
    std::vector<std::unique_ptr<List>> shopL;
};


#endif //SHOPLAB_SHOPLIST_H
