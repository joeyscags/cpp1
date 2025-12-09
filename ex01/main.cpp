/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeyscags <jcupp@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:29:03 by jcupp             #+#    #+#             */
/*   Updated: 2025/12/09 13:44:41 by joeyscags        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		N;
	Zombie	*horde;

	N = 5;
	std::string name = "HordeZombie";
	horde = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
