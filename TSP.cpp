#include <iostream>
#include <cmath>
#include <vector>
class Position
{
public:
    double posX, posY;

    Position(double posX, double posY) : posX(posX), posY(posY) {}


};

class City
{
public:
    std::string name;
    Position position;

    City(std::string name, double posX, double posY) : name(name), position(posX, posY) {}

    static double distance(City city1, City city2)
    {
        double diffX = city2.position.posX - city1.position.posX;
        double diffY = city2.position.posY - city1.position.posY;
        return sqrt(diffX*diffX + diffY*diffY);
    }
};

void initDistMap(std::vector<City> cities)
{
}

int main()
{
}