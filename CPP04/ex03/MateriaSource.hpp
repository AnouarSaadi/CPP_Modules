/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 13:10:55 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:14:44 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "Character.hpp"

class MateriaSource: public  IMateriaSource
{
private:
	AMateria	**_materia;
	int			_numberOfMateria;
	void destroyMaterias();

public:
	MateriaSource();
	MateriaSource(MateriaSource const & src);
	~MateriaSource();
	MateriaSource & operator=(MateriaSource const & src);

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};

#endif