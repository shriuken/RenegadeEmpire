#ifndef _Weapon_
#define _Weapon_

#include "string"
#include "REEnums.h"

class Weapon : public Item {

public:
    Weapon(std::string na, REEnums::WeaponType ty, unsigned da, unsigned du,
           unsigned we, unsigned ac, REEnums::WeaponType fo, 
           REEnums::WeaponType ft, REEnums::WeaponType uo, 
           REEnums::WeaponType ut);
    
    // accessors
    unsigned getDamage() const;
    unsigned getWeight() const;
    unsigned getAccuracy() const;
    REEnums::WeaponType getType() const;
    
    bool isFavored(const REEnums::WeaponType type);
    bool isUnfavored(const REEnums::WeaponType type);
    
    // mutators
    void setDamage(const unsigned newDa);
    
    void setWeight(const unsigned newWe);
    
    void setAccuracy(const unsigned newAc);
    
private:
    unsigned damage;
    unsigned weight;
    unsigned accuracy;
    REEnums::WeaponType type;
    REEnums::WeaponType favoredOne;
    REEnums::WeaponType favoredTwo;
    REEnums::WeaponType unfavoredOne;
    REEnums::WeaponType unfavoredTwo;

};

#endif
