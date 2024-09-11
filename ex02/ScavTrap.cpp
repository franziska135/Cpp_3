/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:19:42 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/07 19:19:44 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap    () : ClapTrap() {
    _name = "default2";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;

    std::cout   << "Scavtrap default constructor called"
                << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout   << "ScavTrap parameterized constructor called"
                << std::endl;
}

ScavTrap::~ScavTrap (void) {
    std::cout   << "ScavTrap destructor called"
                << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    std::cout   << "ScavTrap copy constructor called"
                << std::endl;
    *this = other;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other) {
        std::cout   << "ScavTrap copy assignment constructor called"
                    << std::endl;
        _name = other._name;
        _hitPoints = 100;
        _energyPoints = 50;
        _attackDamage = 20;
    }
    return *this;
}

void        ScavTrap::attack(const std::string& target) {
    if (this->_energyPoints > 0) {
        std::cout   << "ScavTrap: "             << _name
                    << " attacked "             << target
                    << " causing "              << _attackDamage
                    << " points of damage "     << std::endl;

        std::cout   << "ScavTrap: "             << _name
                    << " lost one energy point because of the attack"
                    << std::endl;
        this->_energyPoints -= 1;
    }
    else
        std::cout   << "ScavTrap: "         << _name
                    << " cannot attack "    << target
                    << " because it has not enough energy points"
                    << std::endl;
}

void    ScavTrap::guardGate(void) {
    std::cout   << "ScavTrap: " << _name
                << " is in guarded gate mode"
                << std::endl;
}
