/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface UAResumableActivitiesControlManager : NSObject {

	int _pid;
	int _recordingPath;
	NSXPCConnection* connection;
	id _delegate;

}

@property (retain) NSXPCConnection * connection; 
@property (readonly) int serverPID; 
@property (assign) id delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign) int recordingPath;                         //@synthesize recordingPath=_recordingPath - In the implementation block
+(id)resumableActivitiesControlManager;
-(id)init;
-(id)delegate;
-(void)synchronize;
-(void)setDelegate:(id)arg1 ;
-(id)status;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)terminateServer;
-(void)startAdvertisingPingWithTimeInterval:(double)arg1 ;
-(void)stopAdvertisingPing;
-(void)getCurrentPeersAndClear:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)serverPID;
-(id)matchingUUIDForString:(id)arg1 ;
-(id)advertisedItemUUID;
-(id)allUUIDsOfType:(unsigned long long)arg1 ;
-(id)enabledUUIDs;
-(id)currentAdvertisedItemUUID;
-(id)debuggingInfo;
-(id)dynamicUserActivities;
-(id)recentActions:(BOOL)arg1 ;
-(id)simulatorStatus;
-(id)status:(id)arg1 options:(id)arg2 ;
-(id)defaults:(BOOL)arg1 ;
-(void)setDefault:(id)arg1 value:(id)arg2 ;
-(void)restartServer;
-(void)setDebugOption:(id)arg1 value:(id)arg2 ;
-(void)injectBTLEItem:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 title:(id)arg4 activityPayload:(id)arg5 frameworkPayload:(id)arg6 payloadDelay:(double)arg7 ;
-(void)callWillSaveDelegate:(id)arg1 ;
-(void)callWillSaveDelegate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)callDidSaveDelegate:(id)arg1 ;
-(void)broadcastPing:(/*^block*/id)arg1 ;
-(void)connectToRemote:(id)arg1 port:(long long)arg2 ;
-(void)rendevous:(id)arg1 domain:(id)arg2 active:(BOOL)arg3 ;
-(id)getSysdiagnoseStringsIncludingPrivateData:(BOOL)arg1 ;
-(void)replayCommands:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLocalReflect:(BOOL)arg1 ;
-(BOOL)getAdvertisedBytes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)recordingPath;
-(void)setRecordingPath:(int)arg1 ;
@end
