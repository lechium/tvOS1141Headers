/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UICanvasMetricsUpdating.h>

@class _UICanvas, NSString;

@interface _UICanvasMetricsCalculator : NSObject <_UICanvasMetricsUpdating> {

	_UICanvas* _canvas;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) _UICanvas * canvas;              //@synthesize canvas=_canvas - In the implementation block
-(_UICanvas *)canvas;
-(void)setCanvas:(_UICanvas *)arg1 ;
-(void)updateMetricsOnWindows:(id)arg1 animated:(BOOL)arg2 ;
@end
