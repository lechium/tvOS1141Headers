/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSStoragePathCache.h>

@interface PSStorageAppSizer : PSStoragePathCache
+(id)sharedSizer;
-(long long)staticSizeForApp:(id)arg1 ;
-(long long)dynamicSizeForApp:(id)arg1 ;
-(long long)purgeableSizeForApp:(id)arg1 ;
-(id)cachedSizeForPath:(id)arg1 ;
-(void)setCachedSize:(id)arg1 forPath:(id)arg2 ;
@end
