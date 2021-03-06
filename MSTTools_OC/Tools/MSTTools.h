//
//  MSTTools.h
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MSTTools : NSObject

/**
 是否有访问相册的权限

 @param handle block
 */
+ (void)authorizationForAlbum:(void (^)(BOOL authorised))handle;

/**
 是否有访问录像的权限

 @param handle block
 */
+ (void)authorizationForCapture:(void (^)(BOOL authorised))handle;

/**
 获取 App 版本号 (浮点型)
 */
+ (CGFloat)appVersion;

/**
 获取 App 版本号 (字符串)
 */
+ (NSString *)appStringVersion;

/**
 获取 BundleID
 */
+ (NSString *)appBundleIdentifier;

/**
 获取系统版本
 */
+ (CGFloat)currentSystemVersion;

@end
