/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@class NSString;

@interface PHAssetAdjustmentProperties : PHAssetPropertySet {

	NSString* _formatIdentifier;
	NSString* _formatVersion;

}

@property (nonatomic,readonly) NSString * formatIdentifier;              //@synthesize formatIdentifier=_formatIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * formatVersion;                 //@synthesize formatVersion=_formatVersion - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(NSString *)formatVersion;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(NSString *)formatIdentifier;
@end

