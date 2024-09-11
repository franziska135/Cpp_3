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

#include "ClapTrap.hpp"

//constructor
ClapTrap::ClapTrap    (void) {
    _name = "default";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout   << "ClapTrap default constructor called"
                << std::endl;
}

ClapTrap::ClapTrap (std::string name) {
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout   << "ClapTrap parameterized constructor called"
                << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap& other) {
    *this = other;
    std::cout   << "ClapTrap copy constructor called"
                << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout   << "ClapTrap copy assignment constructor called"
                << std::endl;
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap () {
    std::cout   << "ClapTrap Destructor called"
                << std::endl;
}

void        ClapTrap::attack(const std::string& target) {
    if (this->_energyPoints > 0) {
        std::cout   << "ClapTrap attacked "
                    << target
                    << " causing "
                    << _attackDamage
                    << " points of damage "
                    << std::endl;

        std::cout   << "ClapTrap lost one energy point because of the attack"
                    << std::endl;
        this->_energyPoints -= 1;
    }
    else
        std::cout   << "Claptrap cannot attack "
                    << target
                    << " because it has not enough energy points"
                    << std::endl;
}

void        ClapTrap::takeDamage(unsigned int amount) {
    if (amount == 0) {
        std::cout   << "A proper attack requires more than zero amount of damage"
                    << std::endl;
        return ;
    }
    if (this->_hitPoints > 0) {
        if ((int)amount >= this->_hitPoints)
            this->_hitPoints = 0;
        else
            this->_hitPoints -= amount;
        std::cout   << this->_name
                    << " took "
                    << amount
                    << " of damage."
                    << std::endl;
    }
    else
        std::cout   << this->_name
                    << " is already destroyed (hitpoints at 0) and cannot take more damage"
                    << std::endl;
}

void        ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energyPoints > 0) {
        this->_hitPoints += amount;
        std::cout       << "ClapTrap was repaired and gained "
                        << amount
                        << " hit points."
                        << std::endl;
        std::cout   << "ClapTrap lost one energy point because of the repair"
                        << std::endl;
        this->_energyPoints -= 1;
    }
    else
        std::cout   << "Claptrap cannot be repaired because it has not enough energy points"
                    << std::endl;
}

void ClapTrap::status(void) {
        std::cout   << "\nstatus:\n"
                    << "Hit Points: "       << _hitPoints
                    << "\nEnergy Points: "  << _energyPoints
                    << "\nAttack Damage: "  << _attackDamage
                    << std::endl;
    }
