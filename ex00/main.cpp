/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcupp <jcupp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:27:58 by jcupp             #+#    #+#             */
/*   Updated: 2025/11/17 16:27:59 by jcupp            ###   ########.fr       */
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

