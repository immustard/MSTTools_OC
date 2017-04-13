//
//  NSObject+GCD.m
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import "MSTTools+GCD.h"

@implementation MSTTools (GCD)

+ (void)doTaskAfter:(NSTimeInterval)delayTime withBlock:(dispatch_block_t)block {
    dispatch_time_t popTime = dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delayTime * NSEC_PER_SEC));
    dispatch_after(popTime, dispatch_get_main_queue(), block);
}

+ (void)doAsyTaskInGlobalQueue:(dispatch_block_t)block {
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0),block);
}

+ (void)doTaskInMainQueueSync:(dispatch_block_t)block {
    if ([NSThread isMainThread])
        block();
    else
        dispatch_sync(dispatch_get_main_queue(), block);
}

+ (void)doTaskInMainQueueAsync:(dispatch_block_t)block {
    if ([NSThread isMainThread])
        block();
    else
        dispatch_async(dispatch_get_main_queue(), block);
}


@end
