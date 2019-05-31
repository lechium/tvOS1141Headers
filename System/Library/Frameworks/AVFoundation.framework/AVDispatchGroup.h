/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface AVDispatchGroup : NSObject {

	NSObject*<OS_dispatch_queue> _ivarAccessQueue;
	NSArray* _notifyBlocks;
	long long _outstandingOperations;

}
-(void)finalize;
-(void)enter;
-(void)leave;
-(void)notifyUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
@end
