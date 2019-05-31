/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVPlaybackProgress.h>

@class NSValueTransformer;

@interface TVDefiniteDurationPlaybackProgress : TVPlaybackProgress {

	double _elapsedTime;
	double _duration;
	NSValueTransformer* _valueTransformer;

}

@property (nonatomic,retain) NSValueTransformer * valueTransformer;              //@synthesize valueTransformer=_valueTransformer - In the implementation block
@property (assign,nonatomic) double elapsedTime;                                 //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) double duration;                                    //@synthesize duration=_duration - In the implementation block
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)elapsedTime;
-(void)setElapsedTime:(double)arg1 ;
-(NSValueTransformer *)valueTransformer;
-(void)setValueTransformer:(NSValueTransformer *)arg1 ;
-(void)_updateTitles;
@end
