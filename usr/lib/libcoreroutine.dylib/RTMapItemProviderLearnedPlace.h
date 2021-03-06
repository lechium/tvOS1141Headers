/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTMapItemProviderBase.h>
#import <libobjc.A.dylib/RTMapItemProvider.h>

@class RTLearnedLocationStore, NSString;

@interface RTMapItemProviderLearnedPlace : RTMapItemProviderBase <RTMapItemProvider> {

	RTLearnedLocationStore* _learnedLocationStore;

}

@property (nonatomic,retain) RTLearnedLocationStore * learnedLocationStore;              //@synthesize learnedLocationStore=_learnedLocationStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)mapItemsWithinDistance:(double)arg1 location:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 error:(id*)arg5 ;
-(RTLearnedLocationStore *)learnedLocationStore;
-(id)initWithLearnedLocationStore:(id)arg1 ;
-(void)setLearnedLocationStore:(RTLearnedLocationStore *)arg1 ;
@end

