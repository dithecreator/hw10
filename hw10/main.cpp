//
//  main.cpp
//  hw10
//
//  Created by Дима on 25.09.23.
//

#include <iostream>
#include "myString.hpp"
using namespace std;
int main() {
    myString my("sasha");
    myString my1;
    my.print();
    
    my1.input();
    cout << "введённая вами строка: ";
    my1.print();
    my.MyStrcpy(my1); //результат работы mystrcpy
    my.print();
    
    myString my2("dimasashaoleg");
    my2.MyStrStr("dima"); //результат работы mystrstr
    
    myString my3("violetta");
    my3.MyChr('v'); //результат работы myChr
    
    int sizelen =  my3.MyStrLen();
    cout << "длина строки: " << sizelen << endl;
    my3.MyStrCat(my2); //результат работы mystrcat
    
    myString my4("olegasov");
    my4.MyDelChr('s');
    
    int result = my2.MyStrCmp(my4); // результат работы mystrcmp
    cout << result << endl;
    my.createdObjects();
    
    myString my5("seg");
    const char* myvalue = my5.getString();
    
    myString my6("srg");
    myString my7 = my6;
    cout << "copy constructor: ";
    my7.print();
}
