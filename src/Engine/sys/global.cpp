/*
 * ======================== global.cpp ==========================
 *                          -- tpr --
 *                                        CREATE -- 2019.10.03
 *                                        MODIFY -- 
 * ----------------------------------------------------------
 */
#include "global.h"


int         fd_cwd {};   //-- 项目 主目录 fd

std::string path_cwd {}; //-- exe 所在目录的 path
                
std::string path_dataBase {};  //-- .../build/publish/dataBase/
std::string path_shaders {}; //-- .../build/publish/shaders/
std::string path_textures {}; //-- .../build/publish/textures/
std::string path_jsons    {}; //-- .../build/publish/jsons/
std::string path_tprLog   {}; //-- .../build/publish/tprLog/

std::string path_animFrameSets {}; //-- .../build/publish/textures/animFrameSets
std::string path_colliEntSet   {}; //-- .../build/publish/textures/colliEntSet
std::string path_mapSurfaceRandSet {}; //-- .../build/publish/textures/mapSurfaceRandSet


int current_OS {};

