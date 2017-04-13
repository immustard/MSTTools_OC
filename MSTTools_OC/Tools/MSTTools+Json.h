//
//  MSTTools+Json.h
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import "MSTTools.h"

@interface MSTTools (Json)

/**
 将字符串转为 JSON

 @param string 字符串
 @return JSON
 */
+ (NSString *)convertStringToJsonString:(NSString *)string;

/**
 将字典转为 JSON

 @param dictionary 字典
 @return JSON
 */
+ (NSString *)convertDictionaryToJsonString:(NSDictionary*)dictionary;

/**
 将数组转为 JSON

 @param array 数组
 @return JSON
 */
+ (NSString *)convertArrayToJsonString:(NSArray*)array;

/**
 将 JSON 转为 字典

 @param string JSON
 @return 字典
 */
+ (NSDictionary *)convertJsonStringToDic:(NSString *)string;

/**
 将 JSON 转为 数组

 @param string JSON
 @return 数组
 */
+ (NSArray *)convertJsonStringToArray:(NSString*)string;

/**
 将字典、数组、字符串、数字转为 JSON

 @param obj 对象
 @return JSON, 返回 nil 则转换失败
 */
+ (NSString *)jsonStringWithObject:(id)obj;

@end
