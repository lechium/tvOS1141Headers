/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <KnowledgeGraphKit/MAEdge.h>
#import <libobjc.A.dylib/PGGraphMeaningEdge.h>
#import <libobjc.A.dylib/PGGraphPOIEdge.h>
#import <libobjc.A.dylib/PGGraphPresentEdge.h>

@class NSString;

@interface PGGraphEdge : MAEdge <PGGraphMeaningEdge, PGGraphPOIEdge, PGGraphPresentEdge>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isReliable; 
@property (nonatomic,readonly) NSString * meaningLabel; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
-(id)name;
-(unsigned long long)numberOfAssets;
-(NSString *)meaningLabel;
-(BOOL)isReliable;
-(double)timestampUTCStart;
-(id)keywordDescription;
-(BOOL)poiIsSpecial;
-(BOOL)poiIsImproved;
-(CLLocationCoordinate2D)photoCoordinate;
@end
