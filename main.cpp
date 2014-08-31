#include <iostream>        //cout
#include <stdio.h>         //printf
#include <string.h>         //strlen
#include <string>          //string
#include <sys/socket.h>    //socket
#include <arpa/inet.h>     //inet_addr
#include <netdb.h>        //hostent
#include <algorithm>
#include <unistd.h>

#include <stdlib.h>
#include <vector>
#include <fstream>
#include <iostream>
#include <thread>
#include <stdio.h>
#include <stdlib.h>
#include <string>


#include <vector>
#include <fstream>

#include "mainwindow.h"
#include <QApplication>

using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
