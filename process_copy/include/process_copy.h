#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <sys/wait.h>

/// @brief 任务量计算
/// @param src 源文件位置
/// @param pronum 线程数量
/// @return 每线程大小
int BLOCK_CUR(const char* src,int  pronum  );

/// @brief 参数检查
/// @param src 源文件是否存在
/// @param pronum 线程数量是否合法
/// @param argc 参数数量是否合法
/// @return 是否合法
int PRAM_CHECK(const char* src,int pronum,int argc);

/// @brief 多进程创建与重载
/// @param src 
/// @param dest 
/// @param blockSize 
/// @param pronum 
/// @return 
int PROCESS_CREATE(const char* src,const char* dest,int blockSize,int pronum);

/// @brief 僵尸回收
/// @param  
/// @return 
int PROCESS_WAIT(void);