/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class NSAttributedString;

@interface MKAttributionLabel : UIView {

	NSAttributedString* _strokeText;
	NSAttributedString* _innerText;
	unsigned long long _mapType;
	BOOL _useDarkText;

}

@property (assign,nonatomic) unsigned long long mapType;              //@synthesize mapType=_mapType - In the implementation block
-(void)setMapType:(unsigned long long)arg1 ;
-(unsigned long long)mapType;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)sizeToFit;
-(id)_attributesWithStroke:(BOOL)arg1 ;
-(void)_prepareLabel;
@end

