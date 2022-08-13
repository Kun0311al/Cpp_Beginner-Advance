/*this algorithm is basically use to arrange the given array in the assending and the decending order
as per the requirement it takes the its takes the n-1 comparisons.*/
#include<iostream>
using namespace std;

int main ()
{
   int i, j,temp,pass=0,size;
   int a[50]; 
   cout<<"enter the size of array: ";
   cin>>size;
   
   cout<<"enter the elements of the array: "<<endl;
   for(int b=0;b<size;b++){
    cin>>a[b];
   }
   cout <<"Input list ...\n";
   for(i = 0; i<size; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<size; i++) {
   for(j = i+1; j<size; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<size; i++) {
   cout <<a[i]<<"\t";
}
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;
return 0;
}