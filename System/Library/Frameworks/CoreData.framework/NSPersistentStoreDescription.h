/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSURL, NSDictionary;

@interface NSPersistentStoreDescription : NSObject <NSCopying> {

	NSMutableDictionary* _options;
	NSString* _type;
	NSString* _configuration;
	NSURL* _url;

}

@property (copy) NSString * type;                                              //@synthesize type=_type - In the implementation block
@property (copy) NSString * configuration;                                     //@synthesize configuration=_configuration - In the implementation block
@property (copy) NSURL * URL;                                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * options; 
@property (getter=isReadOnly) BOOL readOnly; 
@property (assign) double timeout; 
@property (nonatomic,copy,readonly) NSDictionary * sqlitePragmas; 
@property (assign) BOOL shouldAddStoreAsynchronously; 
@property (assign) BOOL shouldMigrateStoreAutomatically; 
@property (assign) BOOL shouldInferMappingModelAutomatically; 
+(id)persistentStoreDescriptionWithURL:(id)arg1 ;
+(id)inMemoryPersistentStoreDescription;
-(id)mirroringOptions;
-(BOOL)shouldInvokeCompletionHandlerConcurrently;
-(NSDictionary *)sqlitePragmas;
-(void)setShouldInvokeCompletionHandlerConcurrently:(BOOL)arg1 ;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSDictionary *)options;
-(void)setConfiguration:(NSString *)arg1 ;
-(NSString *)configuration;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)isReadOnly;
-(id)mirroringDelegate;
-(void)setMirroringDelegate:(id)arg1 ;
-(void)setValue:(id)arg1 forPragmaNamed:(id)arg2 ;
-(void)setOption:(id)arg1 forKey:(id)arg2 ;
-(void)setShouldInferMappingModelAutomatically:(BOOL)arg1 ;
-(void)setShouldMigrateStoreAutomatically:(BOOL)arg1 ;
-(void)setShouldAddStoreAsynchronously:(BOOL)arg1 ;
-(void)setOption:(id)arg1 forMirroringKey:(id)arg2 ;
-(BOOL)shouldAddStoreAsynchronously;
-(BOOL)shouldInferMappingModelAutomatically;
-(BOOL)shouldMigrateStoreAutomatically;
@end
