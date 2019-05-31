/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFSpeechToken : NSObject <NSSecureCoding> {

	BOOL _removeSpaceBefore;
	BOOL _removeSpaceAfter;
	NSString* _text;
	NSString* _phoneSequence;
	long long _confidenceScore;
	double _startTime;
	double _silenceStartTime;
	double _endTime;

}

@property (nonatomic,copy) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * phoneSequence;                 //@synthesize phoneSequence=_phoneSequence - In the implementation block
@property (assign,nonatomic) long long confidenceScore;              //@synthesize confidenceScore=_confidenceScore - In the implementation block
@property (assign,nonatomic) double startTime;                       //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double silenceStartTime;                //@synthesize silenceStartTime=_silenceStartTime - In the implementation block
@property (assign,nonatomic) double endTime;                         //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) BOOL removeSpaceBefore;                 //@synthesize removeSpaceBefore=_removeSpaceBefore - In the implementation block
@property (assign,nonatomic) BOOL removeSpaceAfter;                  //@synthesize removeSpaceAfter=_removeSpaceAfter - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(void)setConfidenceScore:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setStartTime:(double)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(double)startTime;
-(BOOL)removeSpaceBefore;
-(BOOL)removeSpaceAfter;
-(long long)confidenceScore;
-(void)setRemoveSpaceBefore:(BOOL)arg1 ;
-(NSString *)phoneSequence;
-(void)setPhoneSequence:(NSString *)arg1 ;
-(void)setRemoveSpaceAfter:(BOOL)arg1 ;
-(double)silenceStartTime;
-(void)setSilenceStartTime:(double)arg1 ;
-(id)aceToken;
@end
