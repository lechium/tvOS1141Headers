/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSUUID, NSString;

@interface SFSessionCache : NSObject <NSSecureCoding> {

	BOOL _activated;
	BOOL _invalidated;
	NSMutableDictionary* _sessions;
	NSMutableDictionary* _timestamps;
	unsigned long long _capacity;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _errorHandler;
	NSUUID* _identifier;
	NSString* _serviceIdentifier;

}

@property (assign,nonatomic) unsigned long long capacity;                             //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;                              //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)init;
-(void)invalidate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSUUID *)identifier;
-(unsigned long long)capacity;
-(void)setCapacity:(unsigned long long)arg1 ;
-(void)activate;
-(id)activeSessions;
-(void)clearCache;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(void)_sessionWasInterrupted:(id)arg1 ;
-(void)_sessionWasInvalidated:(id)arg1 ;
-(BOOL)cacheFull;
-(void)_popCache;
-(void)_ensureStarted;
-(void)_ensureStopped;
-(id)_sessionWithDevice:(id)arg1 activate:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)sendRequestWithFlags:(unsigned)arg1 object:(id)arg2 responseHandler:(/*^block*/id)arg3 toDevice:(id)arg4 ;
-(void)sendWithFlags:(unsigned)arg1 object:(id)arg2 toDevice:(id)arg3 ;
-(id)sessionWithDevice:(id)arg1 activate:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)activePeerDeviceIDs;
-(NSString *)serviceIdentifier;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
@end

