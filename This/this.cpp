/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   this.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:14:13 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/12/01 15:28:48 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "this.hpp"
#include <iostream>

Sample::Sample(void){

	std::cout << "Constructor" << std::endl;
	this->t = 42;
	std::cout << "this->t: " << this->t << std::endl;
	this->f();
	return ;
}

Sample::~Sample(void){
	
	std::cout << "Destructor"  << std::endl;
	return ;
}

void Sample::f(void){
	
	std::cout << "Member Function Called" << std::endl;
	return ;
}