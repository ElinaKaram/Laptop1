#pragma once
#ifndef LAPTOP_H
#define LAPTOP_H
#include <string>
using namespace std;

class CPU 
{
private:

    string brand;
    string* model;

public:

    CPU(const string& brand, const string& model);
    ~CPU();

    string getBrand() const;
    string getModel() const;
};

class SSD
{
private:
    string brand;
    int* capacity;

public:

    SSD(const string& brand, int capacity);
    ~SSD();

    string getBrand() const;
    int getCapacity() const;
};

class VideoCard 
{
private:

    string brand;
    int* memory;

public:

    VideoCard(const string& brand, int memory);
    ~VideoCard();

    string getBrand() const;
    int getMemory() const;
};

class RAM
{
private:

    string brand;
    int* size;

public:

    RAM(const string& brand, int size);
    ~RAM();

    string getBrand() const;
    int getSize() const;
};

class Laptop
{
private:

    string name;
    double price;
    string color;

    CPU cpu;
    SSD ssd;
    VideoCard videoCard;
    RAM ram;

    static int laptopCount; 

public:

    Laptop(const string& name, double price, const string& color,const CPU& cpu, const SSD& ssd, const VideoCard& videoCard, const RAM& ram);
    ~Laptop();
    static int getLaptopCount();
    void displayInfo() const;
};
#endif
