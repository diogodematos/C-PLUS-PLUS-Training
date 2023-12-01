/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:02:34 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/11/29 17:17:44 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.hpp"

Sample::Sample(void) {
	
	std::cout << "Constructor called" << std::endl;
	return ;
	
}

Sample::~Sample(void) {
	
	std::cout << "DeConstructor called" << std::endl;
	return ;
	
}