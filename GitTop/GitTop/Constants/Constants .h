//
//  Constants .h
//  iOSStudy
//
//  Created by chenguandong on 15/2/3.
//  Copyright (c) 2015年 chenguandong. All rights reserved.
//


#import "AppDelegate.h"
#import <Foundation/Foundation.h>


//1 OSchina 0 github

#define kHttpSource 0

#if kHttpSource

/****OSChina数据源地址*****/
#define HttpAdress @"https://git.oschina.net/FooKaa/helloworld/raw/master/blogs.json"


#else
/**
 github 数据源地址**/
 
 #define HttpAdress @"https://raw.githubusercontent.com/chenguandong/iOSStudy/CoreDataJoin/iOSStudyJsonData/blogs.json"


#endif


#define SharedApp ((AppDelegate *)[[UIApplication sharedApplication] delegate])

#define PATH_OF_DOCUMENT    [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]





