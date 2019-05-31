/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactFetchRequest, CNContactsEnvironment, CNManagedConfiguration;

@interface CNiOSContactFetcher : NSObject {

	void* _addressBook;
	CNContactFetchRequest* _fetchRequest;
	/*^block*/id _personToContact;
	CNContactsEnvironment* _environment;
	CNManagedConfiguration* _managedConfiguration;

}
+(/*^block*/id)linkedPeopleComparator;
+(id)contactsForFetchRequest:(id)arg1 matchInfos:(id*)arg2 inAddressBook:(void*)arg3 environment:(id)arg4 managedConfiguration:(id)arg5 error:(id*)arg6 ;
-(void)dealloc;
-(id)executeFetchRequestWithProgressiveResults:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithFetchRequest:(id)arg1 addressBook:(void*)arg2 environment:(id)arg3 managedConfiguration:(id)arg4 ;
-(id)fetchContactsReturningMatchInfos:(id*)arg1 error:(id*)arg2 ;
-(void)_batchLoadPropertiesForPeople:(id)arg1 keysToFetch:(id)arg2 ;
-(id)unifyPeople:(id)arg1 keysToFetch:(id)arg2 abMatchInfos:(id)arg3 filteredForAccountIdentifiers:(id)arg4 outCNMatchInfos:(id*)arg5 ;
-(id)_abMatchMetadataToCNContactMatchInfoArray:(id)arg1 ;
-(id)_peopleToContactsArray:(id)arg1 abMatchInfo:(id)arg2 keysToFetch:(id)arg3 ;
@end

