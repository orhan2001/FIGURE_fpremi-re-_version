#include "Triangle.h"
#include <iostream>
#include "Figure.h"
#include "RTriangle.h"
#include "ITriangle.h"
#include "ETriangle.h"
#include "Ellipse.h"
#include "Circle.h"
#include "Quand.h"
#include "Parallogram.h"
#include "Rectangle.h"
#include "Square.h"




using namespace std;


int main() {
    {
        Figure* t = new Triangle(1, 1, 1);
        cout << "FIGURA:  " << t->getName() << endl;
        cout << "PERIMETR: " << t->CalculateP() << endl;
        cout << "SQUARE: " << t->CalculateS() << endl;
    }


    {
        cout << endl;
        Figure* t = new RTriangle(5, 6);
        cout << "FIGURA:  " << t->getName() << endl;
        cout << "PERIMETR: " << t->CalculateP() << endl;
        cout << "SQUARE: " << t->CalculateS() << endl;
    }


    {
        cout << endl;
        Figure* t = new ITriangle(5, 6);
        cout << "FIGURA:  " << t->getName() << endl;
        cout << "PERIMETR: " << t->CalculateP() << endl;
        cout << "SQUARE: " << t->CalculateS() << endl;
    }
    {
        cout << endl;
        Figure* t = new ETriangle(4);
        cout << "FIGURA: " << t->getName() << endl;
        cout << "PERIMETR: " << t->CalculateP() << endl;
        cout << "SQUARE: " << t->CalculateS() << endl;
    }
    {
        cout << endl;
        Figure* E = new Ellipse(7, 3);
        cout << "FIGURA: " << E->getName() << endl;
        cout << "PERIMETR: " << E->CalculateP() << endl;
        cout << "SQUARE: " << E->CalculateS() << endl;
    }
    {
        cout << endl;
        Figure* E = new Circle(4);
        cout << "FIGURA: " << E->getName() << endl;
        cout << "PERIMETR: " << E->CalculateP() << endl;
        cout << "SQUARE: " << E->CalculateS() << endl;
    }
    {
        cout << endl;
        Figure* q = new Quand(1, 3, 4, 3);
        cout << "Figura : " << q->getName() << endl;
        cout << "PERIMETR : " << q->CalculateP() << endl;
        cout << "SQUARE : " << q->CalculateS() << endl;
    }
    {
        cout << endl;
        Figure* q = new Paralleogram(4, 3);
        cout << "Figura : " << q->getName() << endl;
        cout << "PERIMETR : " << q->CalculateP() << endl;
        cout << "SQUARE : " << q->CalculateS() << endl;
    }
    {

        cout << endl;
        Figure* q = new Rectangle(3, 2);
        cout << "Figura : " << q->getName() << endl;
        cout << "PERIMETR : " << q->CalculateP() << endl;
        cout << "SQUARE : " << q->CalculateS() << endl;

    }
    {

        cout << endl;
        Figure* q = new Square(3);
        cout << "Figura : " << q->getName() << endl;
        cout << "PERIMETR : " << q->CalculateP() << endl;
        cout << "SQUARE : " << q->CalculateS() << endl;

    }

}