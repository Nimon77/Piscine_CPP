/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 02:20:52 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/12 17:39:01 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

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

	std::cout << std::endl;
	std::cout << SURCYAN << "---------------------" << RESET
		<< GREEN << " NinjaTrap " << RESET << SURCYAN
		<< "---------------------" << RESET << std::endl;
	NinjaTrap ninja1;
	NinjaTrap ninja2("test");
	NinjaTrap ninja3(ninja2);
	NinjaTrap ninja4(ninja1);

	ClapTrap clap1(0, 0, 0, 0, 0, "test Clap", 0, 0, 0);

	ninja1.rangedAttack("test");
	ninja2.takeDamage(15);
	ninja2.meleeAttack("scav1");
	ninja1.takeDamage(20);
	ninja1.takeDamage(4);
	ninja1.takeDamage(15);
	ninja1.takeDamage(30);
	ninja1.takeDamage(150);
	ninja1.beRepaired(15);
	ninja1.beRepaired(300);
	ninja2.ninjaShoebox(frag2);
	ninja2.ninjaShoebox(scav2);
	ninja2.ninjaShoebox(ninja2);
	ninja2.ninjaShoebox(clap1);
	ninja2.ninjaShoebox(scav3);
	return 0;
}
