/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSMutableDictionary, NSObject, NSArray, NSSet, ICURLBagRadioConfiguration, ICURLBagLibraryDAAPConfiguration, NSString;

@interface ICURLBag : NSObject {

	NSDictionary* _bagValues;
	NSMutableDictionary* _convertedActionsCache;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _GUIDURLRegexPatterns;
	NSSet* _GUIDURLSchemes;

}

@property (nonatomic,retain) NSDictionary * bagValues;                                                   //@synthesize bagValues=_bagValues - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * convertedActionsCache;                                //@synthesize convertedActionsCache=_convertedActionsCache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                         //@synthesize queue=_queue - In the implementation block
@property (getter=UIDURLRegexPatterns,nonatomic,retain) NSArray * GUIDURLRegexPatterns;                  //@synthesize GUIDURLRegexPatterns=_GUIDURLRegexPatterns - In the implementation block
@property (getter=UIDURLSchemes,nonatomic,retain) NSSet * GUIDURLSchemes;                                //@synthesize GUIDURLSchemes=_GUIDURLSchemes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * allValues; 
@property (nonatomic,readonly) BOOL canPostKeybagSyncData; 
@property (nonatomic,readonly) ICURLBagRadioConfiguration * radioConfiguration; 
@property (nonatomic,readonly) ICURLBagLibraryDAAPConfiguration * libraryDAAPConfiguration; 
@property (nonatomic,copy,readonly) NSString * storefrontHeaderSuffix; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)allValues;
-(NSObject*<OS_dispatch_queue>)queue;
-(ICURLBagRadioConfiguration *)radioConfiguration;
-(BOOL)canPostKeybagSyncData;
-(id)mescalConfigurationForResponseURL:(id)arg1 ;
-(BOOL)shouldAppendDeviceGUIDForURL:(id)arg1 ;
-(BOOL)shouldAppendMachineDataHeadersForURL:(id)arg1 ;
-(id)mescalConfigurationForRequestURL:(id)arg1 ;
-(long long)int64ValueForBagKey:(id)arg1 ;
-(NSDictionary *)bagValues;
-(void)_validateGUIDURLConfigIfNeeded;
-(NSArray *)GUIDURLRegexPatterns;
-(NSSet *)GUIDURLSchemes;
-(BOOL)_shouldMescalSignBodyForURL:(id)arg1 withSignatureConfiguration:(id)arg2 ;
-(void)setGUIDURLRegexPatterns:(NSArray *)arg1 ;
-(void)setGUIDURLSchemes:(NSSet *)arg1 ;
-(BOOL)hasValueForBagKey:(id)arg1 ;
-(ICURLBagLibraryDAAPConfiguration *)libraryDAAPConfiguration;
-(void)setBagValues:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)convertedActionsCache;
-(void)setConvertedActionsCache:(NSMutableDictionary *)arg1 ;
-(id)urlForBagKey:(id)arg1 ;
-(id)valueForBagKey:(id)arg1 ;
-(NSString *)storefrontHeaderSuffix;
@end

