#include "Laptop.h"
#include <iostream>
using namespace std;

int main() 
{
    CPU cpu("Intel", "i7-12700H");
    SSD ssd("Samsung", 512);
    VideoCard videoCard("NVIDIA", 6);
    RAM ram("Kingston", 16);
    Laptop laptop("Gaming Laptop", 1500.0, "Black", cpu, ssd, videoCard, ram);
    laptop.displayInfo();
    cout << "Total Laptops: " << Laptop::getLaptopCount() << endl;

    return 0;
}