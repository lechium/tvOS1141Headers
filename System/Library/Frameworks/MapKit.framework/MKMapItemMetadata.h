/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKMapItemVendorDeal;
@class GEOBusiness, NSMutableDictionary;

@interface MKMapItemMetadata : NSObject {

	BOOL _hasCheckedForVendorDeal;
	GEOBusiness* _business;
	id<MKMapItemVendorDeal> _deal;
	NSMutableDictionary* _imageCache;

}

@property (nonatomic,retain) NSMutableDictionary * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,readonly) GEOBusiness * business;                      //@synthesize business=_business - In the implementation block
@property (nonatomic,retain) id<MKMapItemVendorDeal> deal;                  //@synthesize deal=_deal - In the implementation block
@property (assign,nonatomic) BOOL hasCheckedForVendorDeal;                  //@synthesize hasCheckedForVendorDeal=_hasCheckedForVendorDeal - In the implementation block
-(GEOBusiness *)business;
-(id)description;
-(id)initWithBusiness:(id)arg1 ;
-(void)addImage:(id)arg1 forURL:(id)arg2 ;
-(id)imageForURL:(id)arg1 ;
-(id<MKMapItemVendorDeal>)deal;
-(void)setDeal:(id<MKMapItemVendorDeal>)arg1 ;
-(BOOL)hasCheckedForVendorDeal;
-(void)setHasCheckedForVendorDeal:(BOOL)arg1 ;
-(NSMutableDictionary *)imageCache;
-(void)setImageCache:(NSMutableDictionary *)arg1 ;
@end

