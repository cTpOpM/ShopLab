//
// Created by Tommaso on 06/01/2022.
//

#ifndef SHOPLAB_ITEM_H
#define SHOPLAB_ITEM_H

#include <iostream>

class Item {
public:
    Item(std::string n) : name(n) {
        category = "TODO";
    }

    void printCharacteristics() {
        std::cout << "name->" << name << std::endl;
        std::cout << "category->" << category << std::endl;
    }

private:
    std::string name;
    std::string category;
    int quantity;
};


#endif //SHOPLAB_ITEM_H
