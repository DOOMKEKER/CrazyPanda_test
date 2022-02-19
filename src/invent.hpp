#pragma once
#include <string>
#include <vector>

#include "invent.hpp"

class Item {
 protected:
  std::string ident_;
  std::string type_;
  std::string rarity_;
  int level_;

 public:
  Item();
  Item(std::string ident, std::string type, std::string rarity, int level)
      : ident_(ident), type_(type), rarity_(rarity), level_(level) {}
  ~Item();
};

class Weapon : Item {
 protected:
  float damage_;
  float speed_;

 public:
  Weapon(std::string ident, std::string type, std::string rarity, int level,
         float damage, float speed) {
    Item(ident, type, rarity, level);
    damage_ = damage;
    speed_ = speed;
  }
};

class Armor : Item {
 protected:
  float protection_;

 public:
  Armor(std::string ident, std::string type, std::string rarity, int level,
        float protection) {
    Item(ident, type, rarity, level);
    protection_ = protection;
  }
};

class Mod {
 private:
  std::string ident_;
  std::string type_;
  float value_;
};

class Inventory {
 private:
  std::vector<Weapon> weapons;
  std::vector<Armor> armors;

  std::vector<Mod> mods;
};