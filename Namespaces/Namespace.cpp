/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Namespace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:02:26 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/11/29 17:02:27 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	gl_var = 2;
int	f(void) {return 4;}

namespace	gbr {
	int	gl_var = 5;
	int f(void) {return 3;}
}

namespace dfd {
	int gl_var = 7;
	int f(void) {return 8;}
}

namespace asd = gbr;

int main()
{
	printf("gl_var [%d]\n", gl_var);
	printf("f [%d]\n", f());

	printf("gbr: gl_var [%d]\n", gbr::gl_var);
	printf("gbr: f [%d]\n", gbr::f());

	printf("gbr: gl_var [%d]\n", dfd::gl_var);
	printf("gbr: f [%d]\n", dfd::f());

	printf("gbr: gl_var [%d]\n", asd::gl_var);
	printf("gbr: f [%d]\n", asd::f());

	printf("gbr: gl_var [%d]\n", ::gl_var);
	printf("gbr: f [%d]\n", ::f());

}
