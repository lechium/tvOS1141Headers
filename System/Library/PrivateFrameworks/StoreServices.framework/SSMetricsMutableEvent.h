/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSMetricsEvent.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary, NSDictionary, NSNumber, NSString;

@interface SSMetricsMutableEvent : SSMetricsEvent <NSMutableCopying> {

	NSMutableDictionary* _mutableBody;
	BOOL _shouldSuppressUserInfo;
	BOOL _shouldSuppressDSIDHeader;

}

@property (nonatomic,copy,readonly) NSDictionary * bodyDictionary;              //@synthesize mutableBody=_mutableBody - In the implementation block
@property (nonatomic,retain) NSNumber * accountIdentifier; 
@property (nonatomic,retain) NSString * connection; 
@property (nonatomic,retain) NSString * eventType; 
@property (assign) double originalTime; 
@property (nonatomic,retain) NSString * topic; 
@property (nonatomic,retain) NSNumber * baseVersion; 
@property (nonatomic,retain) NSNumber * eventVersion; 
@property (nonatomic,retain) NSString * applicationIdentifier; 
@property (nonatomic,retain) NSNumber * clientVersion; 
@property (nonatomic,retain) NSString * hostApplicationIdentifier; 
@property (nonatomic,retain) NSNumber * previousClientVersion; 
@property (nonatomic,retain) NSString * userAgent; 
@property (assign,nonatomic) BOOL shouldSuppressUserInfo;                       //@synthesize shouldSuppressUserInfo=_shouldSuppressUserInfo - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressDSIDHeader;                     //@synthesize shouldSuppressDSIDHeader=_shouldSuppressDSIDHeader - In the implementation block
@property (nonatomic,retain) NSString * canaryIdentifier; 
-(void)setTopic:(NSString *)arg1 ;
-(void)setEventType:(NSString *)arg1 ;
-(NSString *)eventType;
-(id)init;
-(id)debugDescription;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)applicationIdentifier;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)connection;
-(void)setConnection:(NSString *)arg1 ;
-(void)setEventVersion:(NSNumber *)arg1 ;
-(id)propertyForBodyKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forBodyKey:(id)arg2 ;
-(id)initWithBodyDictionary:(id)arg1 ;
-(NSDictionary *)bodyDictionary;
-(BOOL)shouldSuppressUserInfo;
-(void)setShouldSuppressUserInfo:(BOOL)arg1 ;
-(id)decorateReportingURL:(id)arg1 ;
-(void)appendPropertiesToBody:(id)arg1 ;
-(BOOL)shouldSuppressDSIDHeader;
-(double)originalTime;
-(void)setOriginalTime:(double)arg1 ;
-(NSNumber *)baseVersion;
-(NSNumber *)eventVersion;
-(void)setBaseVersion:(NSNumber *)arg1 ;
-(NSNumber *)previousClientVersion;
-(void)setPreviousClientVersion:(NSNumber *)arg1 ;
-(NSString *)canaryIdentifier;
-(void)setCanaryIdentifier:(NSString *)arg1 ;
-(void)addPropertiesWithDictionary:(id)arg1 ;
-(void)setShouldSuppressDSIDHeader:(BOOL)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setOriginalTimeUsingDate:(id)arg1 ;
-(void)setClientVersion:(NSNumber *)arg1 ;
-(NSNumber *)clientVersion;
-(NSString *)userAgent;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)accountIdentifier;
-(NSString *)hostApplicationIdentifier;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)topic;
@end

