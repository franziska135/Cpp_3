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

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap    (void);
        ScavTrap    (std::string name);
        ScavTrap    (const ScavTrap &other);
        ScavTrap&   operator=(const ScavTrap &other);
        ~ScavTrap   (void);
        void        attack(const std::string &target);
        void        guardGate(void);
};

#endif