/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:12:37 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/06 04:30:20 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
   FragTrap s("HI");
   for (int i = 0; i< 60 ;i++)
   {
         s.takeDamage(1);
   }
   s.highFivesGuys();
   for (int i = 0; i< 60 ;i++)
   {
         s.beRepaired(1);
   }
   s.highFivesGuys();
}
   
