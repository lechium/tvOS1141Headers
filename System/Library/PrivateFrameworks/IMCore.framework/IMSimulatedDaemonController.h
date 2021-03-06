/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMDaemonController.h>

@class NSArray;

@interface IMSimulatedDaemonController : IMDaemonController {

	NSArray* _listeners;

}

@property (nonatomic,retain) NSArray * listeners;              //@synthesize listeners=_listeners - In the implementation block
+(id)sharedInstance;
+(id)dictionaryForChat:(id)arg1 ;
+(void)beginSimulatingDaemon;
-(BOOL)isConnected;
-(void)sendBalloonPayload:(id)arg1 attachments:(id)arg2 withMessageGUID:(id)arg3 bundleID:(id)arg4 ;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg1 ;
-(unsigned)capabilitiesForListenerID:(id)arg1 ;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned)arg2 blockUntilConnected:(BOOL)arg3 ;
-(NSArray *)listeners;
-(void)setListeners:(NSArray *)arg1 ;
@end

