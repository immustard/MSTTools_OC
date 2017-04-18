//
//  NSString+MST.h
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (MST)

/**
 将对象转为字符串
 
 @param obj 对象
 @return 字符串
 */
+ (NSString *)mst_stringWithObject:(id)obj;

#pragma mark - Length
/**
 计算字节长度
 */
- (NSInteger)mst_byteLength;

/**
 计算字符长度
 */
- (NSInteger)mst_CharLength;

#pragma mark - Other

/**
 检查是否含有 emoji

 @return 是否有 emoji
 */
- (BOOL)mst_containsEmoji;

/**
 是否为空
 */
- (BOOL)mst_isEmpty;

/**
 去掉空白符是否为空
 */
- (BOOL)mst_isEmptyWithoutWhitespace;

@end
