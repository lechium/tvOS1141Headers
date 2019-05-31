/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDPriceDescription, NSString;

@interface GEOPriceDescription : NSObject {

	GEOPDPriceDescription* _geoPriceDescription;

}

@property (nonatomic,retain) GEOPDPriceDescription * geoPriceDescription;              //@synthesize geoPriceDescription=_geoPriceDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasPriceDescription; 
@property (nonatomic,readonly) NSString * priceDescription; 
-(BOOL)hasPriceDescription;
-(NSString *)priceDescription;
-(id)initWithGEOPDPriceDescription:(id)arg1 ;
-(GEOPDPriceDescription *)geoPriceDescription;
-(void)setGeoPriceDescription:(GEOPDPriceDescription *)arg1 ;
@end

