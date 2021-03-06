/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSInputClue.h>

@class NSArray, NSSet, NSDate;

@interface CLSInputTimeClue : CLSInputClue {

	NSArray* _dateComponentsArray;
	NSArray* _events;
	NSSet* _localDates;
	NSDate* _localStartDate;
	NSDate* _localEndDate;
	NSSet* _universalDates;
	NSDate* _universalStartDate;
	NSDate* _universalEndDate;

}

@property (nonatomic,copy) NSArray * events;              //@synthesize events=_events - In the implementation block
+(id)clueWithDates:(id)arg1 ;
-(id)description;
-(double)timeInterval;
-(unsigned long long)numberOfDays;
-(id)localDates;
-(BOOL)isEqualToClue:(id)arg1 ;
-(id)_prepareOperation;
-(id)universalDates;
-(void)_computeDateProperties;
-(id)universalStartDate;
-(id)universalEndDate;
-(id)localEndDate;
-(id)localStartDate;
-(NSArray *)events;
-(void)setEvents:(NSArray *)arg1 ;
@end

