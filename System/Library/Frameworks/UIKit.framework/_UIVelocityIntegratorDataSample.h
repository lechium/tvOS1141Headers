/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface _UIVelocityIntegratorDataSample : NSObject {

	double _timestamp;
	CGVector _translation;
	CGPoint _point;

}

@property (assign,nonatomic) double timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) CGVector translation;              //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) CGPoint point;                     //@synthesize point=_point - In the implementation block
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(CGVector)translation;
-(BOOL)isSampleDistinctEnoughFromTouchLocation:(CGPoint)arg1 minimumRequiredMovement:(double)arg2 ;
-(void)updateTimeToNow;
-(void)setTranslation:(CGVector)arg1 ;
@end

