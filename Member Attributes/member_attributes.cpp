/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   member_attributes.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:24:05 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/11/30 15:36:34 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "member_attributes.hpp"

member_attributes::member_attributes(void){
	
	std::cout << "Constructor Called"  << std::endl;
	return ;
	
}

member_attributes::~member_attributes(void){
	
	std::cout << "Desconstructor Called"  << std::endl;
	return ;
	
}

void	member_attributes::function(void){
	
	std::cout << "Function Called"  << std::endl;
	return ;
	
}