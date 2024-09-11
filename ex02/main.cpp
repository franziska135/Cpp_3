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
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

//assignments
//takedamage function too because of guard gate?
//extra status function
//what to be defined in constructors?
//inheritance structure, when ":"?
//inheritance copy assignment operator not redefine?

int main() {
    // Create a ClapTrap object
    ClapTrap    clap("Cop");
    clap.status();
    //Scav Trap object
    ScavTrap    scav("Bandit");
    scav.status();
    //Scav Trap object
    FragTrap    last("Robber");
    last.status();


    std::cout   << "Construction finished, attacking will start" 
                << "\n__________________________________________\n"
                << std::endl;
    //Clap Attack
    clap.attack("Target A");
    clap.status();
    
    clap.takeDamage(5);
    clap.status();

    clap.beRepaired(3);
    clap.status();
    

    //Scav Attack
    scav.attack("Target B");
    scav.status();
    scav.guardGate();
    last.highFiveGuys();
    std::cout << std::endl;
    // Copy constructor test
    // ScavTrap scav2(scav); // Should print "ScavTrap copy constructor called"
    // scav2.status();

    // // Copy assignment test
    // ScavTrap scav3("DifferentScav");
    // scav3 = scav; // Should print "ScavTrap copy assignment constructor called"
    // scav3.status();
    return 0;
}