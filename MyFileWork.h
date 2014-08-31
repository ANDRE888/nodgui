#ifndef MYFILEWORK_H
#define MYFILEWORK_H

#endif // MYFILEWORK_H

#include <iostream>        //cout
#include <stdio.h>         //printf
#include <string.h>         //strlen

#include <fstream>
#include <iostream>

using namespace std;

int read_data_from_a_file()
{

    return 0;
}

int write_data_to_log(int type_write, string filename, string* data_to_write)
{
    //type_write 1-дозапись;2-Удаление содержимого и запись с начала
    ofstream ofs;

    switch(type_write)
    {
    case 1://дозапись в файл
        ofs.open(filename,ios_base::app);
        ofs << *data_to_write << endl;
        break;
    case 2://перезапись файла
        ofs.open(filename,ios_base::out);
        ofs << *data_to_write << endl;
        break;
    default://Неверный тип записи в файл
        cout<< "Error type_write"<<endl;
        break;
    }

    ofs.close();
    return 0;
}
