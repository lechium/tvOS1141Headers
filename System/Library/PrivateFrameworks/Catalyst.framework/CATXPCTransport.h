/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTransport.h>
#import <libobjc.A.dylib/CATXPCInterface.h>

@class NSXPCConnection, NSString;

@interface CATXPCTransport : CATTransport <CATXPCInterface> {

	NSXPCConnection* mConnection;
	BOOL mConnectionHasResumed;
	BOOL mConnectionShouldInvalidate;
	BOOL mConnectionHasInvalidated;

}

@property (readonly) int auditSessionIdentifier; 
@property (readonly) int processIdentifier; 
@property (readonly) unsigned effectiveUserIdentifier; 
@property (readonly) unsigned effectiveGroupIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(unsigned)effectiveUserIdentifier;
-(int)auditSessionIdentifier;
-(unsigned)effectiveGroupIdentifier;
-(void)suspendConnection;
-(void)resumeConnection;
-(id)initWithXPCConnection:(id)arg1 ;
-(id)valueForEntitlement:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(int)processIdentifier;
-(void)didInvalidate;
-(void)invalidateConnection;
-(id)operationToSendMessage:(id)arg1 ;
-(void)setUpConnection;
-(void)tearDownConnection;
-(void)processMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transportSendMessageOperation:(id)arg1 processMessage:(id)arg2 ;
-(BOOL)boolValueForEntitlement:(id)arg1 ;
@end

