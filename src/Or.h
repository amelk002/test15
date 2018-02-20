#ifndef __OR_H__
#define __OR_H__
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <cmath>
#include <sstream>
#include <stdio.h>
#include <unistd.h>
#include <cstring>
#include <sys/wait.h>
#include <algorithm>
#include "Base.h"
#include "CMD.h"

using namespace std;

class Or: public Base
{

    private:
        Base * lhs;
        Base * rhs;
    public:
        Or();
        Or(Base* lhs, Command* rhs);
        Or(Base* lhs, Base* rhs);
        int execute();
};
#endif
