/* Program 6 by Konrad Wiley (rwile725)
  this is an early C++/Qt Gui port of a
  calculator Konrad spent an entire summer writing
  in VB.NET. When it is finished, it will be a
  comprehensive calculator companion for Dan
  Montgomery's "Galaxy Legion"
*/

#include <QtGui/QApplication>
#include "attack_calculator.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    attack_calculator w;
    w.show();
    
    return a.exec();
}
