#ifndef _Item_
#define _Item_

#include "REENums.h"

class Item {

public:
    Item(std::string na, REEnums::ItemType ty, unsigned uses);
    
    // accessors
    std::string getName() const;
    std::string getDescription() const;
    REENums::ItemType getType() const;
    unsigned getUses() const;
    
    // mutators
    void setName(const std::string newNa);
    void setDescription(const std::string newDe);
    void setUses(const unsigned newUs);
    void addUses(const unsigned addUs);
    void subUses(const unsigned subUs);

private:
    std::string name;
    std::string description;
    REEnums::ItemType type;
    unsigned uses;
}

#endif
