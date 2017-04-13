//
//  NSString+MST.m
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import "NSString+MST_Calculate.h"

@implementation NSString (MST_Calculate)

- (CGFloat)mst_textHeightWithMaxWidth:(CGFloat)width font:(UIFont *)font {
    CGRect rect = [self boundingRectWithSize:CGSizeMake(width, 1000) options:NSStringDrawingUsesDeviceMetrics attributes:@{NSFontAttributeName: font} context:nil];
    
    return rect.size.height + 2;
}

- (CGFloat)mst_textWidthWithMaxHeight:(CGFloat)height font:(UIFont *)font {
    CGRect rect = [self boundingRectWithSize:CGSizeMake(1000, height) options:NSStringDrawingUsesDeviceMetrics attributes:@{NSFontAttributeName: font} context:nil];
    
    return rect.size.width + 2;
}

- (CGFloat)mst_textHeightWithTextView:(UITextView *)textView maxWidth:(CGFloat)width {
    CGSize sizeToFit = [textView sizeThatFits:CGSizeMake(width, MAXFLOAT)];
    return sizeToFit.height;
}

@end
