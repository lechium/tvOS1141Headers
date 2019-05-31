/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKOctree : NSObject {

	GKCOctree<NSObject>* _cOctree;

}
+(id)octreeWithBoundingBox:(GKBoxRef)arg1 minimumCellSize:(float)arg2 ;
-(BOOL)removeElement:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)addElement:(id)arg1 ;
-(id)elementsAtPoint:;
-(BOOL)removeElement:(id)arg1 withNode:(id)arg2 ;
-(id)initWithBoundingBox:(GKBoxRef)arg1 minimumCellSize:(float)arg2 ;
-(id)addElement:(id)arg1 withBox:(GKBoxRef)arg2 ;
-(id)elementsInBox:(GKBoxRef)arg1 ;
@end

