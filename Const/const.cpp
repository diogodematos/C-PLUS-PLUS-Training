/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:42:06 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/12/04 11:53:21 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "const.hpp"
#include <iostream>

Sample::Sample(const float f) : pd(f), i(42){

	std::cout << "Constructor Called" << std::endl;
	std::cout << "this->pd: " << this->pd << " and this->i: " << std::endl;
	return ;
}

Sample::~Sample(void){
	
	std::cout << "Destructor Called" << std::endl;
	return ;
}

void Sample::bar(void) const{
	
	std::cout << "Vamos" << std::endl;
	return ;
}

