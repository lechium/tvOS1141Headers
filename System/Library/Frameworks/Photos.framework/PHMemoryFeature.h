/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PHMemoryFeature : NSObject <NSSecureCoding> {

	id _subtypeSpecificAttribute;
	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringForType:(unsigned long long)arg1 ;
+(id)personUniversalIdentifierForPersonLocalIdentifier:(id)arg1 photoLibrary:(id)arg2 ;
+(id)peopleMemoryFeatureWithPersonLocalIdentifier:(id)arg1 ;
+(id)timeMemoryFeatureWithDate:(id)arg1 ;
+(id)timeMemoryFeatureWithHolidayForName:(id)arg1 ;
+(id)locationMemoryFeatureWithLocation:(id)arg1 ;
+(id)locationMemoryFeatureWithAreaForName:(id)arg1 ;
+(id)memoryFeatureWithData:(id)arg1 photoLibrary:(id)arg2 ;
+(id)personLocalIdentifierForPersonUniversalIdentifier:(id)arg1 photoLibrary:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(id)date;
-(id)location;
-(BOOL)collidesWithDate:(id)arg1 ;
-(id)encodedDataWithPhotoLibrary:(id)arg1 ;
-(BOOL)collidesWithFeature:(id)arg1 ;
-(BOOL)collidesWithHolidayWithName:(id)arg1 ;
-(BOOL)collidesWithLocationAtCoordinates:(CLLocationCoordinate2D)arg1 ;
-(BOOL)collidesWithAreaWithName:(id)arg1 ;
-(BOOL)collidesWithPersonWithLocalIdentifier:(id)arg1 ;
-(id)personLocalIdentifier;
-(id)holidayName;
-(id)areaName;
@end

