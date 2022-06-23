#include<iostream>
#include<cmath>/*std::floor(),std::ceil(),std::abs(),std::exp(),std::pow(x,y),
                std::log(),std::log10(),std::sqtr(),std::round(),*/
int main(){
    double weight { 51.30 };
    //floor is round the no by neglating no after point
    std::cout << "Weight rounded to floor is : " << std::floor(weight) << std::endl;
    //ceil is round the no after no and give round value i.e. next no.
    std::cout << "Weight rounded to ceil is : " << std::ceil(weight) << std::endl;
    //abs its neglate sign of no, and give u absolute no.
    double savings {-5000 };
    std::cout << "Abs of weight is : " << std::abs(weight) << std::endl;
    std::cout << "Abs of savings is : " << std::abs(savings) << std::endl;
    //exp : f(x) = e ^ x , where e = 2.71828 . Test the result here against a calculator exp(x)=e^x
    double exponential = std::exp(10);
    std::cout << "The exponential of 10 is : " << exponential << std::endl;
    //power is use to show power of no. as per show on head
    std::cout << "2^5 is : " << std::pow(2,5) << std::endl;
    std::cout << "3^3 is : " << std::pow(3,3) << std::endl;
    // std::log(x) is use to take a loh of x 
    std::cout << "Log ; to get 54.59, you would elevate e to the power of : "
             << std::log(54.59) << std::endl;
    //std::log10(x) that means log of x with base 10
    std::cout << "To get 10000, you'd need to elevate 10 to the power of : "
                 << std::log10(1000) << std::endl;
    //std::sqrt(x) is use to taking the square root of the x
    std::cout<<"Square root of 9: "<<std::sqrt(9)<<std::endl;
    //std::round(x.y) is use to round up the x in the proper manner
    std::cout<<"round up 3.3: "<<std::round(3.3)<<std::endl;
    std::cout<<"round up 4.8: "<<std::round(4.8)<<std::endl;
    return 0;
}