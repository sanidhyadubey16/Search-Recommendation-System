#include "SearchEngine.h"

void SearchEngine::addItem(const Item& item) {
    items.push_back(item);
}

std::vector<Item> SearchEngine::search(const std::string& keyword) {
    std::vector<Item> results;

    for (const auto& item : items) {
        if (item.title.find(keyword) != std::string::npos ||
            item.description.find(keyword) != std::string::npos) {
            results.push_back(item);
        }
    }

    return results;
}
