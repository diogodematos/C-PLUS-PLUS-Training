/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   member_attributes_main.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:34:16 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/11/30 15:41:42 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "member_attributes.hpp"
#include <iostream>

int	main()
{
	member_attributes	test;
	test.member = 5;
	std::cout << "Member: " << test.member << std::endl;
	
	test.function();
	
}