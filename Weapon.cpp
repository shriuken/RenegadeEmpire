#include "Weapon.h"
#include "string"

Weapon::Weapon(std::string na, REEnums::WeaponType ty unsigned da, unsigned du,
               unsigned we, unsigned ac) : 
               Item(na, REEnums::Weapon, du),
               type(ty),
               damage(da),
               weight(we),
               accuracy(ac),
               favoredOne(fo),
               favoredTwo(ft),
               unfavoredOne(uo),
               unfavoredTwo(ut)
               {}
               
unsigned Weapon::getDamage() const {
    return damage;
}

unsigned Weapon::getDurability() const {
    return durability;
}

unsigned Weapon::getWeight() const {
    return weight;
}

unsigned Weapon::getAccuracy() const {
    return accuracy;
}

REEnums::WeaponType getType() const {
    return type;
}

bool Weapon::isFavored(const REEnums::WeaponType type) {
    if (type == favoredOne or type == favoredTwo) {
        return true;
    }
    return false;
}
    
bool Weapon::isUnfavored(const REEnums::WeaponType type) {
    if (type == unfavoredOne or type == unfavoredTwo) {
        return true;
    }
    return false;
}

void Weapon::setDamage(const unsigned newDa) {
    damage = newDa;
}

void Weapon::setWeight(const unsigned newWe) {
    weight = newWe;
}

void Weapon::setAccuracy(const unsigned newAc) {
    accuracy = newAc;
}
