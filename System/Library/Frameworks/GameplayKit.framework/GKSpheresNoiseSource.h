/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKNoiseSource.h>

@interface GKSpheresNoiseSource : GKNoiseSource {

	double _frequency;

}

@property (assign,nonatomic) double frequency;              //@synthesize frequency=_frequency - In the implementation block
+(id)spheresNoiseWithFrequency:(double)arg1 ;
-(id)init;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
-(id)initWithFrequency:(double)arg1 ;
-(double)valueAt:;
-(id)cloneModule;
@end

