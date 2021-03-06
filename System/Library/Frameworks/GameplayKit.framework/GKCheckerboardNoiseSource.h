/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKNoiseSource.h>

@interface GKCheckerboardNoiseSource : GKNoiseSource {

	double _squareSize;

}

@property (assign,nonatomic) double squareSize;              //@synthesize squareSize=_squareSize - In the implementation block
+(id)checkerboardNoiseWithSquareSize:(double)arg1 ;
-(id)init;
-(double)valueAt:;
-(id)cloneModule;
-(id)initWithSquareSize:(double)arg1 ;
-(void)setSquareSize:(double)arg1 ;
-(double)squareSize;
@end

