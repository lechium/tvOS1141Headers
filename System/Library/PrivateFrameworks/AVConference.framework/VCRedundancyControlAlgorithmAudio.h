/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCRedundancyControlAlgorithm.h>

@class NSString;

@interface VCRedundancyControlAlgorithmAudio : NSObject <VCRedundancyControlAlgorithm> {

	unsigned _redundancyPercentage;
	double _redundancyInterval;
	unsigned _packetLossPercentageIncreaseThresholds[3];
	unsigned _packetLossPercentageDecreaseThresholds[3];
	BOOL _isPacketLossIncreasing;
	unsigned _packetLossPercentage;
	unsigned _packetLossPercentageThreshold;
	unsigned _burstLossPacketCount;
	BOOL _isUplinkRecentlyCongested;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned redundancyPercentage;              //@synthesize redundancyPercentage=_redundancyPercentage - In the implementation block
@property (nonatomic,readonly) double redundancyInterval;                  //@synthesize redundancyInterval=_redundancyInterval - In the implementation block
-(id)init;
-(void)computeRedundancyInfo;
-(void)updateRedundancyStrategyWithNetworkStatistics:(SCD_Struct_AV10)arg1 ;
-(unsigned)redundancyPercentage;
-(double)redundancyInterval;
-(unsigned)updateRedundancyPercentageWithPLRThresholds:(unsigned*)arg1 ;
@end

