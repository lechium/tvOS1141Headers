/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface RateLimitAllowance : NSObject {

	NSDate* _lastCheckedAt;
	double _allowance;

}

@property (nonatomic,retain) NSDate * lastCheckedAt;              //@synthesize lastCheckedAt=_lastCheckedAt - In the implementation block
@property (assign,nonatomic) double allowance;                    //@synthesize allowance=_allowance - In the implementation block
-(NSDate *)lastCheckedAt;
-(void)setLastCheckedAt:(NSDate *)arg1 ;
-(double)allowance;
-(void)setAllowance:(double)arg1 ;
@end

