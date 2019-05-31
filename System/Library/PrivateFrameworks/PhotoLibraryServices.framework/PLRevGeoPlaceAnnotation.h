/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PLRevGeoPlaceAnnotation : NSObject <NSCopying> {

	int _placeLevel;
	NSString* _placeName;

}

@property (assign,nonatomic) int placeLevel;                    //@synthesize placeLevel=_placeLevel - In the implementation block
@property (nonatomic,retain) NSString * placeName;              //@synthesize placeName=_placeName - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)placeName;
-(int)placeLevel;
-(void)setPlaceLevel:(int)arg1 ;
-(void)setPlaceName:(NSString *)arg1 ;
@end

