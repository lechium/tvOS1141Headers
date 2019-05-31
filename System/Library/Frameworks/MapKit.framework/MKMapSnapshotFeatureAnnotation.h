/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKCustomFeatureAnnotation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, VKCustomFeature;

@interface MKMapSnapshotFeatureAnnotation : NSObject <MKCustomFeatureAnnotation, NSSecureCoding> {

	long long _representation;
	NSString* _title;
	VKCustomFeature* _customFeature;
	CGSize _coordinate;

}

@property (nonatomic,readonly) long long representation;              //@synthesize representation=_representation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGSize coordinate;                       //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) double course; 
@property (nonatomic,readonly) BOOL showsBalloonCallout; 
+(BOOL)supportsSecureCoding;
-(CGSize)coordinate;
-(id)feature;
-(void)setCoordinate:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(long long)representation;
-(BOOL)showsBalloonCallout;
-(void)setShowsBalloonCallout:(BOOL)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 title:(id)arg2 representation:(long long)arg3 ;
@end

