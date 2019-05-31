/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class APSConnection, NSData, NSObject, NSString;

@interface ApplePushNotificationHandler : NSObject <APSConnectionDelegate> {

	BOOL _apsEnabled;
	BOOL _apsDevEnvironment;
	APSConnection* _apsConnection;
	NSData* _apsToken;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) APSConnection * apsConnection;                     //@synthesize apsConnection=_apsConnection - In the implementation block
@property (nonatomic,readonly) NSData * apsToken;                               //@synthesize apsToken=_apsToken - In the implementation block
@property (nonatomic,readonly) BOOL apsEnabled;                                 //@synthesize apsEnabled=_apsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL apsDevEnvironment;                          //@synthesize apsDevEnvironment=_apsDevEnvironment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)deactivate;
+(void)activate;
+(BOOL)shouldEnableAPNS;
+(BOOL)_loadApplePushService;
+(void)_sanitizeLogPath;
+(id)stringFromData:(id)arg1 ;
+(id)apnsTokenString;
+(BOOL)apnsEnabled;
+(unsigned long long)currentEnvironment;
+(void)awdQueryMetric:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(APSConnection *)apsConnection;
-(void)setApsConnection:(APSConnection *)arg1 ;
-(NSData *)apsToken;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3 ;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2 ;
-(void)connectionDidReconnect:(id)arg1 ;
-(BOOL)apsEnabled;
-(void)_createApsConnection;
-(void)_shutdownApsConnection;
-(BOOL)apsDevEnvironment;
-(void)_parseUserInfo:(id)arg1 apnsIdentifier:(unsigned long long)arg2 ;
-(void)_parseAPSIncomingMessage:(id)arg1 ;
@end

