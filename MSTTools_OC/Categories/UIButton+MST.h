//
//  UIButton+MST.h
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, MSTButtonEdgeOfImageStyle) {
    MSTButtonEdgeOfImageStyleTop,        // 图片在上，文字在下
    MSTButtonEdgeOfImageStyleLeft,       // 图片在左，文字在右
    MSTButtonEdgeOfImageStyleBottom,     // 图片在下，文字在上
    MSTButtonEdgeOfImageStyleRight,      // 图片在右，文字在左
};

@interface UIButton (MST)

/**
 设置按钮图片和文字的布局方式，以及之间的间距
 在布局之后调用
 
 @param style 布局方式
 @param space 间距
 */
- (void)mst_layoutButtonWithEdgeOfImageStyle:(MSTButtonEdgeOfImageStyle)style spaceBetweenImageAndTitle:(CGFloat)space;

@end
