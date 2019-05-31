/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSString;

@interface MPFuture : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _finalized;
	id _result;
	id _error;
	NSObject*<OS_dispatch_queue> _lazyBlockQueue;
	/*^block*/id _lazySyncBlock;
	/*^block*/id _lazyAsyncBlock;
	NSMapTable* _successBlocks;
	NSMapTable* _failureBlocks;
	NSMapTable* _completionBlocks;
	BOOL _finished;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished;              //@synthesize finished=_finished - In the implementation block
+(id)calloutQueue;
+(id)futureWithName:(id)arg1 block:(/*^block*/id)arg2 queue:(id)arg3 ;
+(id)futureWithName:(id)arg1 asyncBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
+(id)futureWithName:(id)arg1 result:(id)arg2 ;
+(id)futureWithName:(id)arg1 error:(id)arg2 ;
+(id)futureWithName:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)futureWithName:(id)arg1 asyncBlock:(/*^block*/id)arg2 ;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(BOOL)isFinished;
-(id)onSuccess:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_loadResultIfNeeded;
-(id)onFailure:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)onCompletion:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)onCompletion:(/*^block*/id)arg1 ;
-(void)_onQueue_finalizeWithResult:(id)arg1 error:(id)arg2 ;
-(id)onSuccess:(/*^block*/id)arg1 ;
-(id)onFailure:(/*^block*/id)arg1 ;
-(id)result:(id*)arg1 ;
@end

