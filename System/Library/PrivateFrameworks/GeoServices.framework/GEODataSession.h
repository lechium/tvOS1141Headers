/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEODataSessionRulesProvider.h>
#import <libobjc.A.dylib/GEODataSession.h>

@protocol GEODataSession <NSObject>
@required
-(id)taskWithRequest:(id)arg1 rules:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;

@end


@protocol OS_dispatch_queue, GEODataSession;
@class NSObject, NSString, GEODataURLSession, GEODataXPCSession;

@interface GEODataSession : NSObject <GEODataSessionRulesProvider, GEODataSession> {

	NSObject*<OS_dispatch_queue> _sessionIsolation;
	id<GEODataSession> _urlSession;
	id<GEODataSession> _xpcSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sessionIsolation;              //@synthesize sessionIsolation=_sessionIsolation - In the implementation block
@property (nonatomic,readonly) GEODataURLSession * urlSession;                             //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,readonly) GEODataXPCSession * xpcSession;                             //@synthesize xpcSession=_xpcSession - In the implementation block
+(id)sharedDataSession;
-(id)taskWithRequest:(id)arg1 rules:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(id)initWithXPCSession:(id)arg1 urlSession:(id)arg2 ;
-(id)manifestManager;
-(NSObject*<OS_dispatch_queue>)sessionIsolation;
-(GEODataURLSession *)urlSession;
-(GEODataXPCSession *)xpcSession;
-(id)preferedRulesForRequest:(id)arg1 ;
-(BOOL)_rules_isOnlineAllowedForRequest:(id)arg1 ;
-(id)init;
@end

