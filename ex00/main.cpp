/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeyscags <joeyscags@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:46:03 by joeyscags         #+#    #+#             */
/*   Updated: 2025/11/15 20:44:32 by joeyscags        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie* heapZombie = newZombie("Heap Joey");
	heapZombie->announce();
	delete heapZombie;

	randomChump("Stack Yudi");

	return 0;
}

