/*
 * ========================= actions_mem.cpp ==========================
 *                          -- tpr --
 *                                        创建 -- 2018.11.23
 *                                        修改 -- 2018.11.23
 * ----------------------------------------------------------
 *  资源管理:  Action
 * ----------------------------
 */
//-------------------- CPP --------------------//
#include <string>

//-------------------- Engine --------------------//
#include "Action.h"
#include "srcs_engine.h" //- 所有资源


using std::string;


//#include "debug.h" //- tmp

namespace esrc{ //------------------ namespace: esrc -------------------------//

/* ===========================================================
 *                     load_actions
 * -----------------------------------------------------------
 * -- 在游戏初始化阶段，被调用。
 * -- 统一加载并初始化 所有 Actions 资源
 */
void load_actions(){

    actions.clear();

    actions.insert( {"human_new",      Action{ "/human/human_new.P.png",             IntVec2{15, 30}, IntVec2{4, 1}, 4 } } );
    actions.insert( {"singleFootWalk", Action{ "/singleFoot/singleFootWalk_1.P.png", IntVec2{26, 29}, IntVec2{4, 2}, 8 } } );
    actions.insert( {"norman",         Action{ "/norman/norman.P.png",               IntVec2{24, 39}, IntVec2{6, 2}, 12 } } );
    actions.insert( {"bigMan",         Action{ "/bigMan/bigMan.P.png",               IntVec2{22, 40}, IntVec2{6, 2}, 12 } } );



    //---------------------------------//
    //        init all actions
    //---------------------------------//
    auto it = actions.begin();
    for( ; it!=actions.end(); it++ ){
        it->second.init();
        //it->second.debug();
    }
}



}//---------------------- namespace: esrc -------------------------//
