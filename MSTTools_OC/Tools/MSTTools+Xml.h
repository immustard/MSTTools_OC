//
//  MSTTools+Xml.h
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/21.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import "MSTTools.h"

@interface MSTTools (Xml)
+ (NSString *)createNode:(NSString *)nodeName with:(NSString *)nodeValue;
+ (NSString *)createCDATANode:(NSString *)nodeName with:(NSString *)nodeValue;
+ (NSString *)createAttrNode:(NSString *)nodeName withAttr:(NSString *)attr andAttrValue:(NSString *)value;
+ (NSString *)createComplexNode:(NSString *)nodeName withValue:(NSString *)nodeValue withAttr:(NSString *)attr andAttrValue:(NSString *)value;

+ (NSString *)createCDATAComplexNode:(NSString *)nodeName withValue:(NSString *)nodeValue withAttr:(NSString *)attr andAttrValue:(NSString *)value;
+ (NSString *)createCDATAComplexNode:(NSString *)nodeName withValue:(NSString *)nodeValue;

+ (NSString *)createDComplexNode:(NSString *)nodeName withValue:(NSString *)nodeValue withAttr:(NSString *)attr andAttrValue:(NSString *)value attr2:(NSString*) attr2 attrValue2:(NSString*) attrValue2;
+ (NSString *)createDCDATAComplexNode:(NSString *)nodeName withValue:(NSString *)nodeValue withAttr:(NSString *)attr andAttrValue:(NSString *)value attr2:(NSString*) attr2 attrValue2:(NSString*) attrValue2;

+ (NSString *)createTComplexNode:(NSString *)nodeName withValue:(NSString *)nodeValue withAttr:(NSString *)attr andAttrValue:(NSString *)value attr2:(NSString*) attr2 attrValue2:(NSString*) attrValue2 attr3:(NSString*) attr3 attrValue3:(NSString*) attrValue3;

+ (NSString *)createTCDATAComplexNode:(NSString *)nodeName withValue:(NSString *)nodeValue withAttr:(NSString *)attr andAttrValue:(NSString *)value attr2:(NSString*) attr2 attrValue2:(NSString*) attrValue2 attr3:(NSString*) attr3 attrValue3:(NSString*) attrValue3;


+ (NSString *)createNodePre:(NSString *)nodeName;
+ (NSString *)createNodeSuf:(NSString *)nodeName;
@end
