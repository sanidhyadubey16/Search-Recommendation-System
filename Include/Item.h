#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
public:
    int id;
    std::string title;
    std::string description;
    int popularity;
    long long timestamp;

    Item(int id,
         const std::string& title,
         const std::string& description,
         int popularity,
         long long timestamp);
};

#endif
