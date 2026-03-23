#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v1;
    vector<int> v2(3,5);
    cout<<"v2: ";
    for (int x:v2){
        cout<<x<<" ";
    }  
    cout<<endl;
    vector<int> v3;
    v3={1,2,3};
    cout<<"v3: ";
    for(int x:v3){
        cout<<x<<" ";
    }
    cout<<endl;
    v1.push_back(10);//add element at the end of vector
    v1.insert(v1.begin(),20);//add element at the beginning of vector
    v1.insert(v1.begin()+1,30);//add element at specific position
    cout<<"v1: ";
    for(int x:v1){
        cout<<x<<" ";
    }
    cout<<endl; 
    cout<<"Element at index 2: "<<v1[2]<<endl;
    cout<<"Element at index 1: "<<v1.at(1)<<endl;
    cout<<"Element at index that is not found in the vector: "<<v1.at(5)<<endl;//throws an exception 
    cout<<"Size of v1: "<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;
    cout<<endl; 
    return 0;
}