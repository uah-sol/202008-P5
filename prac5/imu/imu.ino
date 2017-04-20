/**
 * Copyright (C) 2017 UAH. Departamento de Automática

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/**
 * 
 * Práctica 5. Unidad de medida inercial.
 * 
 * En el arranque del sistema, el programa debe realizar las siguientes
 * operaciones:
 *
 * - Configuración de la puerta serie a 115200 baudios
 * - Configuración del dispositivo GY-87 empleando la biblioteca Wire
 *   - Configuración del giróscopo con un fondo de escala de ± 250º
 *   - Configuración del acelerómetro con un fondo de escala de ± 2g
 * 
 * El programa debe imprimir, cada 100 ms, las siguientes medidas:
 * 
 * - Velocidad angular en X, Y y Z en grados/segundo
 * - Aceleración en g's en X, Y y Z
 *
 * A continuación, se ha de calibrar el sensor obteniendo el offset medio de
 * 1000 muestras de cada medida. La medida real será la obtenida del sensor
 * el offset medio calculado.
 *
 * Por último, se imprimirán a través de la puerta serie medidas independientes
 * para su representación empleando el Serial Plotter del IDE de Arduino. Las
 * medidas deben de aparecer cada una en una nueva línea.
 *
 *
 */

#include <Wire.h>


void setup() {
  
  // Código de configuración. Solo se ejecutará al comienzo de la aplicación.
  
}

void loop() {
  
  // Código principal de la aplicación. Se ejecutará de forma indefinida.
  
}

