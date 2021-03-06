/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MPAction.h>

@class NSString, NSMutableDictionary, NSDictionary;

@interface MPAnimationTrigger : MPAction {

	NSString* _animationKey;
	NSMutableDictionary* _animationAttributes;

}

@property (nonatomic,copy) NSString * animationKey;                         //@synthesize animationKey=_animationKey - In the implementation block
@property (nonatomic,copy) NSDictionary * animationAttributes;              //@synthesize animationAttributes=_animationAttributes - In the implementation block
+(id)animationTrigger;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAnimationAttributes:(NSDictionary *)arg1 ;
-(void)setAction:(id)arg1 ;
-(NSString *)animationKey;
-(void)setAnimationKey:(NSString *)arg1 ;
-(id)animationAttributeForKey:(id)arg1 ;
-(NSDictionary *)animationAttributes;
@end

