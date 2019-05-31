/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/MobileCoreServices-Structs.h>
#import <MobileCoreServices/_LSQueryResult.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, _LSLazyPropertyList, NSArray, LSBundleProxy, NSDictionary;

@interface LSResourceProxy : _LSQueryResult <NSCopying, NSSecureCoding> {

	BOOL _boundIconIsBadge;
	BOOL __privateDocumentIconAllowOverride;
	BOOL __boundIconIsPrerendered;
	NSString* _localizedName;
	NSString* __boundApplicationIdentifier;
	NSURL* __boundContainerURL;
	NSURL* __boundDataContainerURL;
	NSURL* __boundResourcesDirectoryURL;
	_LSLazyPropertyList* __boundIconsDictionary;
	NSString* __boundIconCacheKey;
	NSArray* __boundIconFileNames;
	LSBundleProxy* __typeIconOwner;
	NSArray* __privateDocumentIconNames;
	LSBundleProxy* __privateDocumentTypeIconOwner;

}

@property (setter=_setLocalizedName:,nonatomic,copy) NSString * localizedName;                                                  //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,setter=_setBoundIconIsBadge:,nonatomic) BOOL boundIconIsBadge;                                                //@synthesize boundIconIsBadge=_boundIconIsBadge - In the implementation block
@property (setter=_setBoundApplicationIdentifier:,nonatomic,copy) NSString * _boundApplicationIdentifier;                       //@synthesize _boundApplicationIdentifier=__boundApplicationIdentifier - In the implementation block
@property (setter=_setBoundContainerURL:,nonatomic,copy) NSURL * _boundContainerURL;                                            //@synthesize _boundContainerURL=__boundContainerURL - In the implementation block
@property (setter=_setBoundDataContainerURL:,nonatomic,copy) NSURL * _boundDataContainerURL;                                    //@synthesize _boundDataContainerURL=__boundDataContainerURL - In the implementation block
@property (setter=_setBoundResourcesDirectoryURL:,nonatomic,copy) NSURL * _boundResourcesDirectoryURL;                          //@synthesize _boundResourcesDirectoryURL=__boundResourcesDirectoryURL - In the implementation block
@property (setter=_setBoundIconsDictionary:,nonatomic,copy) _LSLazyPropertyList * _boundIconsDictionary;                        //@synthesize _boundIconsDictionary=__boundIconsDictionary - In the implementation block
@property (setter=_setBoundIconCacheKey:,nonatomic,copy) NSString * _boundIconCacheKey;                                         //@synthesize _boundIconCacheKey=__boundIconCacheKey - In the implementation block
@property (setter=_setBoundIconFileNames:,nonatomic,copy) NSArray * _boundIconFileNames;                                        //@synthesize _boundIconFileNames=__boundIconFileNames - In the implementation block
@property (setter=_setTypeIconOwner:,nonatomic,copy) LSBundleProxy * _typeIconOwner;                                            //@synthesize _typeIconOwner=__typeIconOwner - In the implementation block
@property (setter=_setPrivateDocumentIconNames:,nonatomic,copy) NSArray * _privateDocumentIconNames;                            //@synthesize _privateDocumentIconNames=__privateDocumentIconNames - In the implementation block
@property (setter=_setPrivateDocumentTypeIconOwner:,nonatomic,copy) LSBundleProxy * _privateDocumentTypeIconOwner;              //@synthesize _privateDocumentTypeIconOwner=__privateDocumentTypeIconOwner - In the implementation block
@property (assign,setter=_setPrivateDocumentIconAllowOverride:,nonatomic) BOOL _privateDocumentIconAllowOverride;               //@synthesize _privateDocumentIconAllowOverride=__privateDocumentIconAllowOverride - In the implementation block
@property (assign,setter=_setBoundIconIsPrerendered:,nonatomic) BOOL _boundIconIsPrerendered;                                   //@synthesize _boundIconIsPrerendered=__boundIconIsPrerendered - In the implementation block
@property (nonatomic,readonly) NSDictionary * iconsDictionary; 
@property (nonatomic,readonly) NSString * primaryIconName; 
@property (assign,nonatomic) unsigned long long propertyListCachingStrategy; 
+(BOOL)supportsSecureCoding;
-(id)_initWithLocalizedName:(id)arg1 ;
-(_LSLazyPropertyList *)_boundIconsDictionary;
-(id)_initWithLocalizedName:(id)arg1 boundApplicationIdentifier:(id)arg2 boundContainerURL:(id)arg3 dataContainerURL:(id)arg4 boundResourcesDirectoryURL:(id)arg5 boundIconsDictionary:(id)arg6 boundIconCacheKey:(id)arg7 boundIconFileNames:(id)arg8 typeIconOwner:(id)arg9 boundIconIsPrerendered:(BOOL)arg10 boundIconIsBadge:(BOOL)arg11 ;
-(NSString *)primaryIconName;
-(id)_privateDocumentIconNamesAsCacheKey;
-(unsigned long long)propertyListCachingStrategy;
-(void)setPropertyListCachingStrategy:(unsigned long long)arg1 ;
-(void)_setLocalizedName:(id)arg1 ;
-(void)_setBoundIconIsBadge:(BOOL)arg1 ;
-(void)_setBoundApplicationIdentifier:(id)arg1 ;
-(NSURL *)_boundContainerURL;
-(void)_setBoundContainerURL:(id)arg1 ;
-(NSURL *)_boundDataContainerURL;
-(void)_setBoundDataContainerURL:(id)arg1 ;
-(void)_setBoundResourcesDirectoryURL:(id)arg1 ;
-(void)_setBoundIconsDictionary:(id)arg1 ;
-(NSString *)_boundIconCacheKey;
-(void)_setBoundIconCacheKey:(id)arg1 ;
-(NSArray *)_boundIconFileNames;
-(void)_setBoundIconFileNames:(id)arg1 ;
-(LSBundleProxy *)_typeIconOwner;
-(void)_setTypeIconOwner:(id)arg1 ;
-(NSArray *)_privateDocumentIconNames;
-(void)_setPrivateDocumentIconNames:(id)arg1 ;
-(LSBundleProxy *)_privateDocumentTypeIconOwner;
-(void)_setPrivateDocumentTypeIconOwner:(id)arg1 ;
-(BOOL)_privateDocumentIconAllowOverride;
-(void)_setPrivateDocumentIconAllowOverride:(BOOL)arg1 ;
-(BOOL)_boundIconIsPrerendered;
-(void)_setBoundIconIsPrerendered:(BOOL)arg1 ;
-(NSString *)_boundApplicationIdentifier;
-(NSURL *)_boundResourcesDirectoryURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)iconsDictionary;
-(id)iconDataForVariant:(int)arg1 withOptions:(int)arg2 ;
-(NSString *)localizedName;
-(id)iconDataForVariant:(int)arg1 ;
-(BOOL)boundIconIsBadge;
-(id)iconDataForStyle:(id)arg1 width:(long long)arg2 height:(long long)arg3 options:(unsigned long long)arg4 ;
-(id)uniqueIdentifier;
@end

