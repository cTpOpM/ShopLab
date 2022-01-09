//
// Created by Tommaso on 06/01/2022.
//

#ifndef SHOPLAB_USER_H
#define SHOPLAB_USER_H

#include <iostream>
#include <utility>
#include "ShopList.h"
#include "Item.h"

class User {
public:
    explicit User(std::string n = "defaultUser", std::string e = "defaultUser@email.com") : name(std::move(n)),
                                                                                            email(std::move(e)) {
        list = new ShopList;
    }

    void userInterface();

    void showLists();

private:
    [[maybe_unused]] std::string name;
    [[maybe_unused]] std::string email;
    ShopList *list;
};


#endif //SHOPLAB_USER_H
