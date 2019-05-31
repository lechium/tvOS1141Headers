/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSString, NSDictionary;

@interface WLKPlayActivityDecorateLiveOperation : WLKNetworkRequestOperation {

	NSString* _channelID;
	NSString* _serviceID;
	NSDictionary* _scheduleDictionary;

}

@property (nonatomic,copy,readonly) NSString * channelID;                           //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceID;                           //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * scheduleDictionary;              //@synthesize scheduleDictionary=_scheduleDictionary - In the implementation block
-(void)didFinish;
-(id)responseProcessor;
-(id)initWithChannelID:(id)arg1 serviceID:(id)arg2 ;
-(NSDictionary *)scheduleDictionary;
-(NSString *)serviceID;
-(NSString *)channelID;
@end
