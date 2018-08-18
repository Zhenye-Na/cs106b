#include <iostream>
#include "console.h"
#include "gwindow.h" // for GWindow
#include "simpio.h"  // for getLine
#include "vector.h"  // for Vector
using namespace std;

int main() {
    cout << "This sample project helps you check and make sure that" << endl;
    cout << "you have successfully install Qt Creator, C++, and Java," << endl;
    cout << "and that the Stanford C++ libraries work on your machine." << endl;
    cout << endl;
    cout << "If this project is working properly on your computer," << endl;
    cout << "You should see a \"Sample Project\" window with a" << endl;
    cout << "smiley face pop up when you build and run it." << endl;
    cout << endl;
    cout << "If it doesn't run, check that you have installed" << endl;
    cout << "Java JDK properly, as well as C++ and Qt Creator." << endl;
    cout << endl;

    GWindow window(300, 200);
    window.setColor("White");
    window.clear();
    window.setWindowTitle("Sample Project");
    window.setColor("Black");
    window.drawOval( 10, 10, 180, 180);   // head
    window.fillOval( 50, 50,  20,  20);   // eye
    window.fillOval(130, 50,  20,  20);   // eye
    window.fillOval( 95, 95,  10,  10);   // nose

    // draw the mouth using a Vector to make sure the Stanford collections work
    Vector<GPoint> mouth;
    mouth.add(GPoint( 40, 120));
    mouth.add(GPoint( 70, 150));
    mouth.add(GPoint(130, 150));
    mouth.add(GPoint(160, 120));
    for (int i = 0; i < mouth.size() - 1; i++) {
        GPoint p1 = mouth.get(i);
        GPoint p2 = mouth.get(i + 1);
        window.drawLine(p1, p2);   // mouth
    }

    window.setVisible(true);

    window.requestFocus();
    pause(3000);

    getLine("Press [Enter] to close the window... ");
    window.requestFocus();
    window.close();
    exitGraphics();

    cout << endl << "Program completed." << endl;

    return 0;
}
