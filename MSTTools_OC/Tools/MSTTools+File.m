//
//  MSTTools+File.m
//  MSTTools_OC
//
//  Created by 张宇豪 on 2017/4/13.
//  Copyright © 2017年 张宇豪. All rights reserved.
//

#import "MSTTools+File.h"

@implementation MSTTools (File)

+ (NSString *)documentsPath {
    return NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).firstObject;
}

+ (NSString *)homePath {
    return NSHomeDirectory();
}

+ (NSString *)libraryPath {
    return NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES).firstObject;
}

+ (NSString *)cachePath {
    return NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES).firstObject;
}

+ (NSString *)tmpPath {
    return NSTemporaryDirectory();
}

+ (NSString *)filePathWithName:(NSString *)fileName {
    NSString *documentDirectory = [self documentsPath];
    
    return [documentDirectory stringByAppendingPathComponent:fileName];
}

+ (NSString *)fileNameWithPath:(NSString *)path {
    NSArray *array = [path componentsSeparatedByString:@"/"];
    
    return array.lastObject;
}

+ (NSString *)fileNameWithoutSuffixWithPath:(NSString *)path {
    NSArray* array = [path componentsSeparatedByString:@"/"];
    
    if (array.count > 0) {
        NSString* name = array.lastObject;
        NSRange range = [name rangeOfString:@"."options:NSBackwardsSearch];
        
        if (range.location != NSNotFound)
            return [name componentsSeparatedByString:@"."].firstObject;
        else
            return name;
    }
    return nil;
}

+ (long long)fileLengthWithName:(NSString *)fileName {
    return [self fileLengthWithPath:[self filePathWithName:fileName]];
}

+ (long long)fileLengthWithPath:(NSString *)path {
    NSFileManager *fm = [NSFileManager defaultManager];
    
    if ([self fileExistWithPath:path])
        return [[fm attributesOfItemAtPath:path error:nil] fileSize];
    else
        return -1;
}

+ (NSString *)fileSizeWithName:(NSString *)fileName {
    return [self fileSizeWithPath:[self filePathWithName:fileName]];
}

+ (NSString *)fileSizeWithPath:(NSString *)path {
    if (![self fileExistWithPath:path])
        return nil;
    
    NSData *data = [NSData dataWithContentsOfFile:path options:NSDataReadingMappedAlways error:nil];
    
    return [NSByteCountFormatter stringFromByteCount:data.length countStyle:NSByteCountFormatterCountStyleFile];
}

+ (BOOL)fileExistWithName:(NSString *)fileName {
    return [self fileExistWithPath:[self filePathWithName:fileName]];
}

+ (BOOL)fileExistWithPath:(NSString *)path {
    NSFileManager *fm = [NSFileManager defaultManager];
    
    return [fm fileExistsAtPath:path];
}

+ (NSString *)createFileWithName:(NSString *)fileName {
    NSFileManager *fm = [NSFileManager defaultManager];
    NSString *path = [self filePathWithName:fileName];
    
    if([self fileExistWithName:fileName])
        return path;

    if ([fm createFileAtPath:path contents:nil attributes:nil])
        return path;
    else
        return nil;
}

+ (BOOL)createFileWithPath:(NSString *)path {
    NSFileManager *fm = [NSFileManager defaultManager];
    if([self fileExistWithPath:path])
        return YES;
    
    return [fm createFileAtPath:path contents:nil attributes:nil];
}

+ (BOOL)deleteFileWithName:(NSString *)fileName {
    return [self deleteFileWithPath:[self filePathWithName:fileName]];
}

+ (BOOL)deleteFileWithPath:(NSString *)path {
    NSFileManager *fm = [NSFileManager defaultManager];
    return [fm removeItemAtPath:path error:nil];
}

+ (BOOL)deleteDirectoryContent:(NSString *)dirName {
    NSFileManager *fm = [NSFileManager defaultManager];
    
    NSString *path = [self filePathWithName:dirName];
    NSArray* contents = [fm contentsOfDirectoryAtPath:path error:nil];
    
    NSEnumerator *e = [contents objectEnumerator];
    NSString *filename;
    
    while ((filename = [e nextObject])) {
        [self deleteFileWithPath:[path stringByAppendingString:[NSString stringWithFormat:@"/%@", filename]]];
    }
    
    return (filename != nil);
}

+ (BOOL)renameFileWithOldName:(NSString *)oldName newName:(NSString *)newName {
    return [self renameFileWithOldPath:[self filePathWithName:oldName] newPath:[self filePathWithName:newName]];
}

+ (BOOL)renameFileWithOldPath:(NSString *)oldPath newPath:(NSString *)newPath {
    if (![self fileExistWithPath:oldPath])
        return NO;

    if([self fileExistWithPath:newPath])
        [self deleteFileWithPath:newPath];

    NSFileManager *fm = [NSFileManager defaultManager];
    
    return [fm moveItemAtPath:oldPath toPath:newPath error:nil];
}

+ (BOOL)writeContentToFile:(NSString *)fileName content:(NSString *)content {
    NSString* path = [self createFileWithName:fileName];
    
    NSOutputStream * fos = [[NSOutputStream alloc] initToFileAtPath:path append:YES];
    [fos open];
    const char* cb = [content UTF8String];
    [fos write:(uint8_t*)cb maxLength:strlen(cb)];
    [fos close];
    
    return [self fileExistWithName:fileName];
}
@end
