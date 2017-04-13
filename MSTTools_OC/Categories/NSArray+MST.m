//
//  NSArray+MST.m
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import "NSArray+MST.h"

@implementation NSArray (MST)

- (BOOL)mst_isEmpty {
    return (
            (self == nil)
            || [self isEqual:[NSNull null]]
            || self.count == 0
            );
}
@end
