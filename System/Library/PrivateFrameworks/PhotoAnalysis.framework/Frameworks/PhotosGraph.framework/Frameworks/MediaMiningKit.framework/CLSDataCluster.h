/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CLSDataCluster : NSObject {

	NSArray* _objects;
	double _diameter;
	id _clustroid;
	double _score;

}

@property (nonatomic,retain) NSArray * objects;              //@synthesize objects=_objects - In the implementation block
@property (assign,nonatomic) double diameter;                //@synthesize diameter=_diameter - In the implementation block
@property (nonatomic,retain) id clustroid;                   //@synthesize clustroid=_clustroid - In the implementation block
@property (assign,nonatomic) double score;                   //@synthesize score=_score - In the implementation block
+(id)clusterWithObjects:(id)arg1 clustroid:(id)arg2 diameter:(double)arg3 ;
+(id)clusterWithObjects:(id)arg1 ;
-(double)score;
-(void)setScore:(double)arg1 ;
-(id)locations;
-(id)init;
-(id)description;
-(void)setObjects:(NSArray *)arg1 ;
-(id)dates;
-(double)diameter;
-(void)setDiameter:(double)arg1 ;
-(id)meanRegion:(double)arg1 ;
-(void)setClustroid:(id)arg1 ;
-(id)clustroid;
-(id)meanDate;
-(NSArray *)objects;
@end

