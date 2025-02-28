/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 08:08:31 by hrazafia          #+#    #+#             */
/*   Updated: 2025/02/10 08:14:19 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*zombie;
	
	zombie = new Zombie;
	if (zombie == NULL)
		return (NULL);
	zombie->setName(name);
	return (zombie);
}
