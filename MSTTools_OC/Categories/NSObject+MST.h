//
//  NSObject+MST.h
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>

@interface NSObject (MST)

/**
 添加关联
 */
- (void)mst_setAssociatedObject:(id)object;

/**
 获取关联
 */
- (id)mst_getAssociatedObject;

@end
