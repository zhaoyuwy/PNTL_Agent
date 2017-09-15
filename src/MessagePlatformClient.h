//
// Created by zy on 17-9-16.
//

#ifndef BOOSTTEST_MESSAGEPLATFORMCLIENT_H
#define BOOSTTEST_MESSAGEPLATFORMCLIENT_H



extern INT32 ReportDataToServer(ServerAntAgentCfg_C *pcAgentCfg, stringstream * pstrReportData,  string strUrl);

// 上报AgentIP至Server
extern INT32 ReportAgentIPToServer(ServerAntAgentCfg_C * pcAgentCfg);
#endif //BOOSTTEST_MESSAGEPLATFORMCLIENT_H
