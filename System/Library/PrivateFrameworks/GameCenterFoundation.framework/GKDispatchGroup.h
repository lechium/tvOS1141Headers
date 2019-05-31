/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSString, NSObject, GKThreadsafeDictionary, NSError;

@interface GKDispatchGroup : NSObject {

	NSString* _name;
	NSObject*<OS_dispatch_group> _group;
	GKThreadsafeDictionary* _values;
	NSError* _error;
	id result;
	int _sequence;
	BOOL _loggingEnabled;
	id _result;

}

@property (retain) NSError * error;                                                    //@synthesize error=_error - In the implementation block
@property (retain) id result;                                                          //@synthesize result=_result - In the implementation block
@property (assign,getter=isLoggingEnabled,nonatomic) BOOL loggingEnabled;              //@synthesize loggingEnabled=_loggingEnabled - In the implementation block
+(id)mainQueue;
+(void)waitUntilDone:(/*^block*/id)arg1 ;
+(id)defaultConcurrentQueue;
+(id)backgroundConcurrentQueue;
+(id)dispatchGroup;
+(id)dispatchGroupWithName:(id)arg1 ;
-(void)wait;
-(id)_values;
-(void)setResult:(id)arg1 ;
-(void)enter;
-(void)leave;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)allValues;
-(void)perform:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)result;
-(void)notifyOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_waitWithDispatchTimeout:(unsigned long long)arg1 ;
-(void)waitWithTimeout:(double)arg1 ;
-(void)join:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)isLoggingEnabled;
-(void)setLoggingEnabled:(BOOL)arg1 ;
-(void)notifyOnMainQueueWithBlock:(/*^block*/id)arg1 ;
@end
