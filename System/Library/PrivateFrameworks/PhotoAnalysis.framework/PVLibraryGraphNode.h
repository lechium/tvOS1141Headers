/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <KnowledgeGraphKit/MANode.h>
#import <libobjc.A.dylib/PVMomentProtocol.h>
#import <libobjc.A.dylib/PVFaceProtocol.h>
#import <libobjc.A.dylib/PVPersonProtocol.h>
#import <libobjc.A.dylib/PVAssetProtocol.h>

@class NSString, NSDate, NSData;

@interface PVLibraryGraphNode : MANode <PVMomentProtocol, PVFaceProtocol, PVPersonProtocol, PVAssetProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long estimatedAssetCount; 
@property (nonatomic,readonly) CLLocationCoordinate2D approximateCoordinate; 
@property (nonatomic,readonly) NSString * personLocalIdentifier; 
@property (nonatomic,readonly) double size; 
@property (nonatomic,readonly) double centerX; 
@property (nonatomic,readonly) double centerY; 
@property (nonatomic,readonly) long long clusterSequenceNumber; 
@property (nonatomic,readonly) NSData * faceprintData; 
@property (assign,nonatomic) long long qualityMeasure; 
@property (nonatomic,readonly) unsigned long long faceCount; 
@property (nonatomic,readonly) BOOL favorite; 
@property (nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) long long verifiedType; 
@property (assign,nonatomic) BOOL isVerified; 
@property (assign,nonatomic) long long manualOrder; 
@property (nonatomic,retain) id<PVFaceProtocol> keyFace; 
@property (nonatomic,readonly) NSString * cloudIdentifier; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) CLLocationCoordinate2D locationCoordinate; 
@property (nonatomic,readonly) NSData * distanceIdentity; 
@property (nonatomic,readonly) NSDate * clsDistanceIdentity; 
@property (readonly) NSString * localIdentifier; 
+(id)dateForTimeInterval:(double)arg1 ;
+(double)timeIntervalForDate:(id)arg1 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)setIsVerified:(BOOL)arg1 ;
-(BOOL)isVerified;
-(NSDate *)creationDate;
-(CLLocationCoordinate2D)locationCoordinate;
-(double)size;
-(NSString *)name;
-(unsigned long long)type;
-(BOOL)hidden;
-(BOOL)favorite;
-(void)setKeyFace:(id<PVFaceProtocol>)arg1 ;
-(long long)qualityMeasure;
-(long long)clusterSequenceNumber;
-(BOOL)isDirty;
-(void)setQualityMeasure:(long long)arg1 ;
-(NSString *)localIdentifier;
-(id<PVFaceProtocol>)keyFace;
-(unsigned long long)estimatedAssetCount;
-(NSString *)personLocalIdentifier;
-(double)centerX;
-(double)centerY;
-(long long)verifiedType;
-(unsigned long long)faceCount;
-(NSString *)cloudIdentifier;
-(NSData *)distanceIdentity;
-(void)setManualOrder:(long long)arg1 ;
-(long long)manualOrder;
-(NSData *)faceprintData;
-(unsigned long long)faceCountInFaceGroup;
-(CLLocationCoordinate2D)approximateCoordinate;
-(void)pv_addMergeCandidatePersons:(id)arg1 ;
-(NSDate *)clsDistanceIdentity;
@end

