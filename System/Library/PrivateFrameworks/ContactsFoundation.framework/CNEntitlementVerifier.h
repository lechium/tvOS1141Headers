/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ContactsFoundation/ContactsFoundation-Structs.h>
@interface CNEntitlementVerifier : NSObject
+(BOOL)secTask:(SecTaskRef)arg1 hasBooleanEntitlement:(id)arg2 error:(id*)arg3 ;
+(BOOL)auditToken:(SCD_Struct_CN1)arg1 hasBooleanEntitlement:(id)arg2 error:(id*)arg3 ;
+(BOOL)currentProcessHasBooleanEntitlement:(id)arg1 error:(id*)arg2 ;
@end
