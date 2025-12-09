/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeyscags <jcupp@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:29:30 by jcupp             #+#    #+#             */
/*   Updated: 2025/12/09 13:44:51 by joeyscags        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
  private:
	std::string name;

  public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce(void);
	void setName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
