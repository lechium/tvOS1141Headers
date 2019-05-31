/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class _UIBackdropView;

@interface _UIBackdropViewLayer : CALayer {

	_UIBackdropView* _backdropView;

}

@property (assign,nonatomic) _UIBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
-(void)dealloc;
-(void)renderInContext:(CGContextRef)arg1 ;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)backdropView;
@end

