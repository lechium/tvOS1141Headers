/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface CLSCalendarEventsCache : NSObject {

	NSMutableSet* _years;

}

@property (nonatomic,readonly) NSMutableSet * years;              //@synthesize years=_years - In the implementation block
-(id)init;
-(id)debugDescription;
-(void)insertEvent:(id)arg1 ;
-(void)enumerateEventsFromStartDate:(id)arg1 toEndDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)_storeDayForDate:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)_enumerateDaysFromStartDate:(id)arg1 toEndDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)eventsForDate:(id)arg1 ;
-(id)eventsForStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)hasEventsFromStartDate:(id)arg1 toEndDate:(id)arg2 ;
-(NSMutableSet *)years;
@end

