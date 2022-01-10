//
// Created by Tommaso on 07/01/2022.
//

#ifndef SHOPLAB_LIST_H
#define SHOPLAB_LIST_H

#include <iostream>
#include <utility>
#include <list>
#include <memory>
#include "Item.h"

class List {
public:
    explicit List(std::string n) : name(std::move(n)) {}
    ~List() = default;

    void addLItem(Item *it);

    [[maybe_unused]] [[nodiscard]] const std::string &getName() const;

    [[maybe_unused]] void setName(const std::string &name);

    void showItems();

private:
    std::string name;
    std::list<Item *> L;
};


#endif //SHOPLAB_LIST_H
