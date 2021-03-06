/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCAnimationPath.h>

@interface MCAnimationPathPhysics : MCAnimationPath {

	float _staticFriction;
	float _kineticFriction;
	float _skinFriction;

}

@property (assign,nonatomic) float staticFriction;               //@synthesize staticFriction=_staticFriction - In the implementation block
@property (assign,nonatomic) float kineticFriction;              //@synthesize kineticFriction=_kineticFriction - In the implementation block
@property (assign,nonatomic) float skinFriction;                 //@synthesize skinFriction=_skinFriction - In the implementation block
-(float)staticFriction;
-(void)setStaticFriction:(float)arg1 ;
-(float)kineticFriction;
-(void)setKineticFriction:(float)arg1 ;
-(float)skinFriction;
-(void)setSkinFriction:(float)arg1 ;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
@end

