/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDBatterySaverProtocol.h>

@class NSXPCConnection;

@interface _CDBatterySaver : NSObject <_CDBatterySaverProtocol> {

	NSXPCConnection* _connection;

}
+(id)sharedInstance;
+(id)batterySaver;
-(id)init;
-(void)dealloc;
-(long long)setMode:(long long)arg1 ;
-(void)setPowerMode:(long long)arg1 fromSource:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setPowerMode:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)setPowerMode:(long long)arg1 error:(id*)arg2 ;
-(long long)getPowerMode;
-(BOOL)setPowerMode:(long long)arg1 fromSource:(id)arg2 ;
@end

