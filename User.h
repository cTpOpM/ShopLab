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

    void ListCreator();

    void showLists();

    void ShowSpecificList(const std::string &listName);

    void InterfaceList(
            const std::string &listName);//TODO has to modify the list, so you can add, remove or modify the quantity of an item or remove a list or change the name of a list or copy a list

    void ShowNameOfLists();//TODO has to show all the names of the lists

    void UserInterface();//TODO has all the methods that a User can invoke

private:
    [[maybe_unused]] std::string name;
    [[maybe_unused]] std::string email;
    ShopList *list; //TODO try to change raw pointers to smart pointers
};


#endif //SHOPLAB_USER_H
