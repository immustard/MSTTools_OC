//
//  NSString+MST.h
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSString (MST_Calculate)

#pragma mark - Rect
/**
 计算文字高度(label)
 
 @param width 给定最大宽度
 @param font 字体
 @return 返回文字高度
 */
- (CGFloat)mst_textHeightWithMaxWidth:(CGFloat)width font:(UIFont *)font;

/**
 计算文字宽度(label)
 
 @param height 给定最大高度
 @param font 字体
 @return 返回文字宽度
 */
- (CGFloat)mst_textWidthWithMaxHeight:(CGFloat)height font:(UIFont *)font;

/**
 计算文字高度(textView)

 @param textView 展示文字的 UITextView
 @param width 最大宽度
 @return 返回展示高度
 */
- (CGFloat)mst_textHeightWithTextView:(UITextView *)textView maxWidth:(CGFloat)width;

@end
