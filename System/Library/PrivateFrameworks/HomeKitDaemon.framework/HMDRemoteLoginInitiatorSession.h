/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol HomeKitEventRemoteLoginMetricProtocol;
@class NSString;

@interface HMDRemoteLoginInitiatorSession : HMFObject {

	NSString* _sessionID;
	id<HomeKitEventRemoteLoginMetricProtocol> _metric;

}

@property (nonatomic,readonly) NSString * sessionID;                                        //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) id<HomeKitEventRemoteLoginMetricProtocol> metric;              //@synthesize metric=_metric - In the implementation block
-(NSString *)sessionID;
-(void)dealloc;
-(id)description;
-(id)initWithSessionID:(id)arg1 ;
-(id<HomeKitEventRemoteLoginMetricProtocol>)metric;
-(void)setMetric:(id<HomeKitEventRemoteLoginMetricProtocol>)arg1 ;
@end

