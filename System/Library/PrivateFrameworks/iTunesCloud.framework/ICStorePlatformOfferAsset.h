/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL;

@interface ICStorePlatformOfferAsset : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double previewDuration; 
@property (nonatomic,copy,readonly) NSURL * previewURL; 
@property (nonatomic,readonly) long long size; 
-(long long)size;
-(double)duration;
-(id)initWithResponseDictionary:(id)arg1 ;
-(double)previewDuration;
-(NSURL *)previewURL;
@end

