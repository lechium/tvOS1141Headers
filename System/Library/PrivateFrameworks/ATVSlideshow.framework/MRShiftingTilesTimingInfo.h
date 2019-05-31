/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSIndexSet, NSMutableArray;

@interface MRShiftingTilesTimingInfo : NSObject {

	BOOL fallLeft;
	long long fallDirection;
	BOOL isTop;
	NSArray* layouts;
	long long add;
	NSIndexSet* remove;
	long long slideIndex;
	NSMutableArray* additionalTimingInfo;
	double duration;

}

@property (nonatomic,retain) NSArray * layouts; 
@property (nonatomic,retain) NSIndexSet * remove; 
@property (nonatomic,retain) NSArray * additionalTimingInfo; 
-(NSArray *)layouts;
-(void)dealloc;
-(id)description;
-(NSIndexSet *)remove;
-(void)setLayouts:(NSArray *)arg1 ;
-(void)setRemove:(NSIndexSet *)arg1 ;
-(NSArray *)additionalTimingInfo;
-(void)setAdditionalTimingInfo:(NSArray *)arg1 ;
@end

