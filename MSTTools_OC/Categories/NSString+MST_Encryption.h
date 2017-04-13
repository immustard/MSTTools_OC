//
//  NSString+MST_Encryption.h
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSString (MST_Encryption)

/**
 MD5加密
 */
- (NSString *)mst_md5HexDigest;

/*
 HMac_SHA1算法, 结果经过base64编码
 */
- (NSString *)mst_hmacSha1:(NSString *)key;


/**
 转换为Base64编码
 */
- (NSString *)mst_base64EncodedStr;

/**
 将Base64编码解码
 */
- (NSString *)mst_base64DecodedStr;

@end
