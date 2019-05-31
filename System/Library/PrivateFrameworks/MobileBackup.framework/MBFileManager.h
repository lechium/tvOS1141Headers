/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MBFileManager : NSObject
+(id)defaultManager;
-(id)fileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2 ;
-(id)directoryContentsAtPath:(id)arg1 ;
-(BOOL)createDirectoryAtPath:(id)arg1 attributes:(id)arg2 ;
-(BOOL)fileExistsAtPath:(id)arg1 ;
-(BOOL)removeFileAtPath:(id)arg1 ;
-(BOOL)copyPath:(id)arg1 toPath:(id)arg2 ;
-(BOOL)movePath:(id)arg1 toPath:(id)arg2 ;
@end
