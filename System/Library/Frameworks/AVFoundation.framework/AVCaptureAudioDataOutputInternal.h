/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVWeakReferencingDelegateStorage, NSObject;

@interface AVCaptureAudioDataOutputInternal : NSObject {

	AVWeakReference* weakReference;
	AVWeakReferencingDelegateStorage* delegateStorage;
	AVWeakReferencingDelegateStorage* delegateOverrideStorage;
	NSObject*<OS_dispatch_queue> bufferQueue;
	OpaqueFigSimpleMutexRef remoteQueueMutex;
	remoteQueueReceiverOpaqueRef remoteReceiverQueue;

}
-(id)init;
-(void)dealloc;
@end

