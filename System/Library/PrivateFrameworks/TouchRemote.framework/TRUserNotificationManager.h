/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _TRUserNotification;

@interface TRUserNotificationManager : NSObject {

	_TRUserNotification* _activeUserNotification;

}

@property (nonatomic,retain) _TRUserNotification * activeUserNotification;              //@synthesize activeUserNotification=_activeUserNotification - In the implementation block
+(id)sharedInstance;
-(void)cancel;
-(void)dealloc;
-(void)setActiveUserNotification:(_TRUserNotification *)arg1 ;
-(_TRUserNotification *)activeUserNotification;
-(void)_showUserNotificationWithDictionary:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestAuthenticationWithAccountID:(id)arg1 message:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestAppleIDAuthenticationWithAccountID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentErrorWithTitle:(id)arg1 message:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestPermissionToInitiateSetupWithCompletion:(/*^block*/id)arg1 ;
-(void)presentAuthenticationFailureWithMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestPermissionForDiagnosticSubmissionWithCompletion:(/*^block*/id)arg1 ;
-(void)presentWiFiNetworkConnectionError:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestLegacyAuthenticationWithAccountID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentLegacyAuthenticationFailedDialogWithMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

