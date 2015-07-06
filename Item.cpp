#include "Item.h"
#include "REEnums.h"
#include "string"

Item::Item(std::string na, REEnums::ItemType ty, unsigned us) :
    name(na),
    description(),
    type(ty),
    uses(us)
    {}
    
std::string Item::getName() const {
    return name;
}

std::string getDescription() const {
    return description;
}

REEnums::ItemType Item::getType() const {
    return type;
}

unsigned Item::getUses() const {
    return uses;
}

void Item::setName(const std::string newNa) {
    name = newNa;
}

void Item::setDescription(const std::string newDe) {
    description = newDe;
}

void Item::setUses(const unsigned newUs) {
    uses = newUs;
}

void Item::addUses(const unsigned addUs) {
    uses += addUs;
}

void Item::subUses(const unsigned subUs) {
    if (subUs > uses) {
        uses = 0;
    }
    else {
        uses -= subUs;
    }
}
