#pragma once
#pragma comment(lib, "C:\\SpiderPackageFiles\\7zLib\\LZMA.lib")
#include "LzmaLib.h"

//LZMA ѹ��
bool Compress(const char*scrfilename, const char*desfilename);

//LZMA ��ѹ
bool Uncompress(const char*scrfilename, const char*desfilename);
