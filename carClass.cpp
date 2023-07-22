#include <iostream>
#include "carClass.h"

Car::Car(int year , std::string model , std::string make , std::string color){
    this->year = year;
    this->model = model;
    this -> make = make;
    this -> color = color;
}

void Car::setYear(int someYear){
    year = someYear;
}
void Car::setModel (std::string someModel){
    model = someModel;
}
void Car::setMake(std::string someMake){
    make = someMake;

}
void Car::setColor(std::string someColor){
    color = someColor;

}
int Car::getYear(){
    return year;
}
std::string Car::getModel(){
    return model;
}
std::string Car::getMake(){
    return make;
}
std::string Car::getColor(){
    return color;
}
void Car::printResults(){
    std::cout << "Year : " << year <<  " Make :  " << make << " Model : " << model << " Color : " << color << std::endl;
}