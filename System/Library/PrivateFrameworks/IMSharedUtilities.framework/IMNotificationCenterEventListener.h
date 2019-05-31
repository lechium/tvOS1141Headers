/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMEventListener.h>

@class NSString;

@interface IMNotificationCenterEventListener : IMEventListener {

	NSString* _registeredNotificationName;
	NSString* _notificationName;
	id _notificationObject;

}

@property (nonatomic,readonly) NSString * registeredNotificationName;              //@synthesize registeredNotificationName=_registeredNotificationName - In the implementation block
@property (readonly) BOOL isRegisteredForNotification; 
@property (copy,readonly) NSString * notificationName;                             //@synthesize notificationName=_notificationName - In the implementation block
@property (__weak,readonly) id notificationObject;                                 //@synthesize notificationObject=_notificationObject - In the implementation block
+(id)eventListenerForNotificationName:(id)arg1 object:(id)arg2 ;
+(id)eventListenerForNotificationName:(id)arg1 ;
-(void)dealloc;
-(BOOL)isListening;
-(void)willStartListening;
-(void)willStopListening;
-(void)willReset;
-(void)registerForNotificationName:(id)arg1 object:(id)arg2 ;
-(void)registerForNotificationName:(id)arg1 ;
-(BOOL)isRegisteredForNotification;
-(NSString *)registeredNotificationName;
-(NSString *)notificationName;
-(void)_notification:(id)arg1 ;
-(id)notificationObject;
@end
