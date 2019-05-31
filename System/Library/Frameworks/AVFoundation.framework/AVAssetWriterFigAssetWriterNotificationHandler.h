/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference;

@interface AVAssetWriterFigAssetWriterNotificationHandler : NSObject {

	OpaqueFigAssetWriterRef _figAssetWriter;
	int _didNotCallDelegate;
	AVWeakReference* _weakReferenceToSelf;
	AVWeakReference* _weakReferenceToDelegate;
	int _notificationHandlersAreRegistered;

}

@property (setter=_setWeakReferenceToDelegate:,getter=_weakReferenceToDelegate,retain) AVWeakReference * weakReferenceToDelegate;              //@synthesize weakReferenceToDelegate=_weakReferenceToDelegate - In the implementation block
@property (__weak) id<AVAssetWriterFigAssetWriterNotificationHandlerDelegate> delegate; 
-(void)finalize;
-(void)_handleServerDiedNotification;
-(id)_weakReferenceToDelegate;
-(void)_setWeakReferenceToDelegate:(id)arg1 ;
-(void)_teardownNotificationHandlers;
-(void)_callDelegateIfNotCalledWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 ;
-(void)_handleCompletedWritingNotification;
-(void)_handleFailedNotificationWithError:(id)arg1 ;
-(id<AVAssetWriterFigAssetWriterNotificationHandlerDelegate>)delegate;
-(void)setDelegate:(id<AVAssetWriterFigAssetWriterNotificationHandlerDelegate>)arg1 ;
-(void)dealloc;
@end

