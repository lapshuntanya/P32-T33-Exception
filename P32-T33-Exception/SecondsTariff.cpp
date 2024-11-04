#include "SecondsTariff.h"
 

SecondsTariff::SecondsTariff()
{
    price = 1.0f;
}

SecondsTariff::SecondsTariff(std::string name, float price) :Tariff(name)
{
   // this->price = price;
    setPrice(price);
}

void SecondsTariff::setPrice(float price)
{
    if (price <= 0) throw new PriceException(getName() + ". Price is a negative number!", price);

    this->price = price;
}

float SecondsTariff::getPrice() const{   return price;}

float SecondsTariff::calcCost(int seconds) const
{
    if (seconds <= 0) throw new SecondsException(getName() + ". Seconds <= 0", seconds);

    return price * seconds;
}

void SecondsTariff::show() const
{
    cout << "Seconds Tariff\n";
    Tariff::show();
    cout << "Price for seconds: " << price << endl;
}
