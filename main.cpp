//
//  main.cpp
//  Pointer
//
//  Created by ry耷拉拉星球 on 15/12/2.
//  Copyright (c) 2015年 ry耷拉拉星球. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int a,*p;
    a=100;
    p=&a;
    printf("a=%x &a=%x &p=%x p=%x *p=%x\n",a,&a,&p,p,*p);
    return 0;
}
