/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:19:11 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/12/04 11:58:57 by dcarrilh         ###   ########.fr       */
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

Sample2::Sample2(char i, int j, float k) : a(i), b(j), c(k){
	
	std::cout << "Constructor Called" << std::endl;
	std::cout << "this->a: " << this->a << std::endl;
	std::cout << "this->b: " << this->b << std::endl;
	std::cout << "this->c: " << this->c << std::endl;
	return ;
}

Sample2::~Sample2(void){
	
	std::cout << "Destructor Called" << std::endl;
	return ;
}