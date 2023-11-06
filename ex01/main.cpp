/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:11:38 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/06 04:38:40 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
   ClapTrap a("claptrap");
   for (int i = 0; i< 5 ;i++)
   {
         a.attack("some");
   }
   ScavTrap b("scavtrap");
   for (int i = 0; i< 51 ;i++)
   {
         b.attack("whatever");
   }
   for (int i = 0; i< 10 ;i++)
   {
         b.takeDamage(2);
   }
   for (int i = 0; i< 3 ;i++)
   {
        b.guardGate();
   }
}
