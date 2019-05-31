/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSDictionary, NSString, NSArray;

@interface ICStorePlatformMetadata : NSObject {

	NSDate* _expirationDate;
	NSDictionary* _metadataDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * metadataDictionary;               //@synthesize metadataDictionary=_metadataDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * artistName; 
@property (nonatomic,readonly) long long artistStoreAdamID; 
@property (nonatomic,copy,readonly) NSString * cloudUniversalLibraryID; 
@property (nonatomic,copy,readonly) NSString * collectionName; 
@property (nonatomic,readonly) long long collectionStoreAdamID; 
@property (nonatomic,copy,readonly) NSString * composerName; 
@property (nonatomic,copy,readonly) NSString * copyrightText; 
@property (nonatomic,readonly) long long discNumber; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,copy,readonly) NSDate * expirationDate;                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) long long explicitRating; 
@property (nonatomic,copy,readonly) NSArray * genreNames; 
@property (nonatomic,readonly) BOOL hasLyrics; 
@property (nonatomic,copy,readonly) NSString * kind; 
@property (nonatomic,readonly) long long movementCount; 
@property (nonatomic,copy,readonly) NSString * movementName; 
@property (nonatomic,readonly) long long movementNumber; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSArray * offers; 
@property (nonatomic,copy,readonly) NSString * playlistGlobalID; 
@property (nonatomic,copy,readonly) NSString * radioStationStringID; 
@property (nonatomic,copy,readonly) NSDate * releaseDate; 
@property (nonatomic,readonly) BOOL shouldShowComposer; 
@property (nonatomic,readonly) long long storeAdamID; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) long long trackNumber; 
@property (nonatomic,copy,readonly) NSString * workName; 
@property (nonatomic,copy,readonly) NSArray * artworkInfos; 
+(id)storeServerCalendar;
-(NSDate *)expirationDate;
-(double)duration;
-(NSString *)name;
-(NSString *)title;
-(NSString *)kind;
-(NSString *)collectionName;
-(NSArray *)artworkInfos;
-(id)initWithMetadataDictionary:(id)arg1 expirationDate:(id)arg2 ;
-(long long)discNumber;
-(NSString *)radioStationStringID;
-(BOOL)shouldShowComposer;
-(NSString *)cloudUniversalLibraryID;
-(NSString *)copyrightText;
-(NSArray *)offers;
-(NSString *)artistName;
-(NSString *)composerName;
-(BOOL)hasLyrics;
-(NSArray *)genreNames;
-(long long)explicitRating;
-(NSString *)movementName;
-(long long)movementCount;
-(long long)movementNumber;
-(NSDate *)releaseDate;
-(id)_storePlatformReleaseDateFormatter;
-(long long)trackNumber;
-(NSString *)workName;
-(long long)storeAdamID;
-(long long)artistStoreAdamID;
-(id)initWithMetadataDictionary:(id)arg1 ;
-(id)offerWithType:(id)arg1 ;
-(long long)collectionStoreAdamID;
-(NSString *)playlistGlobalID;
-(NSDictionary *)metadataDictionary;
@end

