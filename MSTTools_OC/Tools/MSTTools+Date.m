//
//  MSTTools+Date.m
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import "MSTTools+Date.h"
#import "NSString+MST.h"
#import "MSTMacro.h"
#include <sys/sysctl.h>

@implementation MSTTools (Date)

+ (NSDate *)dateFromTimestamp:(NSString *)timestamp {
    long long time = timestamp.longLongValue;
    NSDate *date = [[NSDate alloc] initWithTimeIntervalSince1970:time/1000.f];
    
    return date;
}

+ (NSString *)timestampByDate:(NSDate *)date {
    return [NSString mst_stringWithObject:@((long long)([date timeIntervalSince1970] * 1000))];
}

+ (NSString *)formatTimeByTimestamp:(NSString *)timestamp format:(NSString *)format {
    NSString *result = [[self mp_dateFormat:format] stringFromDate:[self dateFromTimestamp:timestamp]];
    
    return result;
}

+ (NSString *)formatTimeWithFormat:(NSString *)format {
    return [self formatTimeByTimestamp:[self timestamp] format:format];
}

+ (NSString *)timestampByFormatTime:(NSString *)time formart:(NSString *)format {
    NSDate *date = [[self mp_dateFormat:format] dateFromString:time];
    
    return [NSString mst_stringWithObject:@((long long)([date timeIntervalSince1970] * 1000))];
}

+ (NSString *)formatTimestampForContent:(NSString *)timestamp {
    NSTimeInterval publishTime = [timestamp doubleValue]/1000;
    NSTimeInterval nowTime = [[self timestamp] doubleValue]/1000;
    NSInteger intervalTime = nowTime - publishTime;
    if (intervalTime < 60) {
        return @"刚刚";
    } else if (intervalTime >= 60 && intervalTime < kOneHour) {
        return [NSString stringWithFormat:@"%@分钟前", @(intervalTime/60)];
    } else if (intervalTime >= kOneHour && intervalTime < kOneDay) {
        return [NSString stringWithFormat:@"%@小时前", @(intervalTime/kOneHour)];
    } else if (intervalTime >= kOneDay && intervalTime < kOneDay*2) {
        return @"昨天";
    } else {
        NSDate *date = [NSDate dateWithTimeIntervalSince1970:publishTime];
        NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
        [formatter setDateFormat:@"yyyy-MM-dd"];
        return [formatter stringFromDate:date];
    }
}

+ (NSString *)timestamp {
    long long nowSysTimeStamp = [[NSDate date] timeIntervalSince1970]*1000;
    
    return [NSString mst_stringWithObject:@(nowSysTimeStamp)];
}

+ (long)uptime {
    struct timeval boottime;
    
    int mib[2] = {CTL_KERN, KERN_BOOTTIME};
    
    size_t size = sizeof(boottime);
    
    struct timeval now;
    struct timezone tz;
    
    gettimeofday(&now, &tz);
    
    double uptime = -1;
    
    if (sysctl(mib, 2, &boottime, &size, NULL, 0) != -1 && boottime.tv_sec != 0)
    {
        uptime = now.tv_sec - boottime.tv_sec;
        uptime += (double)(now.tv_usec - boottime.tv_usec) / 1000000.0;
    }
    
    return (long)(uptime * 1000);
}

+ (NSDateFormatter *)mp_dateFormat:(NSString *)format {
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:format];
    
    return formatter;
}
@end
