/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface AFUIDebugCrashMoverService : NSObject {

	NSObject*<OS_xpc_object> _connection;

}

@property (getter=_connection,nonatomic,readonly) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
-(id)_connection;
-(const char*)_errorDescriptionForXPCObject:(id)arg1 ;
-(void)moveLogsWithExtensions:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

