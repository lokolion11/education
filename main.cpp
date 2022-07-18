#include <QTextStream>
#include <QFileInfo>
#include <QDir>
int main() {

  QTextStream out{stdout};


  QDir dir{"/home/nahem"};
  QFileInfoList list = dir.entryInfoList();
  for (QFileInfo finfo: list) {
      QString name = finfo.fileName();
  }


  for (int i = 0; i < list.size(); ++i) {

    QFileInfo fileInfo = list.at(i);
    QString str = fileInfo.fileName();
    str.append(QString());
    out << str << endl;
  }

  return 0;
}
