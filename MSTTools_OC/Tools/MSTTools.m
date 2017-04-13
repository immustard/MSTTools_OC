//
//  MSTTools.m
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import "MSTTools.h"

@implementation MSTTools

+ (CGFloat)appVersion {
    NSDictionary *infoDict = [[NSBundle mainBundle] infoDictionary];
    return [infoDict[@"CFBundleShortVersionString"] floatValue];
}

+ (NSString *)appStringVersion {
    NSDictionary *infoDict = [[NSBundle mainBundle] infoDictionary];
    return infoDict[@"CFBundleShortVersionString"];
}

+ (NSString *)appBundleIdentifier {
    return [[NSBundle mainBundle] bundleIdentifier];
}

+ (CGFloat)currentSystemVersion {
    return [[UIDevice currentDevice].systemVersion floatValue];
}

@end

