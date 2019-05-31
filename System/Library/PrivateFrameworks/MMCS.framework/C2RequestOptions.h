/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MMCS/MMCS-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSURL;

@interface C2RequestOptions : NSObject <NSCopying> {

	unsigned char _outOfProcess;
	unsigned char _outOfProcessDiscretionary;
	unsigned char __allowsExpensiveAccess;
	unsigned char __allowsPowerNapScheduling;
	unsigned char _tlsPinning;
	unsigned char _metricRequest;
	long long _qualityOfService;
	NSString* _outOfProcessPoolName;
	double __timeoutIntervalForRequest;
	double __timeoutIntervalForResource;
	NSString* __sourceApplicationBundleIdentifier;
	NSString* __sourceApplicationSecondaryIdentifier;
	NSString* __appleIDContextSessionIdentifier;
	NSString* _identifier;
	NSDictionary* _resolvedEndpointsWithHostname;
	NSURL* _c2MetricsEndpoint;
	unsigned long long _c2MetricsReportFrequency;
	unsigned long long _c2MetricsReportFrequencyBase;

}

@property (nonatomic,readonly) double emptySessionExpiryInSeconds; 
@property (assign,nonatomic) unsigned char metricRequest;                                  //@synthesize metricRequest=_metricRequest - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                   //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) unsigned char outOfProcess;                                   //@synthesize outOfProcess=_outOfProcess - In the implementation block
@property (assign,nonatomic) unsigned char outOfProcessDiscretionary;                      //@synthesize outOfProcessDiscretionary=_outOfProcessDiscretionary - In the implementation block
@property (nonatomic,copy) NSString * outOfProcessPoolName;                                //@synthesize outOfProcessPoolName=_outOfProcessPoolName - In the implementation block
@property (assign,nonatomic) unsigned char _allowsExpensiveAccess;                         //@synthesize _allowsExpensiveAccess=__allowsExpensiveAccess - In the implementation block
@property (assign,nonatomic) unsigned char _allowsPowerNapScheduling;                      //@synthesize _allowsPowerNapScheduling=__allowsPowerNapScheduling - In the implementation block
@property (assign,nonatomic) double _timeoutIntervalForRequest;                            //@synthesize _timeoutIntervalForRequest=__timeoutIntervalForRequest - In the implementation block
@property (assign,nonatomic) double _timeoutIntervalForResource;                           //@synthesize _timeoutIntervalForResource=__timeoutIntervalForResource - In the implementation block
@property (nonatomic,copy) NSString * _sourceApplicationBundleIdentifier;                  //@synthesize _sourceApplicationBundleIdentifier=__sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * _sourceApplicationSecondaryIdentifier;               //@synthesize _sourceApplicationSecondaryIdentifier=__sourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,copy) NSString * _appleIDContextSessionIdentifier;                    //@synthesize _appleIDContextSessionIdentifier=__appleIDContextSessionIdentifier - In the implementation block
@property (assign,nonatomic) unsigned char tlsPinning;                                     //@synthesize tlsPinning=_tlsPinning - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDictionary * resolvedEndpointsWithHostname;                 //@synthesize resolvedEndpointsWithHostname=_resolvedEndpointsWithHostname - In the implementation block
@property (nonatomic,copy) NSURL * c2MetricsEndpoint;                                      //@synthesize c2MetricsEndpoint=_c2MetricsEndpoint - In the implementation block
@property (assign,nonatomic) unsigned long long c2MetricsReportFrequency;                  //@synthesize c2MetricsReportFrequency=_c2MetricsReportFrequency - In the implementation block
@property (assign,nonatomic) unsigned long long c2MetricsReportFrequencyBase;              //@synthesize c2MetricsReportFrequencyBase=_c2MetricsReportFrequencyBase - In the implementation block
+(id)stringForQualityOfService:(long long)arg1 ;
+(unsigned char)triesteMetricsEnabled;
+(double)defaultEmptySessionExpiryInSeconds;
-(double)_timeoutIntervalForResource;
-(unsigned char)_allowsExpensiveAccess;
-(unsigned char)_allowsPowerNapScheduling;
-(NSString *)_sourceApplicationBundleIdentifier;
-(id)defaultSessionConfiguration;
-(void)set_sourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(id)init;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(id)sessionConfigurationName;
-(NSDictionary *)resolvedEndpointsWithHostname;
-(double)emptySessionExpiryInSeconds;
-(id)copyAndDecorateRequest:(id)arg1 ;
-(unsigned char)tlsPinning;
-(id)decorateTask:(id)arg1 ;
-(unsigned char)outOfProcessDiscretionary;
-(NSString *)outOfProcessPoolName;
-(double)_timeoutIntervalForRequest;
-(NSString *)_appleIDContextSessionIdentifier;
-(unsigned char)metricRequest;
-(void)setResolvedEndpointsWithHostname:(NSDictionary *)arg1 ;
-(void)setMetricRequest:(unsigned char)arg1 ;
-(unsigned char)outOfProcess;
-(id)sessionConfiguration;
-(void)set_sourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(NSString *)_sourceApplicationSecondaryIdentifier;
-(unsigned long long)c2MetricsReportFrequency;
-(unsigned long long)c2MetricsReportFrequencyBase;
-(void)setOutOfProcess:(unsigned char)arg1 ;
-(void)setOutOfProcessDiscretionary:(unsigned char)arg1 ;
-(void)setOutOfProcessPoolName:(NSString *)arg1 ;
-(void)set_allowsExpensiveAccess:(unsigned char)arg1 ;
-(void)set_allowsPowerNapScheduling:(unsigned char)arg1 ;
-(void)set_timeoutIntervalForRequest:(double)arg1 ;
-(void)set_timeoutIntervalForResource:(double)arg1 ;
-(void)set_appleIDContextSessionIdentifier:(NSString *)arg1 ;
-(void)setTlsPinning:(unsigned char)arg1 ;
-(void)setC2MetricsEndpoint:(NSURL *)arg1 ;
-(void)setC2MetricsReportFrequency:(unsigned long long)arg1 ;
-(void)setC2MetricsReportFrequencyBase:(unsigned long long)arg1 ;
-(NSURL *)c2MetricsEndpoint;
-(long long)qualityOfService;
@end

