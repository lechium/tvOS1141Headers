/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <WeatherFoundation/WeatherFoundation-Structs.h>
@class NSObject, NSMutableDictionary;

@interface WFQueryDispatcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _queriesPendingResponse;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * queriesPendingResponse;              //@synthesize queriesPendingResponse=_queriesPendingResponse - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancelTaskWithIdentifier:(id)arg1 ;
-(void)invalidateCacheWithIdentifier:(id)arg1 ;
-(void)locationForString:(id)arg1 taskIdentifier:(id)arg2 results:(/*^block*/id)arg3 ;
-(void)locationForCoordinate:(CLLocationCoordinate2D)arg1 taskIdentifier:(id)arg2 results:(/*^block*/id)arg3 ;
-(void)locationForSearchCompletion:(id)arg1 taskIdentifier:(id)arg2 results:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)queriesPendingResponse;
-(void)removePendingQueryWithIdentifier:(id)arg1 ;
-(void)dispatchQuery:(id)arg1 ;
-(void)fetchFavoriteLocationsWithTaskIdentifier:(id)arg1 results:(/*^block*/id)arg2 ;
-(void)setQueriesPendingResponse:(NSMutableDictionary *)arg1 ;
@end
