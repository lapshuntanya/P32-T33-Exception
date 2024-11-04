#include "MinutesTariff.h"

MinutesTariff::MinutesTariff()
{
    price = 1.0f;
}

MinutesTariff::MinutesTariff(std::string name, float price):Tariff(name)
{
   // this->price = price;
    setPrice(price);
}

void MinutesTariff::setPrice(float price)
{
    if (price <= 0) throw new PriceException("Price is a negative number!", price);
    this->price = price;
}

float MinutesTariff::getPrice() const{    return price;}

float MinutesTariff::calcCost(int seconds) const
{
    if (seconds <= 0) throw new SecondsException("Seconds <= 0", seconds);

    return (seconds /60)*price;
}

void MinutesTariff::show() const
{
    cout << "Minutes Tariff\n";
    Tariff::show();
    cout << "Price for minutes: " << price << endl;
}
