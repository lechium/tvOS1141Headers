/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNManipulableItem.h>

@interface SCNNodeManipulableItem : SCNManipulableItem
+(void)removeItemsFromScene:(id)arg1 ;
+(void)addItems:(id)arg1 toScene:(id)arg2 ;
+(id)nodeManipulatorItemWithNode:(id)arg1 screenSize:(double)arg2 ;
-(SCNVector3)scale;
-(void)setPosition:(SCNVector3)arg1 ;
-(void)setTransform:(SCNMatrix4)arg1 ;
-(SCNMatrix4)transform;
-(id)parentItem;
-(SCNMatrix4)worldTransform;
-(void)validateClone;
-(id)cloneForManipulators;
-(BOOL)isNodeManipulator;
@end

