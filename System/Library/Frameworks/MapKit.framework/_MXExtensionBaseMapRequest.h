/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _MXExtensionBaseMapRequest : NSObject <NSSecureCoding> {

	SCD_Struct_MK1 _mapRect;

}

@property (assign,nonatomic) SCD_Struct_MK1 mapRect;              //@synthesize mapRect=_mapRect - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMapRect:(SCD_Struct_MK1)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(SCD_Struct_MK1)mapRect;
@end
