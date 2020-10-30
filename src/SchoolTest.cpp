#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include "Figure.h"
#include "Circle.h"
#include "Ellipse.h"
#include <vector>
#include <memory>

using namespace std;

bool comp(unique_ptr<Figure> &c1, unique_ptr<Figure> &c2)
{
    return c1->GetArea() < c2->GetArea();
}

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    try
    {
        int size_v = 10;
        double allCircle = 0.0;
        double allEllipse = 0.0;
        vector<unique_ptr<Figure>> figures(size_v);
        //Заполняю вектор объектами в случайном порядке со случайными значениями
        for (int i = 0; i < size_v; i++)
        {
            if (rand() % 2 == 0)
            {
                figures[i] = make_unique<Circle>(Circle(static_cast<double>(rand() % 100)));
            }
            else
            {
                figures[i] = make_unique<Ellipse>(Ellipse(static_cast<double>(rand() % 100), static_cast<double>(rand() % 100)));
            }
        }
        //Сортирую вектор
        sort(figures.begin(), figures.end(), comp);
        //Печатаю отсортированный вектор
        for (int i = 0; i < size_v; i++)
        {
          cout << figures[i]->GetArea() << endl;
        }
        //Просчитываю общую площадь окружностей и эллипсов
        for (int i = 0; i < size_v; i++)
        {
            if (figures[i]->GetType() == 1)
            {
                allCircle += figures[i]->GetArea();
            }
            
            if (figures[i]->GetType() == 2)
            {
                allEllipse += figures[i]->GetArea();
            }
        }
        //Печатаю результаты
        cout << "Общая площадь окружностей = " << allCircle << endl;
        cout << "Общая площадь эллипсов = " << allEllipse << endl;
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }
    return 0;
}