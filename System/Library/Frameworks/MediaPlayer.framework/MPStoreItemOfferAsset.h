/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSURL;

@interface MPStoreItemOfferAsset : NSObject {

	NSDictionary* _lookupDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * lookupDictionary;              //@synthesize lookupDictionary=_lookupDictionary - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (nonatomic,copy,readonly) NSString * flavor; 
@property (nonatomic,readonly) double previewDuration; 
@property (nonatomic,copy,readonly) NSURL * previewURL; 
@property (nonatomic,readonly) long long size; 
-(long long)size;
-(double)duration;
-(NSDictionary *)lookupDictionary;
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSString *)flavor;
-(double)previewDuration;
-(NSURL *)previewURL;
@end

