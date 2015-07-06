#ifndef _Unit_
#define _Unit_

#include "Weapon.h"
#include "Item.h"
#include "REEnums.h"
#include "string"
#include "Class.h"

class Unit {

public:
    Unit(std::string name);
    
    // accessors
    std::string getName() const;
    REEnum::Classes getClassType() const;
    
    unsigned getLevel() const;
    unsigned getExpPts() const;
    
    unsigned getCurrentHealth() const;
    unsigned getMaxHealth() const;
    
    unsigned getMovement() const;
    
    unsigned getPower() const;
    unsigned getDefense() const;
    unsigned getResistance() const;
    unsigned getSpeed() const;
    unsigned getSkill() const;
    unsigned getLuck() const;
    
    Weapon* getWeapon() const;
    
    // mutators
    void setName(std::string na);
    void setClass(Class* newClass);
    void setLevel(const unsigned lv);
    void setExpPts(const unsigned xp);
    void setFaction(const REEnums::Faction fac);
    void setRenegadePoints(const unsigned points);
    void addRenegadePoitns(const unsigned addPoints);
    void subRenegadePoints(const unsigned subPoints);
    void setEmpirePoints(const unsigned points);
    void addEmpirePoints(const unsigned addPoints);
    void subEmpirePoints(const unsigned subPoints);
    void setCurrentHealth(const unsigned current);
    void addCurrentHealth(const unsigned health);
    void subCurrentHealth(const unsigned health);
    void setMaxHealth(const unsigned max);
    void addMaxHealth(const unsigned health);
    void subMaxHealth(const unsigned health);
    void setMovement(const unsigned move);
    void addMovement(const unsigned move);
    void subMovement(const unsigned move);
    void setPower(const unsigned po);
    void addPower(const unsigned po);
    void subPower(const unsigned po);
    void setDefense(const unsigned def);
    void addDefense(const unsigned def);
    void subDefense(const unsigned def);
    void setResistance(const unsigned res);
    void addResistance(const unsigned res);
    void subResistance(const unsigned res);
    void setSpeed(const unsigned spd);
    void addSpeed(const unsigned spd);
    void subSpeed(const unsigned spd);
    void setSkill(const unsigned skl);
    void addSkill(const unsigned skl);
    void subSkill(const unsigned skl);
    void setLuck(const unsigned lck);
    void addLuck(const unsigned lck);
    void subLuck(const unsigned lck);
    
    void equipWeapon(Weapon* newWep);
    
    void levelUp();
    
private:
    std::string name;
    Class* myClass;
    unsigned level;
    unsigned experiencePts;
    
    REEnums::Faction faction;
    unsigned renegadePoints;
    unsigned empirePoints;
    
    unsigned currentHealth;
    unsigned maxHealth;
    
    unsigned movement;
    
    unsigned power;
    unsigned defense;
    unsigned resistance;
    unsigned speed;
    unsigned skill;
    unsigned luck;
    
    Weapon* equippedWeapon;
    
};

#endif
