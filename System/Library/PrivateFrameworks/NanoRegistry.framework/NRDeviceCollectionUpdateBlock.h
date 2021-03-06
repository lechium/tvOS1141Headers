/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSNumber;

@interface NRDeviceCollectionUpdateBlock : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;
	NSNumber* _desiredIndex;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id block;                                          //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSNumber * desiredIndex;                         //@synthesize desiredIndex=_desiredIndex - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSNumber *)desiredIndex;
-(void)setDesiredIndex:(NSNumber *)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)block;
@end

