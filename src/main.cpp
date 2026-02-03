#include <iostream>
#include "SearchEngine.h"

int main() {
    SearchEngine engine;

    engine.addItem(Item(1, "iPhone 15", "Apple smartphone", 100, 1700000000));
    engine.addItem(Item(2, "MacBook Pro", "Apple laptop", 80, 1690000000));
    engine.addItem(Item(3, "Samsung Galaxy", "Android smartphone", 90, 1680000000));

    auto results = engine.search("Apple");

    for (const auto& item : results) {
        std::cout << item.title << std::endl;
    }

    return 0;
}
