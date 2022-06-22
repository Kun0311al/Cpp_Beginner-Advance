#include<iostream>
#include<iomanip> //std::setw(value),std::stefill('any sign') is include in this file
int main(){
//unordered data 
    std::cout<<std::endl;
    std::cout<<"Unordered Data"<<std::endl;
    std::cout<<"Kunal "<< "Parkar "<<"19"<<std::endl;
    std::cout<<"Avinash "<< "Rajak "<<"20"<<std::endl;
    std::cout<<"Ananya "<< "Shetty "<<"19"<<std::endl;
    std::cout<<"Ruchita "<< "Sabale "<<"21"<<std::endl;
    std::cout<<"Shraddha "<< "Singh "<<"20"<<std::endl;
    std::cout<<"Shrikant "<< "Sabbani "<<"21"<<std::endl;
//order data in default side
    std::cout<<std::endl;
    std::cout<<"ordered Data"<<std::endl;
    std::cout<<std::setw(10)<<"First Name "<<std::setw(10)<< "Last Name "<<std::setw(5)<<"Age"<<std::endl;
    std::cout<<std::setw(10)<<"Kunal "<<std::setw(10)<< "Parkar "<<std::setw(5)<<"19"<<std::endl;
    std::cout<<std::setw(10)<<"Avinash "<<std::setw(10)<< "Rajak "<<std::setw(5)<<"20"<<std::endl;
    std::cout<<std::setw(10)<<"Ananya "<<std::setw(10)<< "Shetty "<<std::setw(5)<<"19"<<std::endl;
    std::cout<<std::setw(10)<<"Ruchita "<<std::setw(10)<< "Sabale "<<std::setw(5)<<"21"<<std::endl;
    std::cout<<std::setw(10)<<"Shraddha "<<std::setw(10)<< "Singh "<<std::setw(5)<<"20"<<std::endl;
    std::cout<<std::setw(10)<<"Shrikant "<<std::setw(10)<< "Sabbani "<<std::setw(5)<<"21"<<std::endl;
//order data in default side in sapecific declaration
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
//ordered data in lieft side
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
    //in right and left justification the sing of the date is also go with the data at that side
    //by using internal justification the sign and the data goes seprete sign goes left and data goes right
    //sign (-,+)
//internal justification
    std::cout<<std::endl;
    std::cout<<"Internal Justification"<<std::endl;
    std::cout<<std::right;
    std::cout<<std::setw(15)<<-12.4<<std::endl;
    std::cout<<std::internal;
    std::cout<<std::setw(15)<<-12.4<<std::endl;
//fill the remaining part with the declared sign
    //setfill(-) this is use to fill the remaining gap bitwin the words
    std::cout<<std::endl;
    std::cout<<"ordered Data with set fill"<<std::endl;
    std::cout<<std::left;//right side is default
    std::cout<<std::setfill('-');
    std::cout<<std::setw(col_w)<<"First Name "<<std::setw(col_w)<< "Last Name "<<std::setw(col_w2)<<"Age"<<std::endl;
    std::cout<<std::setw(col_w)<<"Kunal "<<std::setw(col_w)<< "Parkar "<<std::setw(col_w2)<<"19"<<std::endl;
    std::cout<<std::setw(col_w)<<"Avinash "<<std::setw(col_w)<< "Rajak "<<std::setw(col_w2)<<"20"<<std::endl;
    std::cout<<std::setw(col_w)<<"Ananya "<<std::setw(col_w)<< "Shetty "<<std::setw(col_w2)<<"19"<<std::endl;
    std::cout<<std::setw(col_w)<<"Ruchita "<<std::setw(col_w)<< "Sabale "<<std::setw(col_w2)<<"21"<<std::endl;
    std::cout<<std::setw(col_w)<<"Shraddha "<<std::setw(col_w)<< "Singh "<<std::setw(col_w2)<<"20"<<std::endl;
    std::cout<<std::setw(col_w)<<"Shrikant "<<std::setw(col_w)<< "Sabbani "<<std::setw(col_w2)<<"21"<<std::endl;
}