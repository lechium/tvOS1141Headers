/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <libobjc.A.dylib/CLSInvestigationItem.h>

@class NSDate, CLLocation, NSArray, NSData, NSSet, NSDateComponents, NSString;

@interface CLSTestInvestigationItem : NSObject <CLSInvestigationItem> {

	BOOL _isUtility;
	BOOL _isBlurry;
	BOOL _isScreenshot;
	BOOL _isFavorite;
	BOOL _clsIsSDOF;
	BOOL _clsIsHDR;
	float _clsSharpnessScore;
	float _clsExposureScore;
	NSDate* _clsDate;
	CLLocation* _clsLocation;
	NSArray* _clsPeopleNames;
	long long _clsViewCount;
	long long _clsPlayCount;
	long long _clsShareCount;
	double _clsContentScore;
	NSData* _clsDistanceIdentity;
	NSSet* _clsSceneClassifications;
	NSArray* _clsUnprefetchedPeopleNames;

}

@property (nonatomic,retain) NSDate * clsDate;                                    //@synthesize clsDate=_clsDate - In the implementation block
@property (nonatomic,retain) CLLocation * clsLocation;                            //@synthesize clsLocation=_clsLocation - In the implementation block
@property (nonatomic,retain) NSArray * clsPeopleNames;                            //@synthesize clsPeopleNames=_clsPeopleNames - In the implementation block
@property (nonatomic,copy) NSSet * clsSceneClassifications;                       //@synthesize clsSceneClassifications=_clsSceneClassifications - In the implementation block
@property (nonatomic,readonly) long long clsViewCount;                            //@synthesize clsViewCount=_clsViewCount - In the implementation block
@property (nonatomic,readonly) long long clsPlayCount;                            //@synthesize clsPlayCount=_clsPlayCount - In the implementation block
@property (nonatomic,readonly) long long clsShareCount;                           //@synthesize clsShareCount=_clsShareCount - In the implementation block
@property (nonatomic,readonly) BOOL isUtility;                                    //@synthesize isUtility=_isUtility - In the implementation block
@property (nonatomic,readonly) NSDateComponents * dateComponents; 
@property (nonatomic,readonly) NSDate * universalDate; 
@property (nonatomic,readonly) NSDate * localDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * clsUnprefetchedPeopleNames;              //@synthesize clsUnprefetchedPeopleNames=_clsUnprefetchedPeopleNames - In the implementation block
@property (nonatomic,readonly) unsigned long long clsPeopleCount; 
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) NSArray * peopleNames; 
@property (nonatomic,readonly) double clsContentScore;                            //@synthesize clsContentScore=_clsContentScore - In the implementation block
@property (nonatomic,readonly) float clsExposureScore;                            //@synthesize clsExposureScore=_clsExposureScore - In the implementation block
@property (nonatomic,readonly) float clsSharpnessScore;                           //@synthesize clsSharpnessScore=_clsSharpnessScore - In the implementation block
@property (nonatomic,readonly) BOOL isScreenshot;                                 //@synthesize isScreenshot=_isScreenshot - In the implementation block
@property (nonatomic,readonly) BOOL isFavorite;                                   //@synthesize isFavorite=_isFavorite - In the implementation block
@property (nonatomic,readonly) BOOL isBlurry;                                     //@synthesize isBlurry=_isBlurry - In the implementation block
@property (nonatomic,readonly) BOOL clsIsSDOF;                                    //@synthesize clsIsSDOF=_clsIsSDOF - In the implementation block
@property (nonatomic,readonly) BOOL clsIsHDR;                                     //@synthesize clsIsHDR=_clsIsHDR - In the implementation block
@property (nonatomic,readonly) NSData * clsDistanceIdentity;                      //@synthesize clsDistanceIdentity=_clsDistanceIdentity - In the implementation block
+(id)itemWithPeopleNames:(id)arg1 universalDate:(id)arg2 coordinate:(CLLocationCoordinate2D)arg3 ;
+(id)itemWithUniversalDate:(id)arg1 sceneClassifications:(id)arg2 ;
+(id)contextForItems:(id)arg1 ;
-(NSDate *)date;
-(CLLocation *)location;
-(NSDateComponents *)dateComponents;
-(BOOL)isFavorite;
-(NSArray *)peopleNames;
-(BOOL)isScreenshot;
-(BOOL)clsIsSDOF;
-(BOOL)clsIsHDR;
-(void)setClsLocation:(CLLocation *)arg1 ;
-(void)setClsPeopleNames:(NSArray *)arg1 ;
-(void)setClsDate:(NSDate *)arg1 ;
-(void)setClsSceneClassifications:(NSSet *)arg1 ;
-(NSSet *)clsSceneClassifications;
-(NSDate *)localDate;
-(CLLocation *)clsLocation;
-(NSArray *)clsPeopleNames;
-(NSDate *)universalDate;
-(unsigned long long)clsPeopleCount;
-(double)scoreWithContext:(id)arg1 ;
-(NSArray *)clsUnprefetchedPeopleNames;
-(NSDate *)clsDate;
-(double)clsContentScore;
-(CGImageRef)createThumbnailWithResolution:(unsigned long long)arg1 fillMode:(BOOL)arg2 networkAllowed:(BOOL)arg3 ;
-(BOOL)isBlurry;
-(float)clsSharpnessScore;
-(float)clsExposureScore;
-(long long)clsViewCount;
-(long long)clsPlayCount;
-(long long)clsShareCount;
-(BOOL)isUtility;
-(NSData *)clsDistanceIdentity;
@end
