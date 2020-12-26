#include <iostream>

using namespace std;
//#define TEST

int main()
{
    //如果标识符被#define定义过，执行程序段1，否则执行程序段2
#ifdef TEST
    {
        cout << "test defined" << endl;
    }
#else
    {
        cout << "test no defined" << endl;
    }
#endif
//如果标识符没有被#define定义过，执行程序段1，否则执行程序段2
#ifndef 标识符
    程序段1
#else
    程序段2
#endif
//如果表达式为true，执行程序段1，否则执行程序段2
#if 表达式
    程序段1
#else
    程序段2
#endif
}
