/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:38:50 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/12/04 11:47:15 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONST_H
# define CONST_H

class Sample
{
public:

	const float	pd;
	int	i;
	Sample(const float f);
	~Sample(void);

	void bar(void) const;
};

#endif