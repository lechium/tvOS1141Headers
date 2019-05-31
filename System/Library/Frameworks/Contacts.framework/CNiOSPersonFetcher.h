/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNiOSPersonFetchRequest, CNContactsEnvironment;

@interface CNiOSPersonFetcher : NSObject {

	void* _addressBook;
	CNiOSPersonFetchRequest* _fetchRequest;
	CNContactsEnvironment* _environment;

}
+(id)peopleForFetchRequest:(id)arg1 matchInfos:(id*)arg2 inAddressBook:(void*)arg3 environment:(id)arg4 error:(id*)arg5 ;
-(void)dealloc;
-(id)initWithAddressBook:(void*)arg1 fetchRequest:(id)arg2 environment:(id)arg3 ;
-(id)fetchPeopleReturningMatchInfos:(id*)arg1 error:(id*)arg2 ;
-(id)fetchPeopleUsingNativeSortReturningMatchInfos:(id*)arg1 error:(id*)arg2 ;
-(BOOL)shouldSortInMemory;
-(id)sortPeople:(id)arg1 ;
-(id)executeFetchRequestWithProgressiveResults:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end
