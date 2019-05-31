/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MSVCallback : NSObject {

	id _block;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) id block;                                          //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)callbackWithQueue:(id)arg1 block:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)invoke;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)invokeWithObject:(id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)block;
@end

