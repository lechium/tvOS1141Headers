/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSystemState.framework/ATVSystemState
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SSILInterface;

@interface SSIndicatorLight : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	SSILInterface* _interface;

}
-(id)init;
-(void)dealloc;
-(void)setState:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
@end
