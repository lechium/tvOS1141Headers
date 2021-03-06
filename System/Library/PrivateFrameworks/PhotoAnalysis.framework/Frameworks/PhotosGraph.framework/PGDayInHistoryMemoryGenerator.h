/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGDayInHistoryMemoryGenerator : PGMemoryGenerator {

	NSDate* _localDate;

}

@property (nonatomic,retain) NSDate * localDate;              //@synthesize localDate=_localDate - In the implementation block
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(id)_potentialMemoriesForDryTesting;
-(NSDate *)localDate;
-(void)setLocalDate:(NSDate *)arg1 ;
@end

