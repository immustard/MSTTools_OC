//
//  NSString+MST.m
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import "NSString+MST.h"

@implementation NSString (MST)

+ (NSString *)mst_stringWithObject:(id)obj {
    return [NSString stringWithFormat:@"%@", obj];
}

+ (NSString *)mst_convertNumberFromArabicToChinese:(double)number {
    NSNumberFormatter *formatter = [[NSNumberFormatter alloc] init];
    
    formatter.numberStyle = kCFNumberFormatterRoundHalfDown;
    
    NSString *string = [formatter stringFromNumber:@(number)];
    
    return string;
}

- (NSInteger)mst_byteLength {
    return strlen(self.UTF8String);
}

- (NSInteger)mst_CharLength {
    NSInteger strlength = 0;
    
    char *p = (char*)[self cStringUsingEncoding:NSUnicodeStringEncoding];
    for (int i=0 ; i < [self lengthOfBytesUsingEncoding:NSUnicodeStringEncoding]; ++i) {
        p++;
        if (*p)
            strlength++;
    }
    
    return (strlength+1);
}

- (BOOL)mst_containsEmoji {
    __block BOOL returnValue = NO;
    [self enumerateSubstringsInRange:NSMakeRange(0, [self length]) options:NSStringEnumerationByComposedCharacterSequences usingBlock:^(NSString *substring, NSRange substringRange, NSRange enclosingRange, BOOL *stop) {
        const unichar hs = [substring characterAtIndex:0];
        // surrogate pair
        if (0xd800 <= hs && hs <= 0xdbff) {
            if (substring.length > 1) {
                const unichar ls = [substring characterAtIndex:1];
                const int uc = ((hs - 0xd800) * 0x400) + (ls - 0xdc00) + 0x10000;
                if (0x1d000 <= uc && uc <= 0x1f77f) {
                    returnValue = YES;
                }
            }
        } else if (substring.length > 1) {
            const unichar ls = [substring characterAtIndex:1];
            if (ls == 0x20e3) {
                returnValue = YES;
            }
            
        } else {
            // non surrogate
            if (0x2100 <= hs && hs <= 0x27ff) {
                returnValue = YES;
            } else if (0x2B05 <= hs && hs <= 0x2b07) {
                returnValue = YES;
            } else if (0x2934 <= hs && hs <= 0x2935) {
                returnValue = YES;
            } else if (0x3297 <= hs && hs <= 0x3299) {
                returnValue = YES;
            } else if (hs == 0xa9 || hs == 0xae || hs == 0x303d || hs == 0x3030 || hs == 0x2b55 || hs == 0x2b1c || hs == 0x2b1b || hs == 0x2b50) {
                returnValue = YES;
            }
        }
    }];
    return returnValue;
}

- (BOOL)mst_isEmpty {
    return (
            (self == nil)
            || [self isEqual:[NSNull null]]
            || [self isEqualToString:@""]
            || [self isEqualToString:@"<null>"]
            || [self isEqualToString:@"(null)"]
            || [self isEqualToString:@"null"]
            );
}

- (BOOL)mst_isEmptyWithoutWhitespace {
    return (
            (self == nil)
            || [self isEqual:[NSNull null]]
            || [self isEqualToString:@""]
            || [self isEqualToString:@"<null>"]
            || [self isEqualToString:@"(null)"]
            || [self isEqualToString:@"null"]
            || ![[self stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] length]
            );
}
@end
