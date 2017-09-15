cmake_minimum_required(VERSION 3.8)
project(boostTest)

set(CMAKE_CXX_STANDARD  "${CMAKE_CXX_STANDARD} -std=c++11 -pthread" )

set(SOURCE_FILES src/AgentCommon.h src/AgentJsonAPI.cpp src/AgentJsonAPI.h src/DetectWorker.cpp src/DetectWorker.h src/FileNotifier.cpp src/FileNotifier.h src/FlowManager.cpp src/FlowManager.h src/GetLocalCfg.cpp src/GetLocalCfg.h src/Log.cpp src/Log.h src/main.cpp src/MessagePlatform.cpp src/MessagePlatform.h src/Sal.cpp src/Sal.h src/ServerAntAgentCfg.cpp src/ServerAntAgentCfg.h src/ThreadClass.cpp src/ThreadClass.h src/common/common.cpp)
add_executable(boostTest ${SOURCE_FILES})

