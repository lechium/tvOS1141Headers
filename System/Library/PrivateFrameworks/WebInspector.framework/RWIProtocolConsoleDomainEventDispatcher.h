/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolConsoleDomainEventDispatcher : NSObject {

	AugmentableInspectorController* _controller;

}
-(void)messageAddedWithMessage:(id)arg1 ;
-(void)messageRepeatCountUpdatedWithCount:(int)arg1 ;
-(void)messagesCleared;
-(void)heapSnapshotWithTimestamp:(double)arg1 snapshotData:(id)arg2 title:(id*)arg3 ;
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
@end
