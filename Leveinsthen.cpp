#include<iostream>
#include<algorithm>
using namespace std;

uint leveinsthein(const string& string1 ,const string& string2){

    uint** arr=new uint*[string1.length()];
    for(uint i=0;i<=string1.length();i++){
        arr[i]=new uint[string2.length()];
    }

    for(uint i=0;i<=string2.length();i++){
        arr[0][i]=i;
    }
        

    for(uint i=1;i<=string1.length();i++){
        arr[i][0]= i;
    }

    for(int i=1;i<=string1.length();i++){
        for(int j=1;j<=string2.length();j++){
            if(string1[i]==string2[j]){
                arr[i][j]=arr[i-1][j-1];
            }else{
                arr[i][j]=min(arr[i][j-1], min(arr[i-1][j-1],arr[i-1][j])) +1;
            }
        }
    }
    
    const uint distance_of_leveinsthein = arr[string1.length()][string2.length()] ;


    return distance_of_leveinsthein;
}
int main(){
    string string1 = "chien";
    string string2 = "niche";
    cout << "L= " << leveinsthein(string1 , string2) << endl;
    return 0;
}