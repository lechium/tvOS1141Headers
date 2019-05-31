/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CUTCheckpointSignpost.h>

@class NSDate;

@interface CUTCheckpointRange : CUTCheckpointSignpost {

	BOOL _ordered;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                           //@synthesize endDate=_endDate - In the implementation block
@property (assign,getter=isOrdered,nonatomic) BOOL ordered;              //@synthesize ordered=_ordered - In the implementation block
-(id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)_reportStartDate;
-(id)_reportEndDate;
-(void)mergeWithCheckpoint:(id)arg1 ;
-(void)_touchEndDate;
-(void)setOrdered:(BOOL)arg1 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(id)description;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(void)_touchStartDate;
-(BOOL)isOrdered;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
@end

