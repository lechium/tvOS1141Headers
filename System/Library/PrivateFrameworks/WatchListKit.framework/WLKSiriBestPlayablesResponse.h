/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface WLKSiriBestPlayablesResponse : NSObject {

	NSDictionary* _dictionary;
	NSDictionary* _playablesByID;

}

@property (nonatomic,copy) NSDictionary * playablesByID;                    //@synthesize playablesByID=_playablesByID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(NSDictionary *)playablesByID;
-(id)playableForStatsID:(id)arg1 ;
-(void)setPlayablesByID:(NSDictionary *)arg1 ;
@end

