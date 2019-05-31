/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CADPermissionValidator.h>

@class ClientConnection, NSString;

@interface CADDefaultPermissionValidator : NSObject <CADPermissionValidator> {

	ClientConnection* _connection;

}

@property (retain) ClientConnection * connection;                       //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL canModifySuggestedEventCalendar; 
@property (readonly) BOOL canMakeSpotlightChanges; 
@property (readonly) BOOL canModifyCalendarDatabase; 
@property (readonly) BOOL testingAccessLevelGranted; 
@property (readonly) BOOL internalAccessLevelGranted; 
@property (readonly) BOOL hasContactsUIEntitlement; 
@property (readonly) BOOL hasMigrationEntitlement; 
@property (readonly) BOOL hasSyncClientEntitlement; 
@property (readonly) BOOL hasCalendarToolEntitlement; 
-(ClientConnection *)connection;
-(void)setConnection:(ClientConnection *)arg1 ;
-(id)initWithClientConnection:(id)arg1 ;
-(BOOL)testingAccessLevelGranted;
-(BOOL)hasMigrationEntitlement;
-(BOOL)hasSyncClientEntitlement;
-(BOOL)hasCalendarToolEntitlement;
-(BOOL)hasContactsUIEntitlement;
-(BOOL)canMakeSpotlightChanges;
-(BOOL)internalAccessLevelGranted;
-(BOOL)_valueForBooleanEntitlement:(id)arg1 defaultValue:(BOOL)arg2 ;
-(BOOL)canModifySuggestedEventCalendar;
-(BOOL)canModifyCalendarDatabase;
@end

