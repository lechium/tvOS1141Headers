/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNManagedProfileConnection;
#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class NSString;

@interface CNManagedConfiguration : NSObject {

	NSString* _bundleIdentifier;
	id<CNManagedProfileConnection> _profileConnection;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) id<CNManagedProfileConnection> profileConnection;              //@synthesize profileConnection=_profileConnection - In the implementation block
+(id)bundleIdentifierFromEntitlementForAuditToken:(SCD_Struct_CN1*)arg1 ;
+(id)os_log;
+(id)bundleIdentifierFromInfoPlistForAuditToken:(SCD_Struct_CN1*)arg1 ;
+(id)bundleIdentifierForAuditToken:(SCD_Struct_CN1*)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 managedProfileConnection:(id)arg2 ;
-(BOOL)accountIsManaged:(id)arg1 ;
-(id)readableAccountsFromAccounts:(id)arg1 ;
-(id)writableAccountsFromAccounts:(id)arg1 ;
-(id)initWithAuditToken:(SCD_Struct_CN1)arg1 managedProfileConnection:(id)arg2 ;
-(BOOL)accountIsManagedForIdentifier:(id)arg1 ;
-(id)writableAccountIdentifiersFromIdentifiers:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(BOOL)deviceHasManagementRestrictions;
-(id)readableAccountIdentifiersFromIdentifiers:(id)arg1 ;
-(id)accountForIdentifier:(id)arg1 ;
-(BOOL)allowsLocalAccount;
-(BOOL)canWriteToAccountWithIdentifier:(id)arg1 ;
-(BOOL)canReadFromAccountWithIdentifier:(id)arg1 ;
-(id<CNManagedProfileConnection>)profileConnection;
@end
