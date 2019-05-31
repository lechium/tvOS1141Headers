/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSString, NSDictionary;

@interface WLKPlayActivityDecorateEBSOperation : WLKNetworkRequestOperation {

	NSString* _channelID;
	NSString* _externalContentID;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSString * channelID;                           //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalContentID;                   //@synthesize externalContentID=_externalContentID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
-(NSDictionary *)responseDictionary;
-(void)didFinish;
-(id)responseProcessor;
-(id)initWithChannelID:(id)arg1 externalContentID:(id)arg2 ;
-(NSString *)externalContentID;
-(NSString *)channelID;
@end

