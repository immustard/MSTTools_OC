//
//  MSTMacro.h
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#ifndef MSTMacro_h
#define MSTMacro_h

#pragma mark - Screen
#define mst_ScreenWidth   [UIScreen mainScreen].bounds.size.width
#define mst_ScreenHeight  [UIScreen mainScreen].bounds.size.height

#pragma mark - Color
#define mst_RGBCOLOR(r,g,b) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1]
#define mst_RGBACOLOR(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define mst_RandomColor [UIColor colorWithRed:arc4random()%256/255.0 green:arc4random()%256/255.0 blue:arc4random()%256/255.0 alpha:1.0]
#define mst_HSVCOLOR(h,s,v) [UIColor colorWithHue:h saturation:s value:v alpha:1]
#define mst_HSVACOLOR(h,s,v,a) [UIColor colorWithHue:h saturation:s value:v alpha:a]

#pragma mark - Font
#define mst_TextSize10 [UIFont systemFontOfSize:10]
#define mst_TextSize11 [UIFont systemFontOfSize:11]
#define mst_TextSize12 [UIFont systemFontOfSize:12]
#define mst_TextSize13 [UIFont systemFontOfSize:13]
#define mst_TextSize14 [UIFont systemFontOfSize:14]
#define mst_TextSize15 [UIFont systemFontOfSize:15]
#define mst_TextSize16 [UIFont systemFontOfSize:16]
#define mst_TextSize17 [UIFont systemFontOfSize:17]
#define mst_TextSize18 [UIFont systemFontOfSize:18]
#define mst_TextSize19 [UIFont systemFontOfSize:19]
#define mst_TextSize20 [UIFont systemFontOfSize:20]
#define mst_TextSize(i) [UIFont systemFontOfSize:i]

#define mst_TextBoldSize10 [UIFont boldSystemFontOfSize:10]
#define mst_TextBoldSize11 [UIFont boldSystemFontOfSize:11]
#define mst_TextBoldSize12 [UIFont boldSystemFontOfSize:12]
#define mst_TextBoldSize13 [UIFont boldSystemFontOfSize:13]
#define mst_TextBoldSize14 [UIFont boldSystemFontOfSize:14]
#define mst_TextBoldSize15 [UIFont boldSystemFontOfSize:15]
#define mst_TextBoldSize16 [UIFont boldSystemFontOfSize:16]
#define mst_TextBoldSize17 [UIFont boldSystemFontOfSize:17]
#define mst_TextBoldSize18 [UIFont boldSystemFontOfSize:18]
#define mst_TextBoldSize19 [UIFont boldSystemFontOfSize:19]
#define mst_TextBoldSize20 [UIFont boldSystemFontOfSize:20]
#define mst_TextBoldSize(i) [UIFont boldSystemFontOfSize:i]

#pragma mark - Time
#define mst_OneMinute 60
#define mst_OneHour 3600
#define mst_OneDay 86400
#define mst_OneWeek 604800

#pragma mark - Is Empty
// 判断字符串是否为空
#define mst_StrIsEmpty(_ref)    (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]) ||([(_ref)isEqualToString:@""]) || [(_ref)isEqualToString:@"<null>"] || [(_ref)isEqualToString:@"(null)"]|| [(_ref)isEqualToString:@"null"])

// 去掉空白符判断字符串是否为空
#define mst_StrIsEmptyWithoutBlank(_ref) (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]) ||([(_ref)isEqualToString:@""]) || [(_ref)isEqualToString:@"<null>"] || [(_ref)isEqualToString:@"(null)"]|| [(_ref)isEqualToString:@"null"] || ![[(_ref) stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]] length])

// 判断数组是否为空
#define mst_ArrIsEmpty(_ref)    (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]) ||([(_ref) count] == 0))

#pragma mark - String
#define mst_FormatStr(...) [NSString stringWithFormat:__VA_ARGS__]
#define mst_StrFromObj(obj) [NSString stringWithFormat:@"%@", obj]

#pragma mark - Block
#define mst_WEAKSELF typeof(self) __weak weakSelf = self;
#define mst_STRONGSELF typeof(weakSelf) __strong strongSelf = weakSelf;

#pragma mark - System
#define mst_IOS10_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"10.0"] != NSOrderedAscending )
#define mst_IOS9_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"9.0"] != NSOrderedAscending )
#define mst_IOS82_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"8.2"] != NSOrderedAscending )
#define mst_IOS8_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"8.0"] != NSOrderedAscending )
#define mst_IOS7_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"7.0"] != NSOrderedAscending )
#define mst_IOS6_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"6.0"] != NSOrderedAscending )
#define mst_IOS5_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"5.0"] != NSOrderedAscending )
#define mst_IOS4_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"4.0"] != NSOrderedAscending )
#define mst_IOS3_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"3.0"] != NSOrderedAscending )
// 版本号
#define mst_BundleVer [[[NSBundle mainBundle] objectForInfoDictionaryKey:(NSString *)kCFBundleVersionKey] floatValue]
// 系统号
#define mst_SystemVer [[[UIDevice currentDevice] systemVersion] floatValue]
// app名称
#define mst_GAppName [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleDisplayName"]
// iPad
#define mst_IsiPad (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)


#endif /* MSTMacro_h */
