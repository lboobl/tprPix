/*
 * ========================= SpeedLevel.cpp ==========================
 *                          -- tpr --
 *                                        CREATE -- 2019.10.03
 *                                        MODIFY --
 * ----------------------------------------------------------
 */
#include "SpeedLevel.h"

//-- 60HZ 时，一帧的 fpos 速度
const std::vector<double> speedTable{
    0.0,       //- LV_0 //- 无速度
    0.3*8.0,   //- LV_1
    0.6*8.0,   //- LV_2
    0.9*8.0,   //- LV_3
    1.2*8.0,   //- LV_4
    1.5*8.0,   //- LV_5
    1.8*8.0,   //- LV_6
    2.1*8.0,   //- LV_7
    2.4*8.0,   //- LV_8
    2.7*8.0,   //- LV_9
    3.0*8.0,   //- LV_10
    3.3*8.0,   //- LV_11
    3.6*8.0,   //- LV_12
    4.0*8.0,   //- LV_13
    4.5*8.0,   //- LV_14
    5.0*8.0,   //- LV_15
    6.0*8.0,   //- LV_16
    7.0*8.0    //- LV_17 : crawl 的最高速度，不能超过 1帧1mapent
               //  值7.5 会在 ubuntu 中出问题。暂改为 7.0 
};


