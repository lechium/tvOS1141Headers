/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelResponse.h>

@class MPChangeDetails, MPModelStoreBrowseResponseParser;

@interface MPModelStoreBrowseResponse : MPModelResponse {

	MPChangeDetails* _changeDetails;
	MPModelStoreBrowseResponseParser* _parser;

}

@property (nonatomic,retain) MPModelStoreBrowseResponseParser * parser;              //@synthesize parser=_parser - In the implementation block
@property (nonatomic,retain) MPChangeDetails * changeDetails;                        //@synthesize changeDetails=_changeDetails - In the implementation block
@property (nonatomic,readonly) BOOL hasAdditionalContentItems; 
-(BOOL)hasAdditionalContentItems;
-(MPModelStoreBrowseResponseParser *)parser;
-(void)setParser:(MPModelStoreBrowseResponseParser *)arg1 ;
-(void)setChangeDetails:(MPChangeDetails *)arg1 ;
-(MPChangeDetails *)changeDetails;
@end

