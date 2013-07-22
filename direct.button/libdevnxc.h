/** Titre
	@project TP02 : Capteur de luminosité et sonar- Contrôle.com process
	@file libdevnxc.h
	@brief Boîte à outils
	@author Copyright 2009 Antoine GREA <grea09@gmail.com>
	
	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.
	
	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.
	
	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
	MA 02110-1301, USA.
 */

#ifndef _INCLUDED_LIBDEVC_H
#define _INCLUDED_LIBDEVC_H


//	Foctions utiles
///////////////////////////////////////////////////////////////////////{

#define max(a,b) ((a>b)?(a):(b))

#define min(a,b) ((a<b)?(a):(b))

#define borne(x,inf,sup) max((inf),min((sup),(x)))

#define fori(i,length) for(int i(0); i<length;i++)

#define fort(increment, somme, condition_de_fin, inc_somme)		\
				for((increment)=((somme)=0);(condition_de_fin);(somme)+=(inc_somme)+0*(increment)++)

#define percent(x,max,min)   ( borne( ( ( (x) - (min) ) * 100) / ( (max) - (min) ) ,0,100) )


///////////////////////////////////////////////////////////////////////}


//	Définitions des constantes
///////////////////////////////////////////////////////////////////////{

#define FORWARD_TIME 4000
#define FORWARD_POWER 100
#define BACKWARD_POWER -50
#define ROTATE_POWER 50
#define HALF_TURN 180

#define REAL_TIME 1000
#define FREQ_TIME 10

#define LCD_ROW 8
#define LCD_READY "    - Pret -    "
#define LCD_LINE "----------------"
#define LCD_CLEAN "                 "

#define ENGINE_BOTH OUT_AB
#define ENGINE_RIGHT OUT_A
#define ENGINE_LEFT OUT_B
#define ENGINE_ANGLE OUT_C

#define ROTATION_SENS OUT_A
#define ROTATION_DIRECTION OUT_B

#define TACHO_CM (7738 / 370)

#define SENSOR_SONAR IN_1
#define SENSOR_LUM IN_2

#define SENSOR_TRIGER IN_1
#define SENSOR_TRIGER2 IN_2

#define MASTER 0
#define SLAVE 1


///////////////////////////////////////////////////////////////////////}




#endif
