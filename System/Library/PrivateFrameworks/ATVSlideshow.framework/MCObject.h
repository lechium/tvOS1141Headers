/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCObjectBase.h>

@class MCMontage, NSString;

@interface MCObject : MCObjectBase {

	MCMontage* mMontage;
	NSString* mObjectID;

}

@property (nonatomic,readonly) NSString * objectID; 
@property (nonatomic,readonly) MCMontage * montage; 
+(id)objectWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)finalize;
-(void)dealloc;
-(id)snapshot;
-(NSString *)objectID;
-(BOOL)isSnapshot;
-(MCMontage *)montage;
-(void)demolish;
-(id)initFromScratchWithMontage:(id)arg1 ;
-(id)imprint;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(id)initSnapshot;
@end

