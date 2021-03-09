/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 02:20:52 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/09 04:45:24 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main() {
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
	return 0;
}
