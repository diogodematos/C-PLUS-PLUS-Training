/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:19:11 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/12/01 17:36:07 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.hpp"
#include <iostream>

Sample::Sample(char i, int j, float k){
	
	std::cout << "Constructor Called" << std::endl;
	this->a = i;
	std::cout << "this->a: " << this->a << std::endl;
	this->b = j;
	std::cout << "this->b: " << this->b << std::endl;
	this->c = k;
	std::cout << "this->c: " << this->c << std::endl;
	return ;
}

Sample::~Sample(void){
	
	std::cout << "Destructor Called" << std::endl;
	return ;
}