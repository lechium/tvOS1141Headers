/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIVisualEffect.h>

@class CAMeshTransform;

@interface _UIMeshEffect : UIVisualEffect {

	CAMeshTransform* _meshTransform;
	CAMeshTransform* _identityMeshTransform;
	BOOL _underlayMesh;

}
+(id)meshEffectZoom:(double)arg1 ;
+(id)_underlayMeshEffectZoom:(double)arg1 ;
-(void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2 ;
-(id)_viewEntry;
@end
