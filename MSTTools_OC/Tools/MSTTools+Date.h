//
//  MSTTools+Date.h
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import "MSTTools.h"

// 日期格式
#define mst_DATE_yyyy @"yyyy"
#define mst_DATE_yyyy_MM @"yyyy-MM"
#define mst_DATE_yyyy_MM_dd @"yyyy-MM-dd"
#define mst_DATE_MM_dd @"MM-dd"

// 时间格式
#define mst_CLOCK_HH_mm  @"HH:mm"
#define mst_CLOCK_HH_mm_ss @"HH:mm:ss"

// 综合格式
#define mst_TIME_MM_dd_HH_mm @"MM-dd HH:mm"
#define mst_TIME_MM_dd_HH_mm_ss @"MM-dd HH:mm:ss"
#define mst_TIME_yyyy_MM_dd_HH_mm @"yyyy-MM-dd HH:mm"
#define mst_TIME_yyyy_MM_dd_HH_mm_ss @"yyyy-MM-dd HH:mm:ss"
#define mst_TIME_yyyy_MM_dd_HH_mm_ss_SSS @"yyyy-MM-dd HH:mm:ss.SSS"

@interface MSTTools (Date)

/**
 将时间戳转为 Date

 @param timestamp 时间戳(1970，毫秒级)
 @return NSDate
 */
+ (NSDate *)dateFromTimestamp:(NSString *)timestamp;

/**
 将 Date 转为时间戳

 @param date Date
 @return 时间戳(1970，毫秒级)
 */
+ (NSString *)timestampByDate:(NSDate *)date;

/**
 根据时间戳格式化时间

 @param timestamp 时间戳(1970，毫秒级)
 @param format 时间格式
 @return 格式化后时间
 */
+ (NSString *)formatTimeByTimestamp:(NSString *)timestamp format:(NSString *)format;

/**
 格式化当前时间

 @param format 时间格式
 @return 格式化后时间
 */
+ (NSString *)formatTimeWithFormat:(NSString *)format;

/**
 格式化时间转换为时间戳

 @param time 格式化时间
 @param format 时间格式
 @return 时间戳(1970，毫秒级)
 */
+ (NSString *)timestampByFormatTime:(NSString *)time formart:(NSString *)format;

/**
 根据当前时间间隔显示内容，如：刚刚、1分钟之前

 @param timestamp 时间戳(1970，毫秒级)
 @return 显示时间
 */
+ (NSString *)formatTimestampForContent:(NSString *)timestamp;

/**
 获取当前时间戳(1970，毫秒级)
 */
+ (NSString *)timestamp;

/**
 系统启动时间(毫秒级)
 */
+ (long)uptime;

@end
