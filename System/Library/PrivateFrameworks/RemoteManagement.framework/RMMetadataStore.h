/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface RMMetadataStore : NSObject {

	NSString* _metadataFilePath;
	NSMutableDictionary* __kvStore;

}

@property (nonatomic,retain) NSMutableDictionary * _kvStore;              //@synthesize _kvStore=__kvStore - In the implementation block
@property (nonatomic,copy) NSString * metadataFilePath;                   //@synthesize metadataFilePath=_metadataFilePath - In the implementation block
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(void)clear;
+(id)sharedStore;
+(id)stringValueForKey:(id)arg1 ;
+(void)refresh;
+(id)dictValueForKey:(id)arg1 ;
+(id)dataValueForKey:(id)arg1 ;
+(id)dateValueForKey:(id)arg1 ;
+(void)removeValueForKey:(id)arg1 ;
-(void)setMetadataFilePath:(NSString *)arg1 ;
-(NSString *)metadataFilePath;
-(BOOL)readMetadataWithError:(id*)arg1 ;
-(void)set_kvStore:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)_kvStore;
-(BOOL)writeMetadataWithError:(id*)arg1 ;
@end

