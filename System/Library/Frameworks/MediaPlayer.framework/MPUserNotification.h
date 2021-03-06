/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSObject, NSMutableArray;

@interface MPUserNotification : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackInvocationQueue;
	/*^block*/id _willShowNotificationHandler;
	id strongSelf;
	BOOL _isShowing;
	CFRunLoopSourceRef _runLoopSource;
	NSMutableArray* _showingCompletionHandlers;
	CFUserNotificationRef _cfUserNotification;

}

@property (nonatomic,readonly) CFUserNotificationRef cfUserNotification;              //@synthesize cfUserNotification=_cfUserNotification - In the implementation block
@property (nonatomic,copy) id willShowNotificationHandler; 
+(void)_setUserNotification:(id)arg1 forCFUserNotification:(CFUserNotificationRef)arg2 ;
+(id)_userNotificationConversionAccessQueue;
+(id)_userNotificationForCFUserNotification:(CFUserNotificationRef)arg1 ;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(id)initWithCFUserNotification:(CFUserNotificationRef)arg1 ;
-(void)_cancelSynchronously:(BOOL)arg1 ;
-(id)willShowNotificationHandler;
-(void)setWillShowNotificationHandler:(id)arg1 ;
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_didReceiveResponseWithFlags:(unsigned long long)arg1 ;
-(CFUserNotificationRef)cfUserNotification;
@end

