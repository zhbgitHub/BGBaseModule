//
//  BGMemoryWatch.h
//  BGMemoryWatch
//
//  Created by 张波 on 15/08/11.
//  Copyright © 2015年 张波. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BGMemoryWatch : NSObject

+ (id)sharedInstance;

/**
 检测内存,附框展示在状态栏
 */
- (void)jy_startWatchAndShowInStatusBar;
- (void)jy_endWatch;

//- (void)jy_startWatchTimer;
//- (void)jy_showMemoryViewInStatusBar;

@end
