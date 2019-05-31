/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSString, NSDictionary, NSURL;

@interface RTAssetManagerNotificationAssetDownloaded : RTNotification {

	NSString* _assetType;
	NSDictionary* _attributes;
	long long _assetState;
	NSURL* _assetURL;

}

@property (nonatomic,readonly) NSString * assetType;                   //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) long long assetState;                   //@synthesize assetState=_assetState - In the implementation block
@property (nonatomic,readonly) NSURL * assetURL;                       //@synthesize assetURL=_assetURL - In the implementation block
-(NSDictionary *)attributes;
-(NSURL *)assetURL;
-(NSString *)assetType;
-(id)initWithAssetType:(id)arg1 attributes:(id)arg2 assetState:(long long)arg3 assetURL:(id)arg4 ;
-(long long)assetState;
@end

