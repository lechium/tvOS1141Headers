/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactsLoggerProvider.h>

@protocol CNContactsLoggerProvider <NSObject>
@property (nonatomic,readonly) id<CNContactsLogger> contactsLogger; 
@property (nonatomic,readonly) id<CNSpotlightIndexingLogger> spotlightIndexingLogger; 
@property (nonatomic,readonly) id<CNRegulatoryLogger> regulatoryLogger; 
@required
-(id<CNContactsLogger>)contactsLogger;
-(id<CNSpotlightIndexingLogger>)spotlightIndexingLogger;
-(id<CNRegulatoryLogger>)regulatoryLogger;

@end


@protocol CNContactsLogger, CNSpotlightIndexingLogger, CNRegulatoryLogger;
@class NSString;

@interface CNContactsLoggerProvider : NSObject <CNContactsLoggerProvider> {

	id<CNContactsLogger> _contactsLogger;
	id<CNSpotlightIndexingLogger> _spotlightIndexingLogger;
	id<CNRegulatoryLogger> _regulatoryLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CNContactsLogger> contactsLogger; 
@property (nonatomic,readonly) id<CNSpotlightIndexingLogger> spotlightIndexingLogger; 
@property (nonatomic,readonly) id<CNRegulatoryLogger> regulatoryLogger; 
+(id)defaultProvider;
-(id<CNContactsLogger>)contactsLogger;
-(id<CNSpotlightIndexingLogger>)spotlightIndexingLogger;
-(id<CNRegulatoryLogger>)regulatoryLogger;
@end

