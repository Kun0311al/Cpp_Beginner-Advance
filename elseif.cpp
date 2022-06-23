#include <iostream>
//declaration of tools
const int Pen{ 10 }; 
const int Marker{ 20 };
const int Eraser{ 30 };
const int Rectangle{ 40 };
int main(){
    int tool {Eraser};

    if (tool == Pen) {
        std::cout << "Active tool is pen" << std::endl;
        //Do the actual painting
    }
    else if (tool == Marker) {
        std::cout << "Active tool is Marker" << std::endl;
    }
    else if (tool == Eraser) {
        std::cout << "Active tool is Eraser" << std::endl;
    }
    else if (tool == Rectangle) {
        std::cout << "Active tool is Rectangle" << std::endl;
    }
    return 0;
}