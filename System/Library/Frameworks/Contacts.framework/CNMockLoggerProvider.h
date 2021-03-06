/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactsLoggerProvider.h>

@protocol CNContactsLogger, CNSpotlightIndexingLogger, CNRegulatoryLogger;
@class NSString;

@interface CNMockLoggerProvider : NSObject <CNContactsLoggerProvider> {

	id<CNContactsLogger> _contactsLogger;
	id<CNSpotlightIndexingLogger> _spotlightIndexingLogger;
	id<CNRegulatoryLogger> _regulatoryLogger;

}

@property (nonatomic,retain) id<CNContactsLogger> contactsLogger;                                //@synthesize contactsLogger=_contactsLogger - In the implementation block
@property (nonatomic,retain) id<CNSpotlightIndexingLogger> spotlightIndexingLogger;              //@synthesize spotlightIndexingLogger=_spotlightIndexingLogger - In the implementation block
@property (nonatomic,retain) id<CNRegulatoryLogger> regulatoryLogger;                            //@synthesize regulatoryLogger=_regulatoryLogger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loggerProvider;
-(id<CNContactsLogger>)contactsLogger;
-(id<CNSpotlightIndexingLogger>)spotlightIndexingLogger;
-(id<CNRegulatoryLogger>)regulatoryLogger;
-(void)setContactsLogger:(id<CNContactsLogger>)arg1 ;
-(void)setSpotlightIndexingLogger:(id<CNSpotlightIndexingLogger>)arg1 ;
-(void)setRegulatoryLogger:(id<CNRegulatoryLogger>)arg1 ;
@end

