/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphNode, NSArray, NSDate, NSString;

@interface PGPotentialLocationMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphNode* _cityNode;
	long long _year;
	NSArray* _assetsInCity;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (readonly) PGGraphNode * cityNode;              //@synthesize cityNode=_cityNode - In the implementation block
@property (readonly) long long year;                      //@synthesize year=_year - In the implementation block
@property (readonly) NSString * city; 
@property (retain) NSArray * assetsInCity;                //@synthesize assetsInCity=_assetsInCity - In the implementation block
@property (retain) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                      //@synthesize endDate=_endDate - In the implementation block
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)city;
-(long long)year;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)addMomentNode:(id)arg1 ;
-(id)initWithCityNode:(id)arg1 year:(long long)arg2 ;
-(PGGraphNode *)cityNode;
-(void)setAssetsInCity:(NSArray *)arg1 ;
-(NSArray *)assetsInCity;
-(void)setEndDate:(NSDate *)arg1 ;
@end
