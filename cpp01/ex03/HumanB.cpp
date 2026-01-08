#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon *weapon)
{
	std::cout << &weapo
	this->weapon = &weapon;
}
