/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MKMapItem;

@interface _MXExtensionRideSharingSearchRequest : NSObject <NSSecureCoding> {

	MKMapItem* _origin;
	MKMapItem* _destination;

}

@property (nonatomic,retain) MKMapItem * origin;                   //@synthesize origin=_origin - In the implementation block
@property (nonatomic,retain) MKMapItem * destination;              //@synthesize destination=_destination - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(MKMapItem *)origin;
-(void)setOrigin:(MKMapItem *)arg1 ;
-(MKMapItem *)destination;
-(void)setDestination:(MKMapItem *)arg1 ;
@end

