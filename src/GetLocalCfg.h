//
// Created by zy on 17-9-15.
//

#ifndef BOOSTTEST_GETLOCALCFG_H
#define BOOSTTEST_GETLOCALCFG_H


#include "FlowManager.h"
#include "ServerAntAgentCfg.h"

// 获取Agent本地配置信息
extern INT32 GetLocalCfg(ServerAntAgentCfg_C * pcCfg);

extern INT32 GetLocalAgentConfig(FlowManager_C * pcFlowManager);

extern UINT32 GetProbePeriod(FlowManager_C * pcFlowManager);


#endif //BOOSTTEST_GETLOCALCFG_H
