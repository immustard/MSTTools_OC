//
//  UIImage+MST.h
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import <UIKit/UIKit.h>

CGFloat DegreesToRadians(CGFloat degrees);
CGFloat RadiansToDegrees(CGFloat radians);
@interface UIImage (MST)

/**
 从资源文件中获取的图像

 @param filename 文件名称
 @return 图片
 */
+ (UIImage *)mst_newImageFromResourceWithName:(NSString *)filename;

/**
 根据颜色创建图片
 
 @param color 颜色
 @return 返回 1*1 的图片
 */
+ (UIImage *)mst_createImageWithColor:(UIColor *)color;

/**
 截取View为图片
 
 @param view 被截取的View
 @return 截取图片
 */
+ (UIImage *)mst_imageWithView:(UIView *)view;

/**
 根据 rect 截取图片中的部分

 @param rect 截取区域
 @return 截取图片
 */
- (UIImage *)mst_imageAtRect:(CGRect)rect;

/**
 等比例对图片进行缩放至最小尺寸

 @param targetSize 目标尺寸
 @return 缩放后图片
 */
- (UIImage *)mst_imageByScalingProportionallyToMinimumSize:(CGSize)targetSize;

/**
 等比例对图片缩放至指定尺寸

 @param targetSize 目标尺寸
 @return 缩放后图片
 */
- (UIImage *)mst_imageByScalingProportionallyToSize:(CGSize)targetSize;

/**
 将图片缩放至指定尺寸

 @param targetSize 目标尺寸
 @return 缩放后图片
 */
- (UIImage *)mst_imageByScalingToSize:(CGSize)targetSize;

/**
 将图片压缩至指定宽度

 @param defineWidth 目标宽度
 @return 压缩后图片
 */
- (UIImage *)mst_imageCompressForWidth:(CGFloat)defineWidth;

/**
 将图片进行旋转(弧度制)

 @param radians 旋转角度
 @return 旋转后图片
 */
- (UIImage *)mst_imageRotatedByRadians:(CGFloat)radians;

/**
 将图片进行旋转(角度制)
 
 @param degrees 旋转角度
 @return 旋转后图片
 */
- (UIImage *)mst_imageRotatedByDegrees:(CGFloat)degrees;

/**
 为图片添加毛玻璃效果
 
 @param blur 效果参数
 @return 返回结果图片
 */
- (UIImage *)mst_coreBlurWithBlurNumber:(CGFloat)blur;


/**
 根据指定点对图片进行拉伸

 @param point 目标点
 @return 拉伸图片
 */
- (UIImage *)mst_streImageByCapPoint:(CGPoint)point;

/**
 将图片截取为正方形

 @return 截取后图片
 */
- (UIImage *)mst_croppedImageToSquare;

/**
 修正图片方向
 
 @return 修正后图片
 */
- (UIImage *)mst_fixOrientation:(UIImage *)aImage;


@end
