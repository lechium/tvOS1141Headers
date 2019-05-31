/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DMXPCConnection;

@interface DMMigrationPluginWrapperConnection : NSObject {

	DMXPCConnection* _connection;

}
+(id)connection;
-(void)runPluginAtPath:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)invalidate;
-(void)resume;
-(void)handleMessage:(id)arg1 ;
-(int)pid;
@end
