/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface BBSystemStateProvider : NSObject {

	NSXPCConnection* _connection;
	unsigned long long _currentState;

}
+(id)serverInterface;
+(id)clientInterface;
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(void)noteChangeOfState:(unsigned long long)arg1 newValue:(BOOL)arg2 ;
-(void)noteOccurrenceOfEvent:(unsigned long long)arg1 ;
-(void)_sendState:(unsigned long long)arg1 value:(BOOL)arg2 ;
@end

