/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKQuadtreeNode : NSObject {

	GKCQuadTreeNode<NSObject>* _cQuadTreeNode;
	GKQuad _quad;

}

@property (nonatomic,readonly) GKQuadRef quad;              //@synthesize quad=_quad - In the implementation block
-(GKQuadRef)quad;
-(void*)cQuadTreeNode;
-(void)setCQuadTreeNode:(void*)arg1 ;
-(1)min;
-(1)max;
@end
