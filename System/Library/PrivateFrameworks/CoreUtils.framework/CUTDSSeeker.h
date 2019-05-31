/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSObject, NSString;

@interface CUTDSSeeker : NSObject {

	NSMutableSet* _endpoints;
	BOOL _invalidateCalled;
	LogCategory* _ucat;
	BOOL _passive;
	int _dataLinkType;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _endpointFoundHandler;
	/*^block*/id _endpointLostHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSString* _serviceType;
	unsigned long long _tdsHashSeek;

}

@property (assign,nonatomic) unsigned long long tdsHashSeek;                          //@synthesize tdsHashSeek=_tdsHashSeek - In the implementation block
@property (assign,nonatomic) int dataLinkType;                                        //@synthesize dataLinkType=_dataLinkType - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id endpointFoundHandler;                                   //@synthesize endpointFoundHandler=_endpointFoundHandler - In the implementation block
@property (nonatomic,copy) id endpointLostHandler;                                    //@synthesize endpointLostHandler=_endpointLostHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL passive;                                            //@synthesize passive=_passive - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)_invalidate;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)endpointFoundHandler;
-(void)setEndpointFoundHandler:(id)arg1 ;
-(id)endpointLostHandler;
-(void)setEndpointLostHandler:(id)arg1 ;
-(int)dataLinkType;
-(void)setDataLinkType:(int)arg1 ;
-(void)updateEndpointsForDevices:(NSMutableDictionary*)arg1 ;
-(unsigned long long)tdsHashSeek;
-(BOOL)passive;
-(void)setTdsHashSeek:(unsigned long long)arg1 ;
-(void)setPassive:(BOOL)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
@end
