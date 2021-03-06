/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray, NPEdgeSelection, NSString;

@interface NPNetworkInfo : NSObject <NSSecureCoding> {

	BOOL _isProbeInProgress;
	unsigned _lastFailureReason;
	NSDate* _lastVisited;
	NSDate* _lastUsed;
	NSArray* _edgeLatencies;
	NSArray* _currentLatencyMap;
	NSDate* _probeRateLimit;
	NPEdgeSelection* _edgeSelection;

}

@property (retain) NSArray * edgeLatencies;                      //@synthesize edgeLatencies=_edgeLatencies - In the implementation block
@property (retain) NSArray * currentLatencyMap;                  //@synthesize currentLatencyMap=_currentLatencyMap - In the implementation block
@property (retain) NSDate * probeRateLimit;                      //@synthesize probeRateLimit=_probeRateLimit - In the implementation block
@property (retain) NPEdgeSelection * edgeSelection;              //@synthesize edgeSelection=_edgeSelection - In the implementation block
@property (assign) BOOL isProbeInProgress;                       //@synthesize isProbeInProgress=_isProbeInProgress - In the implementation block
@property (retain) NSDate * lastVisited;                         //@synthesize lastVisited=_lastVisited - In the implementation block
@property (retain) NSDate * lastUsed;                            //@synthesize lastUsed=_lastUsed - In the implementation block
@property (readonly) NSString * lastVisitedDesc; 
@property (readonly) NSString * lastUsedDesc; 
@property (assign) unsigned lastFailureReason;                   //@synthesize lastFailureReason=_lastFailureReason - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)failureReasonToFallbackReason:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)lastUsed;
-(NSDate *)lastVisited;
-(NPEdgeSelection *)edgeSelection;
-(NSArray *)edgeLatencies;
-(NSDate *)probeRateLimit;
-(unsigned)lastFailureReason;
-(BOOL)isProbeInProgress;
-(NSArray *)currentLatencyMap;
-(void)setEdgeLatencies:(NSArray *)arg1 ;
-(BOOL)isLatency:(id)arg1 qualifiedForLatencyMap:(id)arg2 parameters:(networkParameters*)arg3 requireUniqueEdges:(BOOL)arg4 ;
-(void)setCurrentLatencyMap:(NSArray *)arg1 ;
-(long long)compareLastVisited:(id)arg1 ;
-(NSString *)lastVisitedDesc;
-(NSString *)lastUsedDesc;
-(void)resortEdgeLatenciesUsingComparator:(/*^block*/id)arg1 ;
-(void)rebuildLatencyMapWithViewSize:(id)arg1 edgeCount:(unsigned long long)arg2 parameters:(networkParameters*)arg3 ;
-(void)mergeNewLatencies:(id)arg1 usingComparator:(/*^block*/id)arg2 ;
-(void)handleTFOFailedForAddressFamily:(unsigned char)arg1 ;
-(void)setLastVisited:(NSDate *)arg1 ;
-(void)setLastUsed:(NSDate *)arg1 ;
-(void)setLastFailureReason:(unsigned)arg1 ;
-(void)setProbeRateLimit:(NSDate *)arg1 ;
-(void)setEdgeSelection:(NPEdgeSelection *)arg1 ;
-(void)setIsProbeInProgress:(BOOL)arg1 ;
@end

