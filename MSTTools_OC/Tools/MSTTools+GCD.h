//
//  MSTTools+GCD.h
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import "MSTTools.h"

@interface MSTTools (GCD)

/**
 延时任务

 @param delayTime 延时时间
 @param block 代码块
 */
+ (void)doTaskAfter:(NSTimeInterval)delayTime withBlock:(dispatch_block_t)block;

/**
 子线程

 @param block 代码块
 */
+ (void)doAsyTaskInGlobalQueue:(dispatch_block_t)block;

/**
 主线程同步

 @param block 代码块
 */
+ (void)doTaskInMainQueueSync:(dispatch_block_t)block;

/**
 主线程异步

 @param block 代码块
 */
+ (void)doTaskInMainQueueAsync:(dispatch_block_t)block;

@end
