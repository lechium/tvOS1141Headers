/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioStationMatchMetadata.h>

@class NSNumber;

@interface RadioStationMatchStoreMetadata : RadioStationMatchMetadata {

	NSNumber* _storeID;

}

@property (nonatomic,copy) NSNumber * storeID;              //@synthesize storeID=_storeID - In the implementation block
+(id)metadataKey;
-(void)setStoreID:(NSNumber *)arg1 ;
-(NSNumber *)storeID;
-(id)copyMetadataDictionary;
@end

