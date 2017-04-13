//
//  MSTTools+File.h
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import "MSTTools.h"

@interface MSTTools (File)

/**
 获取 Documents 路径
 */
+ (NSString *)documentsPath;

/**
 获取 Home 路径
 */
+ (NSString *)homePath;

/**
 获取 Library 路径
 */
+ (NSString *)libraryPath;

/**
 获取 Cache 路径
 */
+ (NSString *)cachePath;

/**
 获取 Tmp 路径
 */
+ (NSString *)tmpPath;

/**
 根据文件名获取文件路径

 @param fileName 文件名
 @return 文件路径(Documents目录下)
 */
+ (NSString *)filePathWithName:(NSString *)fileName;

/**
 根据文件路径获取文件名

 @param path 文件路径
 @return 文件名
 */
+ (NSString *)fileNameWithPath:(NSString *)path;

/**
 根据文件路径获取文件名(不带后缀)

 @param path 文件路径
 @return 文件名(不带后缀)
 */
+ (NSString *)fileNameWithoutSuffixWithPath:(NSString *)path;

/**
 根据文件名称获取文件大小

 @param fileName 文件名(Documents目录下)
 @return 文件大小，返回 -1 则文件不存在
 */
+ (long long)fileLengthWithName:(NSString *)fileName;

/**
 根据文件路径获取文件大小

 @param path 文件路径
 @return 文件大小，返回 -1 则文件不存在
 */
+ (long long)fileLengthWithPath:(NSString *)path;

/**
 根据文件名称获取文件大小

 @param fileName 文件名(Documents目录下)
 @return 文件大小，返回 nil 则文件不存在
 */
+ (NSString *)fileSizeWithName:(NSString *)fileName;

/**
 根据文件路径获取文件大小

 @param path 文件路径
 @return 文件大小，返回 nil 则文件不存在
 */
+ (NSString *)fileSizeWithPath:(NSString *)path;

/**
 根据文件名称获取文件是否存在

 @param fileName 文件名称(Documents目录下)
 @return 是否存在
 */
+ (BOOL)fileExistWithName:(NSString*)fileName;

/**
 文件路径是否存在

 @param path 文件路径
 @return 是否存在
 */
+ (BOOL)fileExistWithPath:(NSString*)path;

/**
 根据文件名创建文件，如果存在则不创建

 @param fileName 文件名(Documents目录下)
 @return 文件路径，返回 nil 则创建失败
 */
+ (NSString *)createFileWithName:(NSString *)fileName;

/**
 根据文件路径创建文件，如果存在则不创建

 @param path 文件路径
 @return 是否创建成功
 */
+ (BOOL)createFileWithPath:(NSString *)path;

/**
 根据文件名删除文件

 @param fileName 文件名(Documents目录下)
 @return 是否删除成功
 */
+ (BOOL)deleteFileWithName:(NSString *)fileName;

/**
 根据文件路径删除文件

 @param path 文件路径
 @return 是否删除成功
 */
+ (BOOL)deleteFileWithPath:(NSString *)path;

/**
 删除指定文件夹中内容

 @param dirName 文件夹内容
 @return 是否删除成功
 */
+ (BOOL)deleteDirectoryContent:(NSString *)dirName;

/**
 根据文件名重命名

 @param oldName 原文件名(Documents目录下)
 @param newName 新文件名(Documents目录下)
 @return 是否重命名成功
 */
+ (BOOL)renameFileWithOldName:(NSString *)oldName newName:(NSString *)newName;

/**
 根据文件路径重命名

 @param oldPath 原文件路径
 @param newPath 新文件路径
 @return 是否重命名成功
 */
+ (BOOL)renameFileWithOldPath:(NSString *)oldPath newPath:(NSString *)newPath;

/**
 将字符串写到文件中

 @param fileName 文件名称
 @param content 字符串内容
 */
+ (BOOL)writeContentToFile:(NSString *)fileName content:(NSString *)content;


@end
