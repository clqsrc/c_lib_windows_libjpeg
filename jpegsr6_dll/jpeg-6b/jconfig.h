
//NMAKE:fatal error U1073: don't know how to make 'jconfig.h'
//  这是个奇怪的问题，在网上搜了半天没有结果，最后才发现原来目录中没有这个文件。其实只要把文件jconfig.vc更名为jconig.h即可。再执行编译命令又有新的错误

//源码没有这个文件的,要自己根据不同编译器定义

#include "jconfig.vc"

