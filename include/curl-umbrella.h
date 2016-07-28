//
//  curl-umbrella.h
//  UbiregiExtensionCURL
//
//  Created by Noritaka Kamiya on 2016/07/28.
//  Copyright © 2016年 Noritaka Kamiya. All rights reserved.
//


#if __LP64__
#include "include-64/curl/curl.h"
#else
#include "include-32/curl/curl.h"
#endif
