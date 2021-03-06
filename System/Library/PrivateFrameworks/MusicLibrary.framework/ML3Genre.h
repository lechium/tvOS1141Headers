/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3Collection.h>

@interface ML3Genre : ML3Collection
+(void)initialize;
+(id)databaseTable;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)allProperties;
+(BOOL)propertyIsCountProperty:(id)arg1 ;
+(id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3 ;
+(id)predisambiguatedProperties;
+(id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2 ;
+(id)propertiesForGroupingKey;
+(id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2 ;
+(id)trackForeignPersistentID;
+(long long)revisionTrackingCode;
+(id)defaultOrderingTerms;
-(void)updateTrackValues:(id)arg1 ;
-(id)protocolItem;
-(id)multiverseIdentifier;
@end

