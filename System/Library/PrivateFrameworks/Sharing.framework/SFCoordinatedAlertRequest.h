/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SFXPCInterface.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface SFCoordinatedAlertRequest : NSObject <NSSecureCoding, SFXPCInterface> {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	BOOL _started;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSXPCConnection* _xpcCnx;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	double _timeout;
	long long _type;

}

@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) double timeout;                                          //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) long long type;                                          //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(id)init;
-(void)invalidate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_start;
-(void)start;
-(void)_invalidate;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_invalidated;
-(void)_interrupted;
-(void)_ensureXPCStarted;
-(void)_timeoutFired;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
@end

