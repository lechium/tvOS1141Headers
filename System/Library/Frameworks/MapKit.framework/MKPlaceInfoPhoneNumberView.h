/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceInfoContactRowView.h>

@class _MKUILabel;

@interface MKPlaceInfoPhoneNumberView : MKPlaceInfoContactRowView {

	_MKUILabel* _optsOutOfAdsView;
	BOOL _optsOutOfAds;

}

@property (assign,nonatomic) BOOL optsOutOfAds;              //@synthesize optsOutOfAds=_optsOutOfAds - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_valueString;
-(id)_icon;
-(id)_iconAccessibilityLabel;
-(Class)_labeledValueExpectedValueType;
-(int)analyticsTarget;
-(void)setOptsOutOfAds:(BOOL)arg1 ;
-(BOOL)optsOutOfAds;
@end

