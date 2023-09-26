//
//  myString.cpp
//  hw10
//
//  Created by Дима on 25.09.23.
//

#include <iostream>
#include <cstring>
#include "myString.hpp"
using namespace std;
int myString:: counter = 0;

myString:: myString(){
    length = 80;
    str = new char[length + 1];
    counter++;
   
}

myString:: myString(char* array){
    length = strlen(array);
   str = new char[length];
    strcpy(str, array);
    counter++;
}


 void myString:: input(){
     char array[100];
    cout << "введите строку: ";
    cin.getline(array, sizeof(array));
      strcpy(str, array);
 
}




void myString :: MyStrcpy(myString& obj){
    str = new char[strlen(obj.str) + 1];
    strcpy(this -> str, obj.str);

}
void myString:: print() const{
    cout << str << endl;
}


bool myString :: MyStrStr(const char * str1){
    const char* result = strstr(this -> str, str1);
        if (result != nullptr) {
            cout << "подстрока найдена: " << result << endl;
            return true;
        }
        else{
            cout << "подстрока не найдена" << endl;
        }
    
    return false;
}


int myString :: MyChr(char c){
    for(int i = 0; i < length; i++){
        if(str[i] == c){
            cout << "искомый символ найден" << endl;
            break;
        }
        else{
            cout << "искомый символ не найден" << endl;
            break;
        }
    }
  
    return 0;
}



int myString:: MyStrLen(){
    int len = strlen(str);
    return len;
}

void myString :: MyStrCat(myString& b){
    int size = strlen(str) + strlen(b.str);
    char* newStr = new char[size];
    strcpy(newStr, str);
    strcat(newStr, b.str);
    delete[] str;
    str = newStr;
    cout << "обьединение строк: " << str << endl;
}


void myString:: MyDelChr(char c){
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (str[i] == c) {
            count++;
        }
    }
    
    int size = length - count;
    char* newStr = new char[size + 1];
    int j = 0;
    
    for (int i = 0; i < length; i++) {
        if (str[i] != c) {
            newStr[j] = str[i];
            j++;
        }
    }

    delete[] str;
    str = newStr;

    cout << str << endl;
}



int myString:: MyStrCmp(myString &b){
    int size1 = strlen(str);
    int size2 = strlen(b.str);
    int result = 0;
    if(size1 > size2){
        result = 1;
    }
     if(size1 < size2){
        result = -1;
    }
     if(size1 == size2){
        result = 0;
    }
    return result;
}
 void myString:: createdObjects(){
    cout << "количество созданных обьектов: " << counter << endl;
}

myString :: ~myString(){
    delete[] str;
}
