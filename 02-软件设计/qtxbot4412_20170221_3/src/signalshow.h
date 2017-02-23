/***************************************************************************
 *   Copyright (C) 2006-2008 by Tomasz Ziobrowski                          *
 *   http://www.3electrons.com                                             *
 *   e-mail: t.ziobrowski@3electrons.com                                   *
 *                                                                         *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef SIGNALSHOW_H
#define SIGNALSHOW_H

#include "abstractmeter.h"

class SignalShow : public AbstractMeter
{
	Q_OBJECT 
	public:
		SignalShow(QWidget *parent = 0);
		
		bool wiredflag;
	protected:
		void paintEvent(QPaintEvent *event); 	  // inherited form WidgetWithBackground
		void paintBackground(QPainter & painter); // inherited form WidgetWithBackground
		void initCoordinateSystem(QPainter & painter);
	
	public slots:
		void setwiredflag(bool flag);
};
#endif // SIGNALSHOW_H
