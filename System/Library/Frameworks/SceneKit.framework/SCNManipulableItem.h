/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNNode;

@interface SCNManipulableItem : NSObject {

	double _screenSize;
	SCNNode* node;
	id component;
	unsigned long long elementIndex;

}

@property (nonatomic,retain) SCNNode * node; 
@property (nonatomic,retain) id component; 
@property (assign,nonatomic) unsigned long long elementIndex; 
@property (assign,nonatomic) SCNMatrix4 transform; 
@property (nonatomic,readonly) SCNVector3 elementPosition; 
+(void)removeItemsFromScene:(id)arg1 ;
+(void)addItems:(id)arg1 toScene:(id)arg2 ;
-(id)component;
-(void)setComponent:(id)arg1 ;
-(SCNVector3)scale;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setPosition:(SCNVector3)arg1 ;
-(void)setTransform:(SCNMatrix4)arg1 ;
-(SCNMatrix4)transform;
-(SCNNode *)node;
-(void)setScreenSize:(double)arg1 ;
-(void)setNode:(SCNNode *)arg1 ;
-(id)parentItem;
-(double)screenSize;
-(SCNMatrix4)worldTransform;
-(void)validateClone;
-(id)cloneForManipulators;
-(unsigned long long)elementIndex;
-(BOOL)isNodeManipulator;
-(SCNVector3)elementPosition;
-(void)setElementIndex:(unsigned long long)arg1 ;
@end

