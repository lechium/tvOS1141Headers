/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIView.h>

@interface WKPDFPageNumberIndicator : UIView {

	RetainPtr<UILabel>* _label;
	RetainPtr<_UIBackdropView>* _backdropView;
	RetainPtr<NSTimer>* _timer;
	BOOL _hasValidPageCountAndCurrentPage;
	unsigned _currentPageNumber;
	unsigned _pageCount;

}

@property (assign,nonatomic) unsigned currentPageNumber;              //@synthesize currentPageNumber=_currentPageNumber - In the implementation block
@property (assign,nonatomic) unsigned pageCount;                      //@synthesize pageCount=_pageCount - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)hide;
-(void)show;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned)pageCount;
-(void)setPageCount:(unsigned)arg1 ;
-(void)_updateLabel;
-(void)_makeRoundedCorners;
-(void)hide:(id)arg1 ;
-(void)setCurrentPageNumber:(unsigned)arg1 ;
-(void)moveToPoint:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(unsigned)currentPageNumber;
@end

