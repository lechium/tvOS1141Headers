/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SLGLogClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface SLGLogXPCClient : NSObject <SLGLogClientProtocol> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)disconnect;
-(void)queryServer:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)connectWithCompletion:(/*^block*/id)arg1 ;
@end

