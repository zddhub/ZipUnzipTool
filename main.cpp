#include <QCoreApplication>

#include "zipunzip.h"

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ZipUnzip tool;
    tool.unzip("/Users/zdd/Projects/ZipUnzipTool/zdd.zip", "/Users/zdd/Projects/ZipUnzipTool/wx");
    tool.zip("/Users/zdd/Projects/ZipUnzipTool/sqhy", "/Users/zdd/Projects/ZipUnzipTool/sqhy.zip");
    cout << " -- done --"<<endl;
    return a.exec();
}
