/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CKDCachePurger : NSObject {

	BOOL _purged;
	NSArray* _oldCacheDirs;

}

@property (assign,nonatomic) BOOL purged;                           //@synthesize purged=_purged - In the implementation block
@property (nonatomic,readonly) NSArray * oldCacheDirs;              //@synthesize oldCacheDirs=_oldCacheDirs - In the implementation block
+(id)enumerateOldCachesForApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerPath:(id)arg3 cachesPath:(id)arg4 ;
-(BOOL)purged;
-(void)setPurged:(BOOL)arg1 ;
-(NSArray *)oldCacheDirs;
-(id)initWithApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerPath:(id)arg3 cachePath:(id)arg4 ;
-(void)purgeOldCacheDirectories;
@end

