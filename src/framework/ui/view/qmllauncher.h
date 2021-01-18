//=============================================================================
//  MuseScore
//  Music Composition & Notation
//
//  Copyright (C) 2020 MuseScore BVBA and others
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License version 2.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//=============================================================================
#ifndef MU_UI_QMLLAUNCHER_H
#define MU_UI_QMLLAUNCHER_H

#include <QObject>

#include "modularity/ioc.h"
#include "iinteractive.h"

namespace mu::ui {
class QmlLauncher : public QObject
{
    Q_OBJECT

    INJECT(ui, framework::IInteractive, interactive)

public:
    QmlLauncher(QObject* parent);

    Q_INVOKABLE bool open(const QString& uri);
    Q_INVOKABLE bool openUrl(const QString& url);
};
}

#endif // MU_UI_QMLLAUNCHER_H
