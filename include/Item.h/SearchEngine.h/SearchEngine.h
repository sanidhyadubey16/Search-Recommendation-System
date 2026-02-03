#ifndef SEARCH_ENGINE_H
#define SEARCH_ENGINE_H

#include <vector>
#include <string>
#include "Item.h"

class SearchEngine {
private:
    std::vector<Item> items;

public:
    void addItem(const Item& item);
    std::vector<Item> search(const std::string& keyword);
};

#endif
