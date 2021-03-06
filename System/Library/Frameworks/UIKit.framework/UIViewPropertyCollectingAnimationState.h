/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewInProcessAnimationState.h>

@class _UICompoundObjectMap;

@interface UIViewPropertyCollectingAnimationState : UIViewInProcessAnimationState {

	_UICompoundObjectMap* _capturedProperties;

}

@property (nonatomic,retain) _UICompoundObjectMap * capturedProperties;              //@synthesize capturedProperties=_capturedProperties - In the implementation block
-(id)init;
-(void)pop;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3 ;
-(void)setCapturedProperties:(_UICompoundObjectMap *)arg1 ;
-(_UICompoundObjectMap *)capturedProperties;
@end

