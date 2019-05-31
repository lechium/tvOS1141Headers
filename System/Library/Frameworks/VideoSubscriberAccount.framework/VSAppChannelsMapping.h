/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
@class NSString, NSArray;

@interface VSAppChannelsMapping : NSObject {

	NSString* _appAdamID;
	NSArray* _channelIDs;

}

@property (nonatomic,copy) NSString * appAdamID;              //@synthesize appAdamID=_appAdamID - In the implementation block
@property (nonatomic,copy) NSArray * channelIDs;              //@synthesize channelIDs=_channelIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAppAdamID:(NSString *)arg1 ;
-(NSString *)appAdamID;
-(NSArray *)channelIDs;
-(void)setChannelIDs:(NSArray *)arg1 ;
@end
