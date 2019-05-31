/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
@class CNManagedConfiguration, NSIndexSet;

@interface ABBufferQuery : NSObject {

	BOOL _fetchLinkedContacts;
	BOOL _needsMultivalueTable;
	BOOL _needsMultivalueEntryTable;
	BOOL _needsPersonTable;
	BOOL _needsPersonLinkTable;
	BOOL _requestedImageData;
	BOOL _requestedImageCropRect;
	BOOL _requestedImageThumbnail;
	BOOL _requestedImageFullscreenData;
	BOOL _requestedHasImageData;
	unsigned _sortOrder;
	void* _addressBook;
	CNManagedConfiguration* _managedConfiguration;
	CPSqliteStatement* _statement;
	NSIndexSet* _scopedStoreIdentifiers;
	NSIndexSet* _requestedPropertyIdentifiers;
	NSIndexSet* _requestedMultivalueIdentifiers;
	CFDictionaryRef _propertyIndices;

}

@property (assign,nonatomic) void* addressBook;                                            //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,readonly) CNManagedConfiguration * managedConfiguration;              //@synthesize managedConfiguration=_managedConfiguration - In the implementation block
@property (assign,nonatomic) CPSqliteStatement* statement;                                 //@synthesize statement=_statement - In the implementation block
@property (nonatomic,readonly) unsigned sortOrder;                                         //@synthesize sortOrder=_sortOrder - In the implementation block
@property (nonatomic,readonly) NSIndexSet * scopedStoreIdentifiers;                        //@synthesize scopedStoreIdentifiers=_scopedStoreIdentifiers - In the implementation block
@property (nonatomic,readonly) NSIndexSet * requestedPropertyIdentifiers;                  //@synthesize requestedPropertyIdentifiers=_requestedPropertyIdentifiers - In the implementation block
@property (nonatomic,readonly) NSIndexSet * requestedMultivalueIdentifiers;                //@synthesize requestedMultivalueIdentifiers=_requestedMultivalueIdentifiers - In the implementation block
@property (assign,nonatomic) CFDictionaryRef propertyIndices;                              //@synthesize propertyIndices=_propertyIndices - In the implementation block
@property (nonatomic,readonly) BOOL fetchLinkedContacts;                                   //@synthesize fetchLinkedContacts=_fetchLinkedContacts - In the implementation block
@property (nonatomic,readonly) BOOL needsMultivalueTable;                                  //@synthesize needsMultivalueTable=_needsMultivalueTable - In the implementation block
@property (nonatomic,readonly) BOOL needsMultivalueEntryTable;                             //@synthesize needsMultivalueEntryTable=_needsMultivalueEntryTable - In the implementation block
@property (nonatomic,readonly) BOOL needsPersonTable;                                      //@synthesize needsPersonTable=_needsPersonTable - In the implementation block
@property (nonatomic,readonly) BOOL needsPersonLinkTable;                                  //@synthesize needsPersonLinkTable=_needsPersonLinkTable - In the implementation block
@property (nonatomic,readonly) BOOL requestedImageData;                                    //@synthesize requestedImageData=_requestedImageData - In the implementation block
@property (nonatomic,readonly) BOOL requestedImageCropRect;                                //@synthesize requestedImageCropRect=_requestedImageCropRect - In the implementation block
@property (nonatomic,readonly) BOOL requestedImageThumbnail;                               //@synthesize requestedImageThumbnail=_requestedImageThumbnail - In the implementation block
@property (nonatomic,readonly) BOOL requestedImageFullscreenData;                          //@synthesize requestedImageFullscreenData=_requestedImageFullscreenData - In the implementation block
@property (nonatomic,readonly) BOOL requestedHasImageData;                                 //@synthesize requestedHasImageData=_requestedHasImageData - In the implementation block
-(unsigned)sortOrder;
-(void)_initSetupPropertySet:(CFSetRef)arg1 includeLinkedContacts:(BOOL)arg2 ;
-(id)scopedStoresForManagedConfiguration:(id)arg1 ;
-(void)prependWithClauseToQueryString:(id)arg1 whereClause:(id)arg2 ;
-(void)appendCustomPropertySelectsToQueryString:(id)arg1 ;
-(void)appendFromClauseToQueryString:(id)arg1 ;
-(void)appendWhereClauseToQueryString:(id)arg1 ;
-(void)appendOrderByClauseToQueryString:(id)arg1 ;
-(void)bindWithClause:(id)arg1 ;
-(void)bindWhereClause:(id)arg1 ;
-(NSIndexSet *)requestedPropertyIdentifiers;
-(NSIndexSet *)requestedMultivalueIdentifiers;
-(BOOL)needsMultivalueEntryTable;
-(BOOL)fetchLinkedContacts;
-(NSIndexSet *)scopedStoreIdentifiers;
-(void)appendBindParameterMarkersToQueryString:(id)arg1 count:(unsigned long long)arg2 ;
-(BOOL)needsPersonLinkTable;
-(BOOL)needsMultivalueTable;
-(id)initWithAddressBook:(void*)arg1 whereClause:(id)arg2 whereClauseBindBlock:(/*^block*/id)arg3 requestedProperties:(CFSetRef)arg4 includeLinkedContacts:(BOOL)arg5 sortOrder:(unsigned)arg6 managedConfiguration:(id)arg7 ;
-(void)setPropertyIndices:(CFDictionaryRef)arg1 ;
-(CFDictionaryRef)propertyIndices;
-(BOOL)needsPersonTable;
-(BOOL)requestedImageData;
-(BOOL)requestedImageCropRect;
-(BOOL)requestedImageThumbnail;
-(BOOL)requestedImageFullscreenData;
-(BOOL)requestedHasImageData;
-(void)dealloc;
-(CPSqliteStatement*)statement;
-(void)setStatement:(CPSqliteStatement*)arg1 ;
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1 ;
-(CNManagedConfiguration *)managedConfiguration;
@end

