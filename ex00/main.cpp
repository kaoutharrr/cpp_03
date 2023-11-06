/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:11:35 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/06 04:36:37 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main()
{ 
    ClapTrap a;
    int i = 0;
    while(i < 4)
    {
        a.attack("Boo");
        i++;
    }
    i = 0;
    while(i < 4)
    {
        a.beRepaired(9);
        i++;
    }
   i = 0;
    ClapTrap b("KOKO");
    while(i < 12)
    {
        b.attack("f");
        i++;
    }
    
}