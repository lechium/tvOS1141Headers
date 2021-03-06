/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, WLKArtworkVariantListing, NSNumber, NSArray;

@interface WLKBasicContentMetadata : NSObject {

	BOOL _isEvod;
	unsigned long long _contentType;
	NSString* _canonicalID;
	NSString* _title;
	NSString* _shortTitle;
	NSString* _descriptiveText;
	WLKArtworkVariantListing* _images;
	NSNumber* _commonSenseBeginsAge;
	NSArray* _categories;

}

@property (nonatomic,readonly) unsigned long long contentType;                 //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalID;                    //@synthesize canonicalID=_canonicalID - In the implementation block
@property (nonatomic,readonly) BOOL isEvod;                                    //@synthesize isEvod=_isEvod - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortTitle;                     //@synthesize shortTitle=_shortTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptiveText;                //@synthesize descriptiveText=_descriptiveText - In the implementation block
@property (nonatomic,readonly) WLKArtworkVariantListing * images;              //@synthesize images=_images - In the implementation block
@property (nonatomic,readonly) NSNumber * commonSenseBeginsAge;                //@synthesize commonSenseBeginsAge=_commonSenseBeginsAge - In the implementation block
@property (nonatomic,copy,readonly) NSArray * categories;                      //@synthesize categories=_categories - In the implementation block
+(unsigned long long)contentTypeForString:(id)arg1 ;
+(Class)_classForContentType:(unsigned long long)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSArray *)categories;
-(WLKArtworkVariantListing *)images;
-(NSString *)shortTitle;
-(BOOL)isEvod;
-(unsigned long long)contentType;
-(NSString *)canonicalID;
-(NSString *)descriptiveText;
-(NSNumber *)commonSenseBeginsAge;
@end

