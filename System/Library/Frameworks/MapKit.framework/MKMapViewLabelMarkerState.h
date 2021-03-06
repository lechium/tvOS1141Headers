/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MKMapViewLabelMarkerState : NSObject {

	BOOL _visible;
	unsigned char _balloonBehavior;

}

@property (assign,getter=isVisible,nonatomic) BOOL visible;              //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) unsigned char balloonBehavior;              //@synthesize balloonBehavior=_balloonBehavior - In the implementation block
+(id)stateForLabelMarker:(id)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(unsigned char)balloonBehavior;
-(void)setBalloonBehavior:(unsigned char)arg1 ;
@end

