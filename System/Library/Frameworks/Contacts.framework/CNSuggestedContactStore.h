/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNContactStore.h>

@protocol SGSuggestionsServiceContactsProtocol;
@interface CNSuggestedContactStore : CNContactStore {

	id<SGSuggestionsServiceContactsProtocol> _suggestionService;

}

@property (nonatomic,retain) id<SGSuggestionsServiceContactsProtocol> suggestionService;              //@synthesize suggestionService=_suggestionService - In the implementation block
+(id)storeIdentifier;
+(void)initialize;
+(id)storeInfoClasses;
+(BOOL)isSuggestionsSupported;
-(id)init;
-(id)requestAccessForEntityType:(long long)arg1 ;
-(id)initWithSuggestionsService:(id)arg1 ;
-(BOOL)_processSuggestions:(id)arg1 error:(id*)arg2 withBlock:(/*^block*/id)arg3 ;
-(id<SGSuggestionsServiceContactsProtocol>)suggestionService;
-(void)setSuggestionService:(id<SGSuggestionsServiceContactsProtocol>)arg1 ;
-(id)originForSuggestion:(id)arg1 error:(id*)arg2 ;
-(BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
@end

