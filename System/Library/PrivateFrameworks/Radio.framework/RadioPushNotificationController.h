/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol RadioPushNotificationControllerDelegate;
@class APSConnection, NSString;

@interface RadioPushNotificationController : NSObject <APSConnectionDelegate> {

	APSConnection* _connection;
	id<RadioPushNotificationControllerDelegate> _delegate;
	NSString* _environment;
	BOOL _notificationsEnabled;
	BOOL _pushEnabled;

}

@property (assign,nonatomic,__weak) id<RadioPushNotificationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL notificationsEnabled;                                                //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<RadioPushNotificationControllerDelegate>)delegate;
-(void)setDelegate:(id<RadioPushNotificationControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)notificationsEnabled;
-(void)_loadURLBagWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(id)_portNameForEnvironmentName:(id)arg1 ;
@end

