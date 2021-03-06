/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface HFNumberRange : NSObject {

	unsigned long long _type;
	NSNumber* _maxValue;
	NSNumber* _midValue;
	NSNumber* _minValue;

}

@property (nonatomic,copy) NSNumber * maxValue;                      //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,copy) NSNumber * midValue;                      //@synthesize midValue=_midValue - In the implementation block
@property (nonatomic,copy) NSNumber * minValue;                      //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)valueWithValue:(id)arg1 ;
+(id)rangeWithMaxValue:(id)arg1 minValue:(id)arg2 ;
-(id)description;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(NSNumber *)maxValue;
-(void)setMaxValue:(NSNumber *)arg1 ;
-(NSNumber *)minValue;
-(void)setMinValue:(NSNumber *)arg1 ;
-(void)setMidValue:(NSNumber *)arg1 ;
-(NSNumber *)midValue;
@end

