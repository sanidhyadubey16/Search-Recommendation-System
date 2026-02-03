#include "Item.h"

Item::Item(int id,
           const std::string& title,
           const std::string& description,
           int popularity,
           long long timestamp)
    : id(id),
      title(title),
      description(description),
      popularity(popularity),
      timestamp(timestamp) {}
