/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:20:00 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/07 19:20:02 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main() {
    // Create a ClapTrap object
    ClapTrap clap("ClapTrap");

    // Display initial status
    clap.status();
    std::cout << std::endl;

    // Test attack
    clap.attack("Target A");
    clap.status();
    std::cout << std::endl;

    // Test taking damage
    clap.takeDamage(5);
    clap.status();
    std::cout << std::endl;

    // Test repair
    clap.beRepaired(3);
    clap.status();
    std::cout << std::endl;

    // Test attacking with low energy
    for (int i = 0; i < 10; ++i) {
        clap.attack("Target B");
    }
    clap.status();
    std::cout << std::endl;

    // Test taking more damage than current hit points
    clap.takeDamage(15);
    clap.status();

    return 0;
}
