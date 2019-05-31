/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVML/CVMLClustering.h>

@class NSMutableArray, NSMutableDictionary;

@interface CVMLAgglomerativeClustering : NSObject <CVMLClustering> {

	NSMutableArray* distances_map;
	BOOL _debugMode;
	NSMutableDictionary* _faceIdsMapping;

}

@property (retain) NSMutableDictionary * faceIdsMapping;              //@synthesize faceIdsMapping=_faceIdsMapping - In the implementation block
@property (assign) BOOL debugMode;                                    //@synthesize debugMode=_debugMode - In the implementation block
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(BOOL)addFaceIds:(id)arg1 withSimilarityMatrix:(id)arg2 error:(id*)arg3 ;
-(void)_addFaceId:(id)arg1 withSimilarityMatrix:(id)arg2 ;
-(NSMutableDictionary *)faceIdsMapping;
-(void)setFaceIdsMapping:(NSMutableDictionary *)arg1 ;
-(id)suggestionsForClusterIdsWithFlags:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3 ;
-(id)getClustersWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)cancelClustering:(id*)arg1 ;
-(BOOL)addDescriptorIds:(id)arg1 withSimilarityMatrix:(id)arg2 error:(id*)arg3 ;
-(id)suggestionsForClusterIds:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3 ;
-(void)setDebugMode:(BOOL)arg1 ;
-(BOOL)debugMode;
@end

