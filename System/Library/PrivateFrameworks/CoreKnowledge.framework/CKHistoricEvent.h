/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSDictionary;

@interface CKHistoricEvent : NSObject <NSCopying, NSSecureCoding> {

	 identifier;
	 _firstSeen;
	 _lastSeen;
	 _frequency;
	 _lastDuration;
	 _totalDuration;
	 _metadata;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (copy,nonatomic) NSDate * _firstSeen;                      //@synthesize firstSeen=_firstSeen - In the implementation block
@property (copy,nonatomic) NSDate * _lastSeen;                       //@synthesize lastSeen=_lastSeen - In the implementation block
@property (assign,nonatomic) long long _frequency;                   //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) double _lastDuration;                   //@synthesize lastDuration=_lastDuration - In the implementation block
@property (assign,nonatomic) double _totalDuration;                  //@synthesize totalDuration=_totalDuration - In the implementation block
@property (copy,nonatomic) NSDictionary * _metadata;                 //@synthesize metadata=_metadata - In the implementation block
@property (readonly,nonatomic) NSDate * firstSeen; 
@property (readonly,nonatomic) NSDate * lastSeen; 
@property (readonly,nonatomic) long long frequency; 
@property (readonly,nonatomic) double lastDuration; 
@property (readonly,nonatomic) double totalDuration; 
@property (readonly,nonatomic) NSDictionary * metadata; 
+(BOOL)supportsSecureCoding;
+(id)dateFormat;
+(id)EventIdSeparator;
+(id)identifierWithPrefix:(id)arg1 intent:(id)arg2 error:(id*)arg3 ;
-(id)init:(id)arg1 ;
-(NSDictionary *)metadata;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(void*)arg1 ;
-(long long)frequency;
-(long long)_frequency;
-(double)totalDuration;
-(NSDate *)lastSeen;
-(NSDictionary *)_metadata;
-(NSDate *)_firstSeen;
-(void)set_firstSeen:(NSDate *)arg1 ;
-(NSDate *)_lastSeen;
-(void)set_lastSeen:(NSDate *)arg1 ;
-(void)set_frequency:(long long)arg1 ;
-(double)_lastDuration;
-(void)set_lastDuration:(double)arg1 ;
-(double)_totalDuration;
-(void)set_totalDuration:(double)arg1 ;
-(void)set_metadata:(NSDictionary *)arg1 ;
-(NSDate *)firstSeen;
-(double)lastDuration;
-(id)initWithIdentifier:(id)arg1 firstSeen:(id)arg2 lastSeen:(id)arg3 frequency:(long long)arg4 lastDuration:(double)arg5 totalDuration:(double)arg6 metadata:(id)arg7 ;
-(id)initFrom:(id)arg1 withIdentifier:(id)arg2 ;
@end

