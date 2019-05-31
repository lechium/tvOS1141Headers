/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSPrimitive.h>

@class NSString, CLCircularRegion, CLPlacemark, NSArray, CLSBusinessItem;

@interface CLSPlace : CLSPrimitive {

	NSString* _name;
	CLCircularRegion* _region;
	CLPlacemark* _placemark;
	NSArray* _categories;
	CLSBusinessItem* _businessItem;

}

@property (nonatomic,readonly) CLSBusinessItem * businessItem;                 //@synthesize businessItem=_businessItem - In the implementation block
@property (nonatomic,retain) NSArray * categories;                             //@synthesize categories=_categories - In the implementation block
@property (nonatomic,readonly) CLCircularRegion * region;                      //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) CLPlacemark * placemark;                        //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,readonly) NSString * address; 
@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
+(id)placeWithLocation:(id)arg1 ;
+(id)placeWithBusinessItem:(id)arg1 ;
+(id)placeWithPlacemark:(id)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(NSString *)address;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(NSArray *)categories;
-(CLCircularRegion *)region;
-(void)setCategories:(NSArray *)arg1 ;
-(CLPlacemark *)placemark;
-(id)presentationString;
-(BOOL)isEqualToPlace:(id)arg1 ;
-(CLSBusinessItem *)businessItem;
@end

