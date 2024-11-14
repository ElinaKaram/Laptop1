#include "Laptop.h"
#include <iostream>
using namespace std;

int Laptop::laptopCount = 0;

CPU::CPU(const string& brand, const string& model) : brand(brand)
{
    this->model = new string(model);
}

CPU::~CPU()
{
    delete model;
}

string CPU::getBrand() const { return brand; }
string CPU::getModel() const { return *model; }

SSD::SSD(const string& brand, int capacity) : brand(brand)
{
    this->capacity = new int(capacity);
}

SSD::~SSD()
{
    delete capacity;
}

string SSD::getBrand() const { return brand; }
int SSD::getCapacity() const { return *capacity; }

VideoCard::VideoCard(const string& brand, int memory) : brand(brand)
{
    this->memory = new int(memory);
}

VideoCard::~VideoCard() 
{
    delete memory;
}

string VideoCard::getBrand() const { return brand; }
int VideoCard::getMemory() const { return *memory; }

RAM::RAM(const string& brand, int size) : brand(brand)
{
    this->size = new int(size);
}

RAM::~RAM()
{
    delete size;
}

string RAM::getBrand() const { return brand; }
int RAM::getSize() const { return *size; }

Laptop::Laptop(const string& name, double price, const string& color,
const CPU& cpu, const SSD& ssd, const VideoCard& videoCard, const RAM& ram)
: name(name), price(price), color(color), cpu(cpu), ssd(ssd), videoCard(videoCard), ram(ram)
{
    laptopCount++;
}

Laptop::~Laptop()
{
    laptopCount--;
}

int Laptop::getLaptopCount()
{
    return laptopCount;
}

void Laptop::displayInfo() const 
{
    cout << "Laptop Name: " << name << endl;
    cout << "Price: $" << price << endl;
    cout << "Color: " << color << endl;
    cout << "CPU: " << cpu.getBrand() << " " << cpu.getModel() << endl;
    cout << "SSD: " << ssd.getBrand() << ", Capacity: " << ssd.getCapacity() << "GB" << endl;
    cout << "Video Card: " << videoCard.getBrand() << ", Memory: " << videoCard.getMemory() << "GB" << endl;
    cout << "RAM: " << ram.getBrand() << ", Size: " << ram.getSize() << "GB" << endl;
}