/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKCustomFeatureDataSource <NSObject>
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(id)annotationsInMapRect:(SCD_Struct_MK1)arg1;
-(BOOL)isClusteringEnabled;
-(id)clusterStyleAttributes;
-(void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;
-(void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;
-(unsigned char)sceneID;
-(unsigned char)sceneState;

@end

