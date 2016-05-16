#include "coloroption.h"
#include "coloroptionmodel.h"

#include <QGuiApplication>
#include <qqmlengine.h>
#include <qqmlcontext.h>
#include <qqml.h>
#include <QtQuick/qquickitem.h>
#include <QtQuick/qquickview.h>

int main(int argc, char ** argv)
{
    QGuiApplication app(argc, argv);

    ColorOptionModel model;
    model.addOption(ColorOption("red", "red"));
    model.addOption(ColorOption("blue", "blue"));
    model.addOption(ColorOption("yellow", "yellow"));

    QQuickView view;
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    QQmlContext *ctxt = view.rootContext();
    ctxt->setContextProperty("myModel", &model);

    view.setSource(QUrl("qrc:view.qml"));
    view.show();

    return app.exec();
}
