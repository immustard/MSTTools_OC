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
#define kScreenWidth     [UIScreen mainScreen].bounds.size.width
#define kScreenHeight    [UIScreen mainScreen].bounds.size.height
#define kNavHeight       64
#define kTabarHegiht     49
#define kSearchBarHeight 44

#pragma mark - Color
#define kRGBCOLOR(r,g,b)     [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1]
#define kRGBACOLOR(r,g,b,a)  [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define kRandomColor         [UIColor colorWithRed:arc4random()%256/255.0 green:arc4random()%256/255.0 blue:arc4random()%256/255.0 alpha:1.0]
#define kHSVCOLOR(h,s,v)     [UIColor colorWithHue:h saturation:s value:v alpha:1]
#define kHSVACOLOR(h,s,v,a)  [UIColor colorWithHue:h saturation:s value:v alpha:a]

#pragma mark - Font
#define kTextSize10 [UIFont systemFontOfSize:10]
#define kTextSize11 [UIFont systemFontOfSize:11]
#define kTextSize12 [UIFont systemFontOfSize:12]
#define kTextSize13 [UIFont systemFontOfSize:13]
#define kTextSize14 [UIFont systemFontOfSize:14]
#define kTextSize15 [UIFont systemFontOfSize:15]
#define kTextSize16 [UIFont systemFontOfSize:16]
#define kTextSize17 [UIFont systemFontOfSize:17]
#define kTextSize18 [UIFont systemFontOfSize:18]
#define kTextSize19 [UIFont systemFontOfSize:19]
#define kTextSize20 [UIFont systemFontOfSize:20]
#define kTextSize(i) [UIFont systemFontOfSize:i]

#define kTextBoldSize10 [UIFont boldSystemFontOfSize:10]
#define kTextBoldSize11 [UIFont boldSystemFontOfSize:11]
#define kTextBoldSize12 [UIFont boldSystemFontOfSize:12]
#define kTextBoldSize13 [UIFont boldSystemFontOfSize:13]
#define kTextBoldSize14 [UIFont boldSystemFontOfSize:14]
#define kTextBoldSize15 [UIFont boldSystemFontOfSize:15]
#define kTextBoldSize16 [UIFont boldSystemFontOfSize:16]
#define kTextBoldSize17 [UIFont boldSystemFontOfSize:17]
#define kTextBoldSize18 [UIFont boldSystemFontOfSize:18]
#define kTextBoldSize19 [UIFont boldSystemFontOfSize:19]
#define kTextBoldSize20 [UIFont boldSystemFontOfSize:20]
#define kTextBoldSize(i) [UIFont boldSystemFontOfSize:i]

#pragma mark - Time
#define kOneMinute   60
#define kOneHour     3600
#define kOneDay      86400
#define kOneWeek     604800

#pragma mark - Is Empty
// 判断字符串是否为空
#define kStrIsEmpty(_ref)    (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]) ||([(_ref)isEqualToString:@""]) || [(_ref)isEqualToString:@"<null>"] || [(_ref)isEqualToString:@"(null)"]|| [(_ref)isEqualToString:@"null"])

// 去掉空白符判断字符串是否为空
#define kStrIsEmptyWithoutBlank(_ref) (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]) ||([(_ref)isEqualToString:@""]) || [(_ref)isEqualToString:@"<null>"] || [(_ref)isEqualToString:@"(null)"]|| [(_ref)isEqualToString:@"null"] || ![[(_ref) stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] length])

// 判断数组是否为空
#define kArrIsEmpty(_ref)    (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]) ||([(_ref) count] == 0))

#pragma mark - String
#define kFormatStr(...) [NSString stringWithFormat:__VA_ARGS__]
#define kStrFromObj(obj) [NSString stringWithFormat:@"%@", obj]

#pragma mark - Block
#define WEAKSELF typeof(self) __weak weakSelf = self;
#define STRONGSELF typeof(weakSelf) __strong strongSelf = weakSelf;

#pragma mark - System
#define IOS10_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"10.0"] != NSOrderedAscending )
#define IOS9_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"9.0"] != NSOrderedAscending )
#define IOS82_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"8.2"] != NSOrderedAscending )
#define IOS8_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"8.0"] != NSOrderedAscending )
#define IOS7_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"7.0"] != NSOrderedAscending )
#define IOS6_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"6.0"] != NSOrderedAscending )
#define IOS5_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"5.0"] != NSOrderedAscending )
#define IOS4_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"4.0"] != NSOrderedAscending )
#define IOS3_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"3.0"] != NSOrderedAscending )
// 版本号
#define kBundleVer [[[NSBundle mainBundle] objectForInfoDictionaryKey:(NSString *)kCFBundleVersionKey] floatValue]
// 系统号
#define kSystemVer [[[UIDevice currentDevice] systemVersion] floatValue]
// app名称
#define kAppName [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleDisplayName"]
// iPad
#define kIsiPad (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)


#endif /* MSTMacro_h */
