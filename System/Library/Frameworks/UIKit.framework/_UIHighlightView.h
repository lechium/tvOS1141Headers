/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, NSArray, NSMutableArray;

@interface _UIHighlightView : UIView {

	UIColor* _color;
	double _cornerRadius;
	CGRect _invertedHighlightClipRect;
	NSArray* _cornerRadii;
	NSMutableArray* _innerBounds;
	NSMutableArray* _innerQuads;
	BOOL _invertHighlight;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setColor:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)cleanUp;
-(void)setCornerRadii:(id)arg1 ;
-(void)setFrames:(id)arg1 boundaryRect:(CGRect)arg2 ;
-(void)setQuads:(id)arg1 boundaryRect:(CGRect)arg2 ;
-(void)setInvertHighlight:(BOOL)arg1 clipRect:(CGRect)arg2 ;
@end

