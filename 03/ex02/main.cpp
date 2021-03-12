/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 02:20:52 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/12 02:33:32 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main() {
	std::cout << SURCYAN << "---------------------" << RESET
		<< GREEN << " FragTrap " << RESET << SURCYAN
		<< "---------------------" << RESET << std::endl;

	FragTrap frag1;
	FragTrap frag2("test");
	FragTrap frag3(frag2);
	FragTrap frag4(frag1);

	frag1.rangedAttack("test");
	frag2.takeDamage(20);
	frag2.meleeAttack("frag1");
	frag1.takeDamage(4);
	frag1.takeDamage(20);
	frag1.takeDamage(30);
	frag1.takeDamage(150);
	frag1.beRepaired(15);
	frag1.beRepaired(300);
	frag2.vaulthunter_dot_exe("unknown");
	frag2.vaulthunter_dot_exe("unknown");
	frag2.vaulthunter_dot_exe("unknown");
	frag2.vaulthunter_dot_exe("unknown");
	frag2.vaulthunter_dot_exe("unknown");

	std::cout << std::endl;
	std::cout << SURCYAN << "---------------------" << RESET
		<< GREEN << " ScavTrap " << RESET << SURCYAN
		<< "---------------------" << RESET << std::endl;
	ScavTrap scav1;
	ScavTrap scav2("test");
	ScavTrap scav3(scav2);
	ScavTrap scav4(scav1);

	scav1.rangedAttack("test");
	scav2.takeDamage(15);
	scav2.meleeAttack("scav1");
	scav1.takeDamage(20);
	scav1.takeDamage(4);
	scav1.takeDamage(15);
	scav1.takeDamage(30);
	scav1.takeDamage(150);
	scav1.beRepaired(15);
	scav1.beRepaired(300);
	scav2.challengeNewcomer("unknown");
	scav2.challengeNewcomer("unknown");
	scav2.challengeNewcomer("unknown");
	scav2.challengeNewcomer("unknown");
	scav2.challengeNewcomer("unknown");
	return 0;
}
