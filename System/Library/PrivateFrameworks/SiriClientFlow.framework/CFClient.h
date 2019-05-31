/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFServiceHelper, OS_dispatch_queue;
@class CFCommandQueuer, NSObject;

@interface CFClient : NSObject {

	id<AFServiceHelper> _serviceHelper;
	CFCommandQueuer* _commandQueuer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) id<AFServiceHelper> serviceHelper;               //@synthesize serviceHelper=_serviceHelper - In the implementation block
@property (retain) CFCommandQueuer * commandQueuer;                 //@synthesize commandQueuer=_commandQueuer - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<AFServiceHelper>)serviceHelper;
-(void)setServiceHelper:(id<AFServiceHelper>)arg1 ;
-(CFCommandQueuer *)commandQueuer;
-(void)setCommandQueuer:(CFCommandQueuer *)arg1 ;
-(void)warmUpWithSignal:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)executeCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithServiceHelper:(id)arg1 withConnectionName:(id)arg2 ;
-(id)initWithClientLiteWithConnectionName:(id)arg1 ;
@end
