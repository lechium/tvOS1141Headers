/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIVectorOperatable;
@interface UIViewUpdateVelocityAnimationDescription : NSObject {

	id<UIVectorOperatable> _velocity;
	id<UIVectorOperatable> _targetVelocity;

}

@property (nonatomic,retain) id<UIVectorOperatable> velocity;                    //@synthesize velocity=_velocity - In the implementation block
@property (nonatomic,retain) id<UIVectorOperatable> targetVelocity;              //@synthesize targetVelocity=_targetVelocity - In the implementation block
+(id)descriptionWithVelocity:(id)arg1 targetVelocity:(id)arg2 ;
-(void)setVelocity:(id<UIVectorOperatable>)arg1 ;
-(id<UIVectorOperatable>)velocity;
-(id<UIVectorOperatable>)targetVelocity;
-(void)setTargetVelocity:(id<UIVectorOperatable>)arg1 ;
-(id)initWithVelocity:(id)arg1 targetVelocity:(id)arg2 ;
@end
