//
//  MSTTools+Xml.m
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/21.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import "MSTTools+Xml.h"
#import "MSTMacro.h"

@implementation MSTTools (Xml)
+ (NSString *)createNode:(NSString *)nodeName with:(NSString *)nodeValue {
    if (kStrIsEmpty(nodeValue))
        nodeValue = @"";
    
    return [NSString stringWithFormat:@"<%@>%@</%@>", nodeName, nodeValue, nodeName];
}

+ (NSString *)createCDATANode:(NSString *)nodeName with:(NSString *)nodeValue {
    if (kStrIsEmpty(nodeValue))
        nodeValue = @"";
    
    return [NSString stringWithFormat:@"<%@><![CDATA[%@]]></%@>", nodeName, nodeValue, nodeName];
}

+ (NSString *)createAttrNode:(NSString *)nodeName withAttr:(NSString *)attr andAttrValue:(NSString *)value {
    if (kStrIsEmpty(value))
        value = @"";
    
    return [NSString stringWithFormat:@"<%@ %@='%@'/>", nodeName, attr, value];
}

+ (NSString *)createComplexNode:(NSString *)nodeName withValue:(NSString *)nodeValue withAttr:(NSString *)attr andAttrValue:(NSString *)value {
    if (kStrIsEmpty(value))
        value = @"";
    
    if (kStrIsEmpty(nodeValue))
        nodeValue = @"";
    
    return [NSString stringWithFormat:@"<%@ %@='%@'>%@</%@>", nodeName, attr, value, nodeValue, nodeName];
}


+ (NSString *)createCDATAComplexNode:(NSString *)nodeName withValue:(NSString *)nodeValue withAttr:(NSString *)attr andAttrValue:(NSString *)value {
    if (kStrIsEmpty(value))
        value = @"";
    
    if (kStrIsEmpty(nodeValue))
        nodeValue = @"";

    return [NSString stringWithFormat:@"<%@ %@='%@'><![CDATA[%@]]></%@>", nodeName, attr, value, nodeValue, nodeName];
}

+ (NSString *)createCDATAComplexNode:(NSString *)nodeName withValue:(NSString *)nodeValue {
    return [NSString stringWithFormat:@"<%@><![CDATA[%@]]></%@>", nodeName, nodeValue, nodeName];
}


+ (NSString *)createDComplexNode:(NSString *)nodeName withValue:(NSString *)nodeValue withAttr:(NSString *)attr andAttrValue:(NSString *)value attr2:(NSString *)attr2 attrValue2:(NSString *)attrValue2 {
    if (kStrIsEmpty(value))
        value = @"";
    
    if (kStrIsEmpty(attrValue2))
        attrValue2 = @"";
    
    if (kStrIsEmpty(nodeValue))
        nodeValue = @"";
    
    return [NSString stringWithFormat:@"<%@ %@='%@' %@='%@'>%@</%@>", nodeName, attr, value, attr2, attrValue2, nodeValue, nodeName];
}

+ (NSString *)createDCDATAComplexNode:(NSString *)nodeName withValue:(NSString *)nodeValue withAttr:(NSString *)attr andAttrValue:(NSString *)value attr2:(NSString *)attr2 attrValue2:(NSString *)attrValue2 {
    if (kStrIsEmpty(value))
        value = @"";
    
    if (kStrIsEmpty(attrValue2))
        attrValue2 = @"";
    
    if (kStrIsEmpty(nodeValue))
        nodeValue = @"";
    
    return [NSString stringWithFormat:@"<%@ %@='%@' %@='%@'><![CDATA[%@]]></%@>", nodeName, attr, value, attr2, attrValue2, nodeValue, nodeName];
}

+ (NSString *)createTComplexNode:(NSString *)nodeName withValue:(NSString *)nodeValue withAttr:(NSString *)attr andAttrValue:(NSString *)value attr2:(NSString *)attr2 attrValue2:(NSString *)attrValue2 attr3:(NSString *)attr3 attrValue3:(NSString *)attrValue3 {
    if (kStrIsEmpty(value))
        value = @"";
    
    if (kStrIsEmpty(attrValue2))
        attrValue2 = @"";

    if (kStrIsEmpty(attrValue3))
        attrValue3 = @"";

    if (kStrIsEmpty(nodeValue))
        nodeValue = @"";
    
    return [NSString stringWithFormat:@"<%@ %@='%@' %@='%@' %@='%@'>%@</%@>", nodeName, attr, value, attr2, attrValue2, attr3, attrValue3, nodeValue, nodeName];
}

+ (NSString *)createTCDATAComplexNode:(NSString *)nodeName withValue:(NSString *)nodeValue withAttr:(NSString *)attr andAttrValue:(NSString *)value attr2:(NSString *)attr2 attrValue2:(NSString *)attrValue2 attr3:(NSString *)attr3 attrValue3:(NSString *)attrValue3 {
    if (kStrIsEmpty(value))
        value = @"";
    
    if (kStrIsEmpty(attrValue2))
        attrValue2 = @"";

    if (kStrIsEmpty(attrValue3))
        attrValue3 = @"";
    
    if (kStrIsEmpty(nodeValue))
        nodeValue = @"";
    
    return [NSString stringWithFormat:@"<%@ %@='%@' %@='%@' %@='%@'><![CDATA[%@]]></%@>", nodeName, attr, value, attr2, attrValue2,  attr3, attrValue3, nodeValue, nodeName];
}

+ (NSString *)createNodePre:(NSString *)nodeName {
    return [NSString stringWithFormat:@"<%@>", nodeName];
}

+ (NSString *)createNodeSuf:(NSString *)nodeName {
    return [NSString stringWithFormat:@"</%@>", nodeName];
}
@end
