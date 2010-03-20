/**
 * \file SerialPlugin.h
 * \author Denis Martinez
 */

#ifndef SERIALPLUGIN_H
#define SERIALPLUGIN_H

#include "plugins/IDEPluginInterface.h"

class SerialPlugin : public QObject, public IDEPluginInterface
{
    Q_INTERFACES(IDEPluginInterface)

public:
    bool setup(IDEApplication *app);

    const QString &name();
};

#endif // SERIALPLUGIN_H
