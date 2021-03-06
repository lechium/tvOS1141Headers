/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface __NSHostExtraIvars : NSObject {

	NSString* thingToResolve;
	int resolveType;
	NSObject*<OS_dispatch_queue> resolveQueue;
	NSObject*<OS_dispatch_queue> cacheAccessQueue;
	NSObject*<OS_dispatch_queue> callbackQueue;
	BOOL startedResolving;

}

@property (nonatomic,retain) NSString * thingToResolve; 
@property (assign,nonatomic) int resolveType; 
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> resolveQueue; 
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> cacheAccessQueue; 
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> callbackQueue; 
@property (assign) BOOL startedResolving; 
-(NSObject*<OS_dispatch_queue>)resolveQueue;
-(NSObject*<OS_dispatch_queue>)cacheAccessQueue;
-(int)resolveType;
-(void)setResolveType:(int)arg1 ;
-(NSString *)thingToResolve;
-(void)setThingToResolve:(NSString *)arg1 ;
-(BOOL)startedResolving;
-(void)setStartedResolving:(BOOL)arg1 ;
-(void)finalize;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)init;
-(void)dealloc;
-(void)cleanup;
@end

