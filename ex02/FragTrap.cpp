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

#include "FragTrap.hpp"


//constructors
FragTrap::FragTrap    () : ClapTrap() {
    _name = "default3";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;

    std::cout   << "FragTrap default constructor called"
                << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout   << "FragTrap parameterized constructor called"
                << std::endl;
}


FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    std::cout   << "FragTrap copy constructor called"
                << std::endl;
    *this = other;
}

FragTrap&   FragTrap::operator=(const FragTrap &other) {
    if (this != &other) {
        std::cout   << "FragTrap copy assignment constructor called"
                    << std::endl;
        _name = other._name;
        _hitPoints = 100;
        _energyPoints = 100;
        _attackDamage = 30;
    }
    return *this;
}

//destructor
FragTrap::~FragTrap (void) {
    std::cout   << "FragTrap destructor called"
                << std::endl;
}

void        FragTrap::highFiveGuys(void) {
    std::cout   << "FragTrap: "
                << _name
                << " I want to high five!"
                << std::endl;
}