/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIKeyboardAnimatorAnimationStyle;

@interface _UIKeyboardAnimator : NSObject {

	_UIKeyboardAnimatorAnimationStyle* _style;

}
-(id)init;
-(void)applyToKeyboardOperations:(/*^block*/id)arg1 ;
-(void)performAnimation:(/*^block*/id)arg1 afterStarted:(/*^block*/id)arg2 onCompletion:(/*^block*/id)arg3 ;
-(void)prepareForAnimationWithState:(id)arg1 ;
-(void)runAnimationWithState:(id)arg1 ;
-(void)completeAnimationWithState:(id)arg1 ;
@end

