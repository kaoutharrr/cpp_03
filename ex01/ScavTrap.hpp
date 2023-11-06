/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:16:40 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/06 00:45:01 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include"ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
    ScavTrap();
    ScavTrap(const std ::string& N);
    ScavTrap(ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& other);
    void attack(const std :: string& Target);
    void guardGate();
    ~ScavTrap();
};

#endif