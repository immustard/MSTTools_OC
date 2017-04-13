//
//  NSObject+MST.m
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import "NSObject+MST.h"

@implementation NSObject (MST)

- (void)mst_setAssociatedObject:(id)object {
    objc_setAssociatedObject(self, @selector(mst_getAssociatedObject), object, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (id)mst_getAssociatedObject {
    return objc_getAssociatedObject(self, _cmd);
}
@end
