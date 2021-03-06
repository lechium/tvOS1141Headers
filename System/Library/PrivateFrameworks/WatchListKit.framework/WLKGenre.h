/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WLKGenre : NSObject {

	NSString* _uniqueID;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * uniqueID;              //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
+(id)genresWithDictionaries:(id)arg1 ;
-(NSString *)uniqueID;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
@end

