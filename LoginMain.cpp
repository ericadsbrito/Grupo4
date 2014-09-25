#include <QtWidgets>
#include <dialog.h>

int main (int argc, char *argv[]) {

    QApplication app(argc, argv);

    Dialog form;

    form.show();

    return app.exec();
}
