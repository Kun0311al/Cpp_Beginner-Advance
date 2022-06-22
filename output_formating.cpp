#include<iostream>
#include<iomanip> //std::setw(value) is include in this file
int main(){
    
    std::cout<<std::endl;
    std::cout<<"Unordered Data"<<std::endl;
    std::cout<<"Kunal "<< "Parkar "<<"19"<<std::endl;
    std::cout<<"Avinash "<< "Rajak "<<"20"<<std::endl;
    std::cout<<"Ananya "<< "Shetty "<<"19"<<std::endl;
    std::cout<<"Ruchita "<< "Sabale "<<"21"<<std::endl;
    std::cout<<"Shraddha "<< "Singh "<<"20"<<std::endl;
    std::cout<<"Shrikant "<< "Sabbani "<<"21"<<std::endl;

    std::cout<<std::endl;
    std::cout<<"ordered Data"<<std::endl;
    std::cout<<std::setw(10)<<"First Name "<<std::setw(10)<< "Last Name "<<std::setw(5)<<"Age"<<std::endl;
    std::cout<<std::setw(10)<<"Kunal "<<std::setw(10)<< "Parkar "<<std::setw(5)<<"19"<<std::endl;
    std::cout<<std::setw(10)<<"Avinash "<<std::setw(10)<< "Rajak "<<std::setw(5)<<"20"<<std::endl;
    std::cout<<std::setw(10)<<"Ananya "<<std::setw(10)<< "Shetty "<<std::setw(5)<<"19"<<std::endl;
    std::cout<<std::setw(10)<<"Ruchita "<<std::setw(10)<< "Sabale "<<std::setw(5)<<"21"<<std::endl;
    std::cout<<std::setw(10)<<"Shraddha "<<std::setw(10)<< "Singh "<<std::setw(5)<<"20"<<std::endl;
    std::cout<<std::setw(10)<<"Shrikant "<<std::setw(10)<< "Sabbani "<<std::setw(5)<<"21"<<std::endl;

    std::cout<<std::endl;
    std::cout<<"ordered Data with width declaration"<<std::endl;
    int col_w = 13;//declaring the width 
    int col_w2 = 5;
    std::cout<<std::setw(col_w)<<"First Name "<<std::setw(col_w)<< "Last Name "<<std::setw(col_w2)<<"Age"<<std::endl;
    std::cout<<std::setw(col_w)<<"Kunal "<<std::setw(col_w)<< "Parkar "<<std::setw(col_w2)<<"19"<<std::endl;
    std::cout<<std::setw(col_w)<<"Avinash "<<std::setw(col_w)<< "Rajak "<<std::setw(col_w2)<<"20"<<std::endl;
    std::cout<<std::setw(col_w)<<"Ananya "<<std::setw(col_w)<< "Shetty "<<std::setw(col_w2)<<"19"<<std::endl;
    std::cout<<std::setw(col_w)<<"Ruchita "<<std::setw(col_w)<< "Sabale "<<std::setw(col_w2)<<"21"<<std::endl;
    std::cout<<std::setw(col_w)<<"Shraddha "<<std::setw(col_w)<< "Singh "<<std::setw(col_w2)<<"20"<<std::endl;
    std::cout<<std::setw(col_w)<<"Shrikant "<<std::setw(col_w)<< "Sabbani "<<std::setw(col_w2)<<"21"<<std::endl;

    std::cout<<std::endl;
    std::cout<<"ordered Data in left side"<<std::endl;
    std::cout<<std::left;//right side is default
    std::cout<<std::setw(col_w)<<"First Name "<<std::setw(col_w)<< "Last Name "<<std::setw(col_w2)<<"Age"<<std::endl;
    std::cout<<std::setw(col_w)<<"Kunal "<<std::setw(col_w)<< "Parkar "<<std::setw(col_w2)<<"19"<<std::endl;
    std::cout<<std::setw(col_w)<<"Avinash "<<std::setw(col_w)<< "Rajak "<<std::setw(col_w2)<<"20"<<std::endl;
    std::cout<<std::setw(col_w)<<"Ananya "<<std::setw(col_w)<< "Shetty "<<std::setw(col_w2)<<"19"<<std::endl;
    std::cout<<std::setw(col_w)<<"Ruchita "<<std::setw(col_w)<< "Sabale "<<std::setw(col_w2)<<"21"<<std::endl;
    std::cout<<std::setw(col_w)<<"Shraddha "<<std::setw(col_w)<< "Singh "<<std::setw(col_w2)<<"20"<<std::endl;
    std::cout<<std::setw(col_w)<<"Shrikant "<<std::setw(col_w)<< "Sabbani "<<std::setw(col_w2)<<"21"<<std::endl;
}