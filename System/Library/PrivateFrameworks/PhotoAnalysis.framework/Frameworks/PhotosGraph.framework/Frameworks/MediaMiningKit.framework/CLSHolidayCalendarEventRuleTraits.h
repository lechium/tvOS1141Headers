/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface CLSHolidayCalendarEventRuleTraits : NSObject {

	BOOL _containsMePerson;
	unsigned long long _numberOfPeople;
	unsigned long long _peopleTrait;
	unsigned long long _locationTrait;
	NSSet* _categories;

}

@property (assign,nonatomic) BOOL containsMePerson;                          //@synthesize containsMePerson=_containsMePerson - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPeople;              //@synthesize numberOfPeople=_numberOfPeople - In the implementation block
@property (assign,nonatomic) unsigned long long peopleTrait;                 //@synthesize peopleTrait=_peopleTrait - In the implementation block
@property (assign,nonatomic) unsigned long long locationTrait;               //@synthesize locationTrait=_locationTrait - In the implementation block
@property (nonatomic,retain) NSSet * categories;                             //@synthesize categories=_categories - In the implementation block
-(id)init;
-(NSSet *)categories;
-(void)setCategories:(NSSet *)arg1 ;
-(unsigned long long)locationTrait;
-(BOOL)containsMePerson;
-(unsigned long long)peopleTrait;
-(void)setNumberOfPeople:(unsigned long long)arg1 ;
-(void)setPeopleTrait:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPeople;
-(void)setLocationTrait:(unsigned long long)arg1 ;
-(void)setContainsMePerson:(BOOL)arg1 ;
@end

