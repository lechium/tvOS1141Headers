/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCacheDelegate.h>

@class NSMapTable, NSLock, NSString;

@interface PHSafeNSCacheDelegateReflector : NSObject <NSCacheDelegate> {

	NSMapTable* _delegegatesByCache;
	NSLock* _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setDelegate:(id)arg1 forCache:(id)arg2 ;
+(void)removeDelegateForCache:(id)arg1 ;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id)arg1 forCache:(id)arg2 ;
-(void)removeDelegateForCache:(id)arg1 ;
@end
