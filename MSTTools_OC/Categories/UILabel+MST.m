//
//  UILabel+MST.m
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import "UILabel+MST.h"

@implementation UILabel (MST)

- (void)mst_addLongPressCopyMenu {
    self.userInteractionEnabled = YES;
    UILongPressGestureRecognizer *longPress = [[UILongPressGestureRecognizer alloc] initWithTarget:self action:@selector(mp_showCopyMenu)];
    [self addGestureRecognizer:longPress];
}

- (void)mp_showCopyMenu {
    [self becomeFirstResponder];
    
    [[UIMenuController sharedMenuController] setTargetRect:self.frame inView:self.superview];
    [[UIMenuController sharedMenuController] setMenuVisible:(self.isFirstResponder) animated:YES];
}

- (BOOL)canBecomeFirstResponder {
    return YES;
}

// 可以响应的方法
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender {
    return (action == @selector(copy:));
}

// 针对于响应方法的实现
- (void)copy:(id)sender {
    UIPasteboard *pboard = [UIPasteboard generalPasteboard];
    pboard.string = self.text;
}
@end
