/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVFigRoutingContextCommunicationChannelManager.h>

@protocol OS_dispatch_queue;
@class AVFigRoutingContextOutputContextImpl, AVOutputContextCommunicationChannel, NSObject, AVWeakReference, NSString;

@interface AVFigCommChannelUUIDCommunicationChannelManager : NSObject <AVFigRoutingContextCommunicationChannelManager> {

	AVFigRoutingContextOutputContextImpl* _parentOutputContextImpl;
	OpaqueFigRoutingContextRef _routingContext;
	NSObject*<OS_dispatch_queue> _ivarAccessQueue;
	CFStringRef _outgoingCommChannelUUID;
	CFDictionaryRef _communicationChannelsForUUIDs;
	AVWeakReference* _weakObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) AVFigRoutingContextOutputContextImpl * parentOutputContextImpl;                              //@synthesize parentOutputContextImpl=_parentOutputContextImpl - In the implementation block
@property (nonatomic,readonly) AVOutputContextCommunicationChannel * outgoingCommunicationChannel; 
-(AVOutputContextCommunicationChannel *)outgoingCommunicationChannel;
-(id)openCommunicationChannelWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)setParentOutputContextImpl:(AVFigRoutingContextOutputContextImpl *)arg1 ;
-(id)initWithRoutingContext:(OpaqueFigRoutingContextRef)arg1 ;
-(AVFigRoutingContextOutputContextImpl *)parentOutputContextImpl;
-(void)_didReceiveData:(CFDataRef)arg1 fromCommChannelUUID:(CFStringRef)arg2 ;
-(void)didCloseCommChannelUUID:(CFStringRef)arg1 ;
-(id)init;
-(void)dealloc;
@end

