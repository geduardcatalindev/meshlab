/*****************************************************************************
 * MeshLab                                                           o o     *
 * Visual and Computer Graphics Library                            o     o   *
 *                                                                _   O  _   *
 * Copyright(C) 2004-2022                                           \/)\/    *
 * Visual Computing Lab                                            /\/|      *
 * ISTI - Italian National Research Council                           |      *
 *                                                                    \      *
 * All rights reserved.                                                      *
 *                                                                           *
 * This program is free software; you can redistribute it and/or modify      *
 * it under the terms of the GNU General Public License as published by      *
 * the Free Software Foundation; either version 2 of the License, or         *
 * (at your option) any later version.                                       *
 *                                                                           *
 * This program is distributed in the hope that it will be useful,           *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of            *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
 * GNU General Public License (http://www.gnu.org/licenses/gpl.txt)          *
 * for more details.                                                         *
 *                                                                           *
 ****************************************************************************/

#ifndef MESHLAB_LINE_EDIT_WIDGET_H
#define MESHLAB_LINE_EDIT_WIDGET_H

#include "rich_parameter_widget.h"

class LineEditWidget : public RichParameterWidget
{
	Q_OBJECT

protected:
	QLineEdit* lned;
	QString    lastVal;

private slots:
	void changeChecker();
signals:
	void lineEditChanged();

public:
	LineEditWidget(QWidget* p, const RichParameter& rpar, const RichParameter& rdef);
	~LineEditWidget();
	void         addWidgetToGridLayout(QGridLayout* lay, const int r);
	virtual void collectWidgetValue()            = 0;
	virtual void resetWidgetValue()              = 0;
	virtual void setWidgetValue(const Value& nv) = 0;
};

#endif // MESHLAB_LINE_EDIT_WIDGET_H
