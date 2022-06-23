#include<iostream>
//declaration of tools
const int Pen{ 10 }; 
const int Marker{ 20 };
const int Eraser{ 30 };
const int Rectangle{ 40 };
int main(){
    int tool {Eraser};
    switch (tool){
    case Pen:
        std::cout << "Active tool is pen" << std::endl;
        break;
    case Marker:
        std::cout << "Active tool is Marker" << std::endl;
        break;
    case Eraser:
        std::cout << "Active tool is Eraser" << std::endl;
        break;
    case Rectangle:
        std::cout << "Active tool is Rectangle" << std::endl;
        break;
    default:
        std::cout << "Not getting a tool" << std::endl;
        break;
    }
}