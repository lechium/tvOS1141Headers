/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface CEMPayloadBase : NSObject {

	NSSet* _unknownPayloadKeys;

}

@property (readonly) NSSet * unknownPayloadKeys;              //@synthesize unknownPayloadKeys=_unknownPayloadKeys - In the implementation block
-(id)loadStringFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id*)arg5 ;
-(id)loadBooleanFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id*)arg5 ;
-(id)loadIntegerFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id*)arg5 ;
-(void)serializeStringIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 ;
-(void)serializeBooleanIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 ;
-(void)serializeIntegerIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 ;
-(void)serializeAssetIntoDictionary:(id)arg1 withKey:(id)arg2 assetProvider:(id)arg3 transformType:(id)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6 ;
-(id)loadDictionaryFromDictionary:(id)arg1 withKey:(id)arg2 parentKeyPath:(id)arg3 validator:(/*^block*/id)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6 error:(id*)arg7 ;
-(void)serializeDictionaryIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 dictSerializer:(/*^block*/id)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6 ;
-(id)loadArrayFromDictionary:(id)arg1 withKey:(id)arg2 parentKeyPath:(id)arg3 validator:(/*^block*/id)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6 error:(id*)arg7 ;
-(void)serializeArrayIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 itemSerializer:(/*^block*/id)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6 ;
-(id)loadDataFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id*)arg5 ;
-(void)serializeDataIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 ;
-(id)loadDateFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id*)arg5 ;
-(id)loadFloatFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id*)arg5 ;
-(id)_loadObjectOfClass:(Class)arg1 fromDictionary:(id)arg2 withKey:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 error:(id*)arg6 ;
-(void)_serializeItemIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 isDefaultValue:(BOOL)arg5 ;
-(void)serializeFloatIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 ;
-(void)serializeDateIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 ;
-(NSSet *)unknownPayloadKeys;
@end
