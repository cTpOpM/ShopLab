//
// Created by Tommaso on 06/01/2022.
//

#ifndef SHOPLAB_ITEM_H
#define SHOPLAB_ITEM_H

#include <iostream>
#include <utility>

class Item {
public:
    explicit Item(std::string n = "nothing here", int q = 0) : name(std::move(n)), quantity(q) {
        category = "TODO";
    }

    void printCharacteristics() {
        std::cout << "name->" << name << std::endl;
        std::cout << "category->" << category << std::endl;
        std::cout << "quantity " << quantity << std::endl;
    }

private:
    std::string name;
    std::string category;
    int quantity;
};


#endif //SHOPLAB_ITEM_H
