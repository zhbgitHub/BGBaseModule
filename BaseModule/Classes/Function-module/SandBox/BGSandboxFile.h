//
//  BGSandboxFile.h
//  SanBoxFileDemo
//
//  Created by 张波 on 14-12-19.
//  Copyright (c) 2014年 张波. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BGSandboxFile : NSObject

/**
 获取程序的Home目录路径

 @return home.path(相对路径)
 */
+ (NSString *)GetHomeDirectoryPath;


/**
 获取document目录路径

 @return document.path
 */
+ (NSString *)GetDocumentPath;

/**
 获取Cache目录路径

 @return Cache.path
 */
+ (NSString *)GetCachePath;


/**
 获取Library目录路径

 @return Library.path
 */
+ (NSString *)GetLibraryPath;

/**
 获取Tmp目录路径

 @return temp.path
 */
+ (NSString *)GetTmpPath;

/**
 在List目录下 创建 文件夹Name

 @param List 除文件名之外的路径
 @param Name 文件名
 @return 文件的path
 */
+ (NSString *)CreateList:(NSString *)List ListName:(NSString *)Name;

/**
 写文件_array

 @param ArrarObject 待写入的 NSArray对象
 @param path 写入路径
 @return 是否写入成功:YES:成功
 */
+ (BOOL)WriteFileArray:(NSArray *)ArrarObject SpecifiedFile:(NSString *)path;

/**
 写文件_dictionary

 @param DictionaryObject 待写入的 dictionary对象
 @param path 写入路径
 @return 是否写入成功:YES:成功
 */
+ (BOOL)WriteFileDictionary:(NSMutableDictionary *)DictionaryObject SpecifiedFile:(NSString *)path;

//

/**
 xxPath下 是否 存在该文件

 @param filepath 路径
 @return 是否存在
 */
+ (BOOL)IsFileExists:(NSString *)filepath;


/**
 删除指定文件

 @param filepath 待删除文件的path
 */
+ (void)DeleteFile:(NSString *)filepath;


/**
 删除 document/dir 目录下 所有文件

 @param dir document/xx的路径
 */
+ (void)deleteAllForDocumentsDir:(NSString *)dir;


/**
 删除 document/dir 目录下有filePreName前缀的文件

 @param dir document/xx的路径
 @param filePreName filePreName前缀
 */
+ (void)deletefileForDocumentsDir:(NSString *)dir filePreName:(NSString *)filePreName;



/**
 获取目录列表里所有的文件名

 @param path path
 @return 所有路径NSArray<NSString *>
 */
+ (NSArray *)GetSubpathsAtPath:(NSString *)path;

//直接取文件数据
+ (NSData *)GetDataForResource:(NSString *)name inDir:(NSString *)type;
+ (NSData *)GetDataForDocuments:(NSString *)name inDir:(NSString *)dir;
+ (NSData *)GetDataForPath:(NSString *)path;

//获取文件路径
+ (NSString *)GetPathForCaches:(NSString *)filename;
+ (NSString *)GetPathForCaches:(NSString *)filename inDir:(NSString *)dir;

+ (NSString *)GetPathForDocuments:(NSString *)filename;
+ (NSString *)GetPathForDocuments:(NSString *)filename inDir:(NSString *)dir;

+ (NSString *)GetPathForResource:(NSString *)name;
+ (NSString *)GetPathForResource:(NSString *)name inDir:(NSString *)dir;

@end
