/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber;

@interface ASPingItem : ASItem {

	NSArray* _folders;
	NSNumber* _heartBeatInterval;
	NSNumber* _maxFolders;
	NSNumber* _status;

}

@property (nonatomic,retain) NSArray * folders;                         //@synthesize folders=_folders - In the implementation block
@property (nonatomic,retain) NSNumber * heartBeatInterval;              //@synthesize heartBeatInterval=_heartBeatInterval - In the implementation block
@property (nonatomic,retain) NSNumber * maxFolders;                     //@synthesize maxFolders=_maxFolders - In the implementation block
@property (nonatomic,retain) NSNumber * status;                         //@synthesize status=_status - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)setStatus:(NSNumber *)arg1 ;
-(id)description;
-(NSNumber *)status;
-(NSArray *)folders;
-(void)setHeartBeatInterval:(NSNumber *)arg1 ;
-(void)setMaxFolders:(NSNumber *)arg1 ;
-(void)setFolders:(NSArray *)arg1 ;
-(NSNumber *)heartBeatInterval;
-(NSNumber *)maxFolders;
@end

