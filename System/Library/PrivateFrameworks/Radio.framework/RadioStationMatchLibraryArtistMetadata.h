/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioStationMatchMetadata.h>

@class NSString, NSNumber;

@interface RadioStationMatchLibraryArtistMetadata : RadioStationMatchMetadata {

	NSString* _artistName;
	NSNumber* _artistStoreID;
	NSNumber* _representativeCloudID;

}

@property (nonatomic,copy) NSString * artistName;                         //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSNumber * artistStoreID;                      //@synthesize artistStoreID=_artistStoreID - In the implementation block
@property (nonatomic,copy) NSNumber * representativeCloudID;              //@synthesize representativeCloudID=_representativeCloudID - In the implementation block
+(id)metadataKey;
-(void)setArtistName:(NSString *)arg1 ;
-(NSNumber *)artistStoreID;
-(NSString *)artistName;
-(id)copyMetadataDictionary;
-(NSNumber *)representativeCloudID;
-(void)setArtistStoreID:(NSNumber *)arg1 ;
-(void)setRepresentativeCloudID:(NSNumber *)arg1 ;
@end

