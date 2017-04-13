//
//  MSTTools+Json.m
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import "MSTTools+Json.h"
#import "NSString+MST.h"
#import "NSArray+MST.h"

@implementation MSTTools (Json)

+ (NSString *)convertStringToJsonString:(NSString *)string {
    return [NSString stringWithFormat:@"\"%@\"", [[string stringByReplacingOccurrencesOfString:@"\n" withString:@"\\n"] stringByReplacingOccurrencesOfString:@"\""withString:@"\\\""]];
}

+ (NSString *)convertDictionaryToJsonString:(NSDictionary *)dictionary {
    if (!dictionary) return nil;
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:dictionary options:NSJSONWritingPrettyPrinted error:nil];
    return [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
}

+ (NSString *)convertArrayToJsonString:(NSArray *)array {
    if (array.mst_isEmpty) return @"";
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:array options:NSJSONWritingPrettyPrinted error:nil];
    return [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
}

+ (NSDictionary *)convertJsonStringToDic:(NSString *)string {
    if (string.mst_isEmpty) return nil;
    NSData *data = [string dataUsingEncoding:NSUTF8StringEncoding];
    return [self dicWithData:data];
}

+ (NSArray *)convertJsonStringToArray:(NSString *)string {
    if (string.mst_isEmpty) return nil;
    NSData *data = [string dataUsingEncoding:NSUTF8StringEncoding];
    return [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingMutableContainers error:nil];
}

+ (NSDictionary *)dicWithData:(NSData *)date {
    return [NSJSONSerialization JSONObjectWithData:date options:NSJSONReadingMutableContainers error:nil];
}

+ (NSString *)jsonStringWithObject:(id)object {
    NSString *value = nil;
    if (!object)
        return value;

    if ([object isKindOfClass:[NSString class]]) {
        value = [self convertStringToJsonString:object];
    } else if ([object isKindOfClass:[NSDictionary class]]) {
        value = [self convertDictionaryToJsonString:object];
    } else if ([object isKindOfClass:[NSArray class]]) {
        value = [self convertArrayToJsonString:object];
    } else if ([object isKindOfClass:[NSNumber class]]) {
        value = [self convertStringToJsonString:[NSString mst_stringWithObject:object]];
    }
    return value;
}


@end
