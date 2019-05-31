/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVHSDMAPEntity;
@class NSString, TVHKMediaEntityServer, TVHKMediaEntityType, TVHKMediaEntityIdentifier, TVHKDMAPMediaEntityIdentifier, TVHKMediaEntityKind, NSSet, NSArray, NSNumber, NSDate;

@interface TVHKMediaEntity : NSObject {

	BOOL _localChanges;
	NSString* _metadataHashInternal;
	TVHKMediaEntityServer* _mediaEntityServer;
	TVHKMediaEntityType* _type;
	TVHKMediaEntityIdentifier* _identifier;
	TVHKDMAPMediaEntityIdentifier* _DMAPIdentifier;
	id<TVHSDMAPEntity> _entity;
	TVHKMediaEntityKind* _kind;
	NSSet* _requestedProperties;

}

@property (nonatomic,copy) TVHKMediaEntityIdentifier * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=hasLocalChanges,nonatomic) BOOL localChanges;                        //@synthesize localChanges=_localChanges - In the implementation block
@property (nonatomic,retain) TVHKDMAPMediaEntityIdentifier * DMAPIdentifier;                  //@synthesize DMAPIdentifier=_DMAPIdentifier - In the implementation block
@property (nonatomic,copy) NSString * metadataHashInternal;                                   //@synthesize metadataHashInternal=_metadataHashInternal - In the implementation block
@property (nonatomic,readonly) unsigned long long protocol; 
@property (nonatomic,readonly) unsigned long long nonPersistentID; 
@property (nonatomic,readonly) unsigned long long persistentID; 
@property (nonatomic,readonly) unsigned long long imageNonPersistentID; 
@property (nonatomic,readonly) id<TVHSDMAPEntity> entity;                                     //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) TVHKMediaEntityKind * kind;                                    //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) NSSet * requestedProperties;                                   //@synthesize requestedProperties=_requestedProperties - In the implementation block
@property (nonatomic,copy,readonly) NSArray * metadataKeyPaths; 
@property (nonatomic,readonly) TVHKMediaEntityServer * mediaEntityServer;                     //@synthesize mediaEntityServer=_mediaEntityServer - In the implementation block
@property (nonatomic,copy,readonly) TVHKMediaEntityType * type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * sortTitle; 
@property (nonatomic,copy,readonly) NSString * albumTitle; 
@property (nonatomic,copy,readonly) NSString * sortAlbumTitle; 
@property (nonatomic,copy,readonly) NSString * albumDescription; 
@property (nonatomic,copy,readonly) TVHKMediaEntityIdentifier * albumIdentifier; 
@property (nonatomic,copy,readonly) NSString * genreTitle; 
@property (nonatomic,copy,readonly) NSNumber * seasonNumber; 
@property (nonatomic,copy,readonly) NSDate * addedDate; 
@property (nonatomic,copy,readonly) NSDate * releaseDate; 
@property (nonatomic,copy,readonly) NSNumber * releaseYear; 
@property (nonatomic,copy,readonly) NSString * contentDescription; 
@property (nonatomic,copy,readonly) NSNumber * duration; 
@property (assign,nonatomic) long long playedState; 
@property (nonatomic,copy,readonly) NSString * imageIdentifier; 
@property (nonatomic,copy,readonly) NSArray * faces; 
@property (nonatomic,copy,readonly) NSString * metadataHash; 
+(id)metadataHashFromStrings:(id)arg1 ;
+(id)_metadataHashWithKeys:(id)arg1 metadataValueBlock:(/*^block*/id)arg2 ;
+(id)_metadataHashValueForObject:(id)arg1 ;
-(id<TVHSDMAPEntity>)entity;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSNumber *)duration;
-(TVHKMediaEntityIdentifier *)identifier;
-(NSString *)title;
-(TVHKMediaEntityType *)type;
-(void)setIdentifier:(TVHKMediaEntityIdentifier *)arg1 ;
-(TVHKMediaEntityKind *)kind;
-(unsigned long long)protocol;
-(NSNumber *)releaseYear;
-(NSString *)sortTitle;
-(TVHKMediaEntityIdentifier *)albumIdentifier;
-(NSDate *)addedDate;
-(unsigned long long)persistentID;
-(NSDate *)releaseDate;
-(NSNumber *)seasonNumber;
-(NSString *)albumTitle;
-(NSString *)genreTitle;
-(NSSet *)requestedProperties;
-(NSArray *)faces;
-(NSString *)imageIdentifier;
-(NSString *)contentDescription;
-(unsigned long long)nonPersistentID;
-(id)initWithMediaEntityServer:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4 ;
-(NSString *)sortAlbumTitle;
-(NSString *)albumDescription;
-(id)entityAttributeValueWithBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(TVHKMediaEntityServer *)mediaEntityServer;
-(void)setPlayedState:(long long)arg1 ;
-(unsigned long long)imageNonPersistentID;
-(NSArray *)metadataKeyPaths;
-(NSString *)metadataHash;
-(long long)playedState;
-(id)entityAttributeValueForKey:(id)arg1 ;
-(void)setEntityAttributeValue:(id)arg1 forKey:(id)arg2 ;
-(NSString *)metadataHashInternal;
-(id)_DMAPIdentifier;
-(id)_DMAPCodeForKeyPath:(id)arg1 ;
-(void)setMetadataHashInternal:(NSString *)arg1 ;
-(void)setLocalChanges:(BOOL)arg1 ;
-(id)_entityAttributeDefaultValueForKey:(id)arg1 ;
-(id)_metadataHashFromMetadataKeyPaths:(id)arg1 ;
-(void)prepopulateMetadata;
-(BOOL)hasLocalChanges;
-(TVHKDMAPMediaEntityIdentifier *)DMAPIdentifier;
-(void)setDMAPIdentifier:(TVHKDMAPMediaEntityIdentifier *)arg1 ;
@end

