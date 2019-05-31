/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NEUserNotification : NSObject {

	BOOL _isBanner;
	id _notification;
	id _notificationSource;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _callback;

}

@property (assign) BOOL isBanner;                                           //@synthesize isBanner=_isBanner - In the implementation block
@property (retain) id notification;                                         //@synthesize notification=_notification - In the implementation block
@property (retain) id notificationSource;                                   //@synthesize notificationSource=_notificationSource - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,copy) id callback;                                     //@synthesize callback=_callback - In the implementation block
+(Class)getUIDeviceClass;
+(id)createLAContext;
+(BOOL)shouldPromptForLocalAuthentication;
+(void)promptForLocalAuthenticationWithReason:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)callback;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCallback:(id)arg1 ;
-(void)setNotification:(id)arg1 ;
-(void)cancel;
-(id)notification;
-(void)setNotificationSource:(id)arg1 ;
-(id)initBannerWithHeader:(id)arg1 message:(id)arg2 alternateMessage:(id)arg3 defaultMessage:(id)arg4 ;
-(BOOL)postNotificationWithCallbackQueue:(id)arg1 callbackHandler:(/*^block*/id)arg2 ;
-(void)setIsBanner:(BOOL)arg1 ;
-(id)notificationSource;
-(void)executeOnMainLoop:(/*^block*/id)arg1 ;
-(id)initAuthenticationWithHeader:(id)arg1 options:(id)arg2 flags:(unsigned long long)arg3 ;
-(id)initAddConfigurationsForApp:(id)arg1 warningHeader:(id)arg2 warning:(id)arg3 ;
-(BOOL)isBanner;
@end

