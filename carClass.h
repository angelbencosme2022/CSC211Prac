#include <iostream>
#ifndef CARCLASS_H
#define CARCLASS_H
    class Car{
        private:
            int year;
            std::string model;
            std::string make;
            std::string color;
        
        public:
            Car(int year , std::string model , std::string make , std::string color);
            void setYear(int year);
            void setModel (std::string model);
            void setMake(std::string make);
            void setColor(std::string color);
            int getYear();
            std::string getModel();
            std::string getMake();
            std::string getColor();
            void printResults();
    };
#endif