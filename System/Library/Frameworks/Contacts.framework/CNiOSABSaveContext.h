/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNMutableSaveResponse, NSMapTable, NSMutableDictionary, CNSaveRequest;

@interface CNiOSABSaveContext : NSObject {

	void* _addressBook;
	CNMutableSaveResponse* _saveResponse;
	NSMapTable* _contactIndicesByInstance;
	NSMapTable* _groupIndicesByInstance;
	NSMapTable* _containerIndicesByInstance;
	NSMutableDictionary* _abPersonsByIdentifier;
	NSMutableDictionary* _abGroupsByIdentifier;
	NSMutableDictionary* _abSourcesByIdentifier;
	NSMutableDictionary* _abAccountsByIdentifier;
	CNSaveRequest* _saveRequest;

}

@property (nonatomic,retain) NSMutableDictionary * abPersonsByIdentifier;               //@synthesize abPersonsByIdentifier=_abPersonsByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * abGroupsByIdentifier;                //@synthesize abGroupsByIdentifier=_abGroupsByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * abSourcesByIdentifier;               //@synthesize abSourcesByIdentifier=_abSourcesByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * abAccountsByIdentifier;              //@synthesize abAccountsByIdentifier=_abAccountsByIdentifier - In the implementation block
@property (nonatomic,readonly) CNSaveRequest * saveRequest;                             //@synthesize saveRequest=_saveRequest - In the implementation block
@property (nonatomic,readonly) CNMutableSaveResponse * saveResponse;                    //@synthesize saveResponse=_saveResponse - In the implementation block
@property (nonatomic,readonly) void* addressBook; 
-(CNSaveRequest *)saveRequest;
-(void)dealloc;
-(void)_populateSaveRequestIndexTables;
-(id)initWithSaveRequest:(id)arg1 response:(id)arg2 addressBook:(void*)arg3 ;
-(id)indexPathForContactInstance:(id)arg1 ;
-(id)indexPathForGroupInstance:(id)arg1 ;
-(id)indexPathForContainerInstance:(id)arg1 ;
-(NSMutableDictionary *)abPersonsByIdentifier;
-(void)setAbPersonsByIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)abGroupsByIdentifier;
-(void)setAbGroupsByIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)abSourcesByIdentifier;
-(void)setAbSourcesByIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)abAccountsByIdentifier;
-(void)setAbAccountsByIdentifier:(NSMutableDictionary *)arg1 ;
-(CNMutableSaveResponse *)saveResponse;
-(void*)addressBook;
@end

