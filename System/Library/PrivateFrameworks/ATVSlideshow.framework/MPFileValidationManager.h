/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPFileValidationManager : NSObject
+(id)sharedManager;
+(void)releaseSharedManager;
-(BOOL)validateFiles:(id)arg1 allowAudio:(BOOL)arg2 allowImages:(BOOL)arg3 allowMovies:(BOOL)arg4 extensionsOnly:(BOOL)arg5 ;
-(void)checkFileExtension:(id)arg1 isAudio:(BOOL*)arg2 isImage:(BOOL*)arg3 isVideo:(BOOL*)arg4 ;
-(BOOL)validateFilesForAudio:(id)arg1 extensionsOnly:(BOOL)arg2 ;
-(BOOL)validateFilesForImages:(id)arg1 extensionsOnly:(BOOL)arg2 ;
-(BOOL)validateFilesForMovies:(id)arg1 extensionsOnly:(BOOL)arg2 ;
-(id)resolveAliasPath:(id)arg1 ;
@end

