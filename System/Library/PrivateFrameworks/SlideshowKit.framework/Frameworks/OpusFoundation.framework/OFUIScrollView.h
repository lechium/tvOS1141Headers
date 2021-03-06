/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <UIKit/UIScrollView.h>

@class OFUIViewController, NSMutableArray;

@interface OFUIScrollView : UIScrollView {

	OFUIViewController* _viewControllerProxy;
	NSMutableArray* _draggingPasteboardTypes;

}

@property (assign,nonatomic) OFUIViewController * viewControllerProxy;              //@synthesize viewControllerProxy=_viewControllerProxy - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)commonInit;
-(void)setViewControllerProxy:(OFUIViewController *)arg1 ;
-(void)registerDraggingPasteboardType:(id)arg1 ;
-(void)unregisterAllDraggingPasteboardType;
-(id)draggingPasteboardTypes;
-(OFUIViewController *)viewControllerProxy;
@end

