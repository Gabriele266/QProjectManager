#ifndef PROJECTINFOWIN_H
#define PROJECTINFOWIN_H

#include <QDialog>

namespace Ui {
class ProjectInfoWin;
}

class ProjectInfoWin : public QDialog
{
    Q_OBJECT

public:
    explicit ProjectInfoWin(QWidget *parent = nullptr);
    ~ProjectInfoWin();

private:
    Ui::ProjectInfoWin *ui;
};

#endif // PROJECTINFOWIN_H
