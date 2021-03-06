/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface PLMomentTemporalSnapshot : NSObject {

	NSMutableSet* __nodes;
	double __range;
	double __distance;

}

@property (nonatomic,readonly) NSMutableSet * nodes;              //@synthesize _nodes=__nodes - In the implementation block
@property (nonatomic,readonly) double range;                      //@synthesize _range=__range - In the implementation block
@property (nonatomic,readonly) double distance;                   //@synthesize _distance=__distance - In the implementation block
-(double)distance;
-(void)dealloc;
-(double)range;
-(NSMutableSet *)nodes;
-(id)initWithNodes:(id)arg1 inRange:(double)arg2 ;
@end

