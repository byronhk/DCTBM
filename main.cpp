#include <iostream>
#include <stdio.h>
#include <dlfcn.h>
#include "MultiCardCPP.h"


MultiCard MultiCard1;

TAllSysStatusData TAllSysStatusDataTemp;

int main(int, char**) {

    int iRes = 1;

    iRes = MultiCard1.MC_Open(1,"192.168.0.200",60001,"192.168.0.1",60001);

    if(iRes)
    {  
        std::cout << iRes;
    }
    else
    {
        std::cout << iRes << "success";
    }

    MultiCard1.MC_AxisOn(1);
    MultiCard1.MC_PrfTrap(1);

    TTrapPrm TrapPrm;

    TrapPrm.acc = 2;
    TrapPrm.dec = 2;    
    TrapPrm.velStart = 0;
    TrapPrm.smoothTime = 0;

    MultiCard1.MC_SetTrapPrm(1,&TrapPrm);
    MultiCard1.MC_SetVel(1,10);
    MultiCard1.MC_SetPos(1,10000);
    MultiCard1.MC_Update(0x0001);
    
 

}
