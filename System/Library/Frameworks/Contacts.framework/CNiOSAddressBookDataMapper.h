/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNDataMapper.h>

@protocol CNContactsLogger;
@class CNiOSAddressBook, CNContactsEnvironment, CNManagedConfiguration, CNManagedAccountsCache, NSString;

@interface CNiOSAddressBookDataMapper : NSObject <CNDataMapper> {

	CNiOSAddressBook* _addressBook;
	CNContactsEnvironment* _environment;
	id<CNContactsLogger> _logger;
	CNManagedConfiguration* _managedConfiguration;
	CNManagedAccountsCache* _managedAccountsCache;

}

@property (nonatomic,retain) CNManagedAccountsCache * managedAccountsCache;                //@synthesize managedAccountsCache=_managedAccountsCache - In the implementation block
@property (nonatomic,readonly) CNiOSAddressBook * addressBook;                             //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,readonly) CNContactsEnvironment * environment;                        //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) id<CNContactsLogger> logger;                                //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) CNManagedConfiguration * managedConfiguration;              //@synthesize managedConfiguration=_managedConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)contactBuffersDecoderForFetchRequest:(id)arg1 ;
+(id)encodedPeopleFetcherForForFetchRequest:(id)arg1 addressBook:(void*)arg2 managedConfiguration:(id)arg3 completionHandler:(/*^block*/id)arg4 environment:(id)arg5 ;
-(id)init;
-(CNContactsEnvironment *)environment;
-(id)meContactIdentifiers:(id*)arg1 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3 ;
-(id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2 ;
-(BOOL)registerChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id*)arg3 ;
-(id)initWithContactsEnvironment:(id)arg1 managedConfiguration:(id)arg2 ;
-(BOOL)requestAccessForEntityType:(long long)arg1 error:(id*)arg2 ;
-(BOOL)fetchAndDecodeEncodedContactsForFetchRequest:(id)arg1 error:(id*)arg2 cancelationToken:(id)arg3 batchHandler:(/*^block*/id)arg4 ;
-(BOOL)fetchContactsForFetchRequest:(id)arg1 error:(id*)arg2 batchHandler:(/*^block*/id)arg3 ;
-(BOOL)fetchEncodedContactsForFetchRequest:(id)arg1 error:(id*)arg2 cancelationToken:(id)arg3 batchHandler:(/*^block*/id)arg4 ;
-(BOOL)executeSaveRequest:(id)arg1 response:(id*)arg2 error:(id*)arg3 ;
-(id)contactObservableForFetchRequest:(id)arg1 ;
-(id)identifierWithError:(id*)arg1 ;
-(id)groupsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(BOOL)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4 ;
-(id)contactIdentifierWithMatchingDictionary:(id)arg1 ;
-(id)initWithContactsEnvironment:(id)arg1 addressBook:(id)arg2 managedConfiguration:(id)arg3 ;
-(BOOL)canExecuteSaveRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)_fechAllRecordsInSaveContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)_processAccountsFromSaveContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)_processContainersFromSaveContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)_processContactsFromSaveContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)_processGroupsFromSaveContext:(id)arg1 error:(id*)arg2 ;
-(void)_postProcessContactsFromSaveContext:(id)arg1 ;
-(void)_postProcessGroupsFromSaveContext:(id)arg1 ;
-(void)_postProcessContainersFromSaveContext:(id)arg1 ;
-(BOOL)_fetchAccountsInSaveContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)_fetchContainersInSaveContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)_fetchContactsInSaveContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)_fetchGroupsInSaveContext:(id)arg1 error:(id*)arg2 ;
-(id)defaultContainerIdentifierForAddressBook:(void*)arg1 error:(id*)arg2 ;
-(BOOL)_hasManagementRestrictionsEnabled;
-(void*)_defaultSourceInAddressBook:(void*)arg1 error:(id*)arg2 ;
-(BOOL)_hasAccessToWriteToAccountCorrespondingToSource:(void*)arg1 fromAddressBook:(void*)arg2 ;
-(BOOL)_hasWriteAccessToAccountContainingPerson:(void*)arg1 fromSaveContext:(id)arg2 ;
-(BOOL)_processContactChangeRequestsFromSaveContext:(id)arg1 error:(id*)arg2 ;
-(void*)_alternativeSourceWithAccessibleAccountFromAddressBook:(void*)arg1 ;
-(CNManagedAccountsCache *)managedAccountsCache;
-(BOOL)_canWriteUnderManagementRestrictionsToSource:(void*)arg1 inAddressBook:(void*)arg2 ;
-(BOOL)_canReadUnderManagementRestrictionsFromSource:(void*)arg1 inAddressBook:(void*)arg2 ;
-(BOOL)_processContactMembershipsFromSaveContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)_processSubgroupMembershipsFromSaveContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)_hasAccessToReadFromAccountCorrespondingToSource:(void*)arg1 fromAddressBook:(void*)arg2 ;
-(id)_containersMatchingPredicate:(id)arg1 remote:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithAddressBook:(id)arg1 managedConfiguration:(id)arg2 ;
-(id)encodedContactsCursorForFetchRequest:(id)arg1 cursorCleanupBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)setManagedAccountsCache:(CNManagedAccountsCache *)arg1 ;
-(CNiOSAddressBook *)addressBook;
-(id)descriptorForRequiredKeysForMatchingDictionary;
-(id)containersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)defaultContainerIdentifier;
-(id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)userActivityUserInfoForContact:(id)arg1 ;
-(id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)setMeContact:(id)arg1 error:(id*)arg2 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)initWithContactsEnvironment:(id)arg1 ;
-(id)unifiedContactCountWithError:(id*)arg1 ;
-(id)executeFetchRequest:(id)arg1 progressiveResults:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)matchingDictionaryForContact:(id)arg1 ;
-(void)requestAccessForEntityType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<CNContactsLogger>)logger;
-(CNManagedConfiguration *)managedConfiguration;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
@end

