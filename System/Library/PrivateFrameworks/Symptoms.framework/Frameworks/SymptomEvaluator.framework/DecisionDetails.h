/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSMutableArray, NSMutableDictionary;

@interface DecisionDetails : NSObject {

	NSDate* _timestamp;
	NSMutableArray* _evaluations;
	NSMutableDictionary* _additionalInfo;
	unsigned long long _reasonCode;
	char* _reason;

}

@property (nonatomic,retain) NSDate * timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * evaluations;                      //@synthesize evaluations=_evaluations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * additionalInfo;              //@synthesize additionalInfo=_additionalInfo - In the implementation block
@property (assign,nonatomic) unsigned long long reasonCode;                     //@synthesize reasonCode=_reasonCode - In the implementation block
@property (assign,nonatomic) char* reason;                                      //@synthesize reason=_reason - In the implementation block
-(void)setReasonCode:(unsigned long long)arg1 ;
-(unsigned long long)reasonCode;
-(void)dealloc;
-(id)description;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(char*)reason;
-(void)setReason:(char*)arg1 ;
-(id)initWithReason:(const char*)arg1 code:(unsigned long long)arg2 evaluations:(id)arg3 ;
-(NSMutableDictionary *)additionalInfo;
-(void)setAdditionalInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)evaluations;
-(void)setEvaluations:(NSMutableArray *)arg1 ;
@end

