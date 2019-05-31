/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLFileUtilities : NSObject
+(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)createDirectoryAtPath:(id)arg1 error:(id*)arg2 ;
+(id)fileManager;
+(BOOL)hasDiskSpaceToCopyFileAtURL:(id)arg1 ;
+(BOOL)changeFileOwnerToMobileAtPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)ingestItemAtURL:(id)arg1 toURL:(id)arg2 type:(long long)arg3 options:(unsigned long long)arg4 error:(id*)arg5 ;
+(BOOL)createDirectoryAtPath:(id)arg1 error:(id*)arg2 usingFileManager:(id)arg3 ;
+(BOOL)secureMoveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(id)realPathForPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)cloneFileAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
+(BOOL)stripExtendedAttributesFromFileAtURL:(id)arg1 inDomain:(id)arg2 error:(id*)arg3 ;
+(id)descriptionForFileIngestionType:(long long)arg1 ;
+(id)_mobileOwnerAttributes;
+(BOOL)changeFileOwnerToMobileAtPath:(id)arg1 error:(id*)arg2 usingFileManager:(id)arg3 ;
+(BOOL)supportsClone;
+(BOOL)filePath:(id)arg1 hasPrefix:(id)arg2 ;
@end

