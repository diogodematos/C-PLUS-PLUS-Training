/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:18:29 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/12/20 09:21:58 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <iomanip> // Para manipulação de formato

int main() {
    // Obtendo o tempo atual
    std::time_t tempo_atual = std::time(nullptr);
    std::tm *tempo_struct = std::localtime(&tempo_atual);

    // Formatando o tempo
    std::ostringstream tempo_formatado;
    tempo_formatado << std::put_time(tempo_struct, "%Y%m%d_%H%M%S");
    std::string tempo_str = tempo_formatado.str();

    // Imprimindo o tempo no formato desejado
    std::cout << "Tempo atual formatado: " << tempo_str << std::endl;

    return 0;
}
