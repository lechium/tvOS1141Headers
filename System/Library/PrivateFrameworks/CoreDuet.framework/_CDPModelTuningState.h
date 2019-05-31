/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _CDPModelTuningState : NSObject <NSSecureCoding> {

	int _i;
	int _j;
	float _bestLogLambda;
	float _bestW0;
	float _bestScore;
	float _bestThreshold;

}

@property (assign,i,nonatomic) int i;                          //@synthesize i=_i - In the implementation block
@property (assign,j,nonatomic) int j;                          //@synthesize j=_j - In the implementation block
@property (assign,nonatomic) float bestLogLambda;              //@synthesize bestLogLambda=_bestLogLambda - In the implementation block
@property (assign,nonatomic) float bestW0;                     //@synthesize bestW0=_bestW0 - In the implementation block
@property (assign,nonatomic) float bestScore;                  //@synthesize bestScore=_bestScore - In the implementation block
@property (assign,nonatomic) float bestThreshold;              //@synthesize bestThreshold=_bestThreshold - In the implementation block
@property (nonatomic,readonly) float progress; 
+(BOOL)supportsSecureCoding;
+(id)initialTuningState;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)progress;
-(void)setBestScore:(float)arg1 ;
-(void)setI:(int)arg1 ;
-(void)setJ:(int)arg1 ;
-(void)setBestLogLambda:(float)arg1 ;
-(void)setBestW0:(float)arg1 ;
-(void)setBestThreshold:(float)arg1 ;
-(int)i;
-(int)j;
-(float)bestLogLambda;
-(float)bestW0;
-(float)bestScore;
-(float)bestThreshold;
@end

