/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKPlaceInlineMapContentView.h>

@class _MKUILabel;

@interface _MKPlacePoisInlineMapContentView : _MKPlaceInlineMapContentView {

	_MKUILabel* _storesLabel;
	_MKUILabel* _seeMoreLabel;
	BOOL _visible;

}

@property (assign,nonatomic) BOOL visible;              //@synthesize visible=_visible - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)hasTitle;
-(double)mapViewHeight;
-(void)setLocationsNumber:(unsigned long long)arg1 ;
@end
