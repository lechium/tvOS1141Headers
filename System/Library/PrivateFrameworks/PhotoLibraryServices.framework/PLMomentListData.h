/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSData, NSOrderedSet, NSArray;


@protocol PLMomentListData <PLMomentRefreshable>
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSDate * representativeDate; 
@property (assign,nonatomic) short granularityLevel; 
@property (nonatomic,retain,readonly) NSObject*<NSCopying> uniqueObjectID; 
@property (assign,nonatomic) int sortIndex; 
@property (nonatomic,retain) NSData * reverseLocationData; 
@property (assign,nonatomic) BOOL reverseLocationDataIsValid; 
@property (assign,nonatomic) BOOL reverseLocationDataContainsLocation; 
@property (assign,nonatomic) short generationType; 
@property (nonatomic,retain) NSOrderedSet * moments; 
@property (nonatomic,retain,readonly) NSArray * batchedMoments; 
@property (nonatomic,retain) NSArray * userTitles; 
@optional
-(id)momentListDebugDescription;

@required
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)delete;
-(NSData *)reverseLocationData;
-(void)setReverseLocationData:(id)arg1;
-(BOOL)reverseLocationDataIsValid;
-(void)setReverseLocationDataIsValid:(BOOL)arg1;
-(NSObject*<NSCopying>)uniqueObjectID;
-(void)setReverseLocationDataContainsLocation:(BOOL)arg1;
-(NSArray *)batchedMoments;
-(void)setGranularityLevel:(short)arg1;
-(void)removeMoments:(id)arg1;
-(void)addMoments:(id)arg1;
-(void)setSortIndex:(int)arg1;
-(short)generationType;
-(void)addMomentToFront:(id)arg1;
-(void)setStartDate:(id)arg1;
-(void)setRepresentativeDate:(id)arg1;
-(void)setGenerationType:(short)arg1;
-(NSOrderedSet *)moments;
-(short)granularityLevel;
-(void)setMoments:(id)arg1;
-(int)sortIndex;
-(void)setUserTitles:(id)arg1;
-(NSArray *)userTitles;
-(BOOL)reverseLocationDataContainsLocation;
-(NSDate *)representativeDate;
-(void)setEndDate:(id)arg1;
-(BOOL)isDeleted;

@end

