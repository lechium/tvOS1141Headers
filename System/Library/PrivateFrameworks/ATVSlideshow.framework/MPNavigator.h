/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/MPNavigatorSupportInternal.h>
#import <libobjc.A.dylib/MPActionableSupportInternal.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MPAnimationSupport.h>
#import <libobjc.A.dylib/MPNavigatorSupport.h>
#import <libobjc.A.dylib/MPActionSupport.h>
#import <libobjc.A.dylib/MPLayerableSupport.h>
#import <libobjc.A.dylib/MPActionableSupport.h>
#import <libobjc.A.dylib/MPGeometrySupport.h>
#import <libobjc.A.dylib/MPTimingSupport.h>

@class MPNavigatorInternal, NSMutableDictionary, MCPlug, MCContainerNavigator, NSString;

@interface MPNavigator : NSObject <MPNavigatorSupportInternal, MPActionableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPNavigatorSupport, MPActionSupport, MPLayerableSupport, MPActionableSupport, MPGeometrySupport, MPTimingSupport> {

	MPNavigatorInternal* _internal;
	NSMutableDictionary* _layers;
	NSMutableDictionary* _actions;
	MCPlug* _plug;
	MCContainerNavigator* _navigator;
	id _parent;
	NSMutableDictionary* _animationPaths;

}

@property (nonatomic,copy) NSString * initialLayer; 
-(void)finalize;
-(id)init;
-(double)scale;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(double)duration;
-(id)actions;
-(void)setDuration:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(id)layers;
-(id)actionForKey:(id)arg1 ;
-(void)setContainer:(id)arg1 ;
-(CGPoint)position;
-(void)setZPosition:(double)arg1 ;
-(void)setAction:(id)arg1 forKey:(id)arg2 ;
-(long long)zIndex;
-(id)parent;
-(void)cleanup;
-(id)uuid;
-(void)setZIndex:(long long)arg1 ;
-(double)zPosition;
-(void)removeActionForKey:(id)arg1 ;
-(void)setParent:(id)arg1 ;
-(id)objectID;
-(id)parentDocument;
-(id)actionableObjectForID:(id)arg1 ;
-(void)configureActions;
-(id)plugID;
-(void)copyActions:(id)arg1 ;
-(void)setTimeIn:(double)arg1 ;
-(void)setPhaseInDuration:(double)arg1 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(BOOL)isTriggered;
-(void)setIsTriggered:(BOOL)arg1 ;
-(id)animationPaths;
-(void)copyAnimationPaths:(id)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(void)copyStruct:(id)arg1 ;
-(void)setPlug:(id)arg1 ;
-(void)removeAllLayers;
-(id)navigatorKey;
-(void)setLayer:(id)arg1 forKey:(id)arg2 ;
-(void)reconnectAll;
-(double)numberOfLoops;
-(void)setNumberOfLoops:(double)arg1 ;
-(id)allSlides:(BOOL)arg1 ;
-(void)removeLayerForKey:(id)arg1 ;
-(id)layerForKey:(id)arg1 ;
-(id)plug;
-(id)allSongs;
-(double)xRotationAngle;
-(double)yRotationAngle;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(void)setXRotationAngle:(double)arg1 ;
-(void)setYRotationAngle:(double)arg1 ;
-(void)setStartsPaused:(BOOL)arg1 ;
-(double)timeIn;
-(BOOL)startsPaused;
-(id)layerKeyDictionary;
-(id)layerKey;
-(void)copyLayers:(id)arg1 ;
-(void)setInitialLayer:(NSString *)arg1 ;
-(NSString *)initialLayer;
@end

