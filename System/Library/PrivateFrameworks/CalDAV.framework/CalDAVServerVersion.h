/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalDAV/CalDAV-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface CalDAVServerVersion : NSObject <NSCopying> {

	BOOL _supportsTimeRangeFilter;
	BOOL _supportsTodoTimeRangeFilter;
	BOOL _supportsTimeRangeFilterWithoutEndDate;
	BOOL _supportsTimeRangeFilterOnInbox;
	BOOL _supportsAutoSchedule;
	BOOL _supportsPrivateComments;
	BOOL _supportsLikenessPropagation;
	BOOL _supportsSharing;
	BOOL _supportsSharingNoScheduling;
	BOOL _supportsCalendarProxy;
	BOOL _supportsInboxAvailability;
	BOOL _supportsPrivateEvents;
	BOOL _supportsSubscriptionCalendars;
	BOOL _supportsPrincipalPropertySearch;
	BOOL _supportsExtendedCalendarQuery;
	BOOL _supportsRequestCompression;
	BOOL _supportsManagedAttachments;
	BOOL _supportsCheckForValidEmail;
	BOOL _supportsChecksumming;
	BOOL _supportsCalendarHomeSync;
	BOOL _supportsCalendarNoTimezone;
	BOOL _supportsCalendarRecurrenceSplit;
	BOOL _alwaysSupportsFreebusyOnOutbox;
	BOOL _supportsCalendarAudit;
	BOOL _supportsTelephone;
	double _version;
	NSString* _supportedCalendarComponentSets;
	NSSet* _complianceClasses;
	NSString* _serverHeader;

}

@property (assign,nonatomic) double version;                                          //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL supportsTimeRangeFilter;                            //@synthesize supportsTimeRangeFilter=_supportsTimeRangeFilter - In the implementation block
@property (assign,nonatomic) BOOL supportsTodoTimeRangeFilter;                        //@synthesize supportsTodoTimeRangeFilter=_supportsTodoTimeRangeFilter - In the implementation block
@property (assign,nonatomic) BOOL supportsTimeRangeFilterWithoutEndDate;              //@synthesize supportsTimeRangeFilterWithoutEndDate=_supportsTimeRangeFilterWithoutEndDate - In the implementation block
@property (assign,nonatomic) BOOL supportsTimeRangeFilterOnInbox;                     //@synthesize supportsTimeRangeFilterOnInbox=_supportsTimeRangeFilterOnInbox - In the implementation block
@property (assign,nonatomic) BOOL supportsAutoSchedule;                               //@synthesize supportsAutoSchedule=_supportsAutoSchedule - In the implementation block
@property (assign,nonatomic) BOOL supportsPrivateComments;                            //@synthesize supportsPrivateComments=_supportsPrivateComments - In the implementation block
@property (assign,nonatomic) BOOL supportsLikenessPropagation;                        //@synthesize supportsLikenessPropagation=_supportsLikenessPropagation - In the implementation block
@property (assign,nonatomic) BOOL supportsSharing;                                    //@synthesize supportsSharing=_supportsSharing - In the implementation block
@property (assign,nonatomic) BOOL supportsSharingNoScheduling;                        //@synthesize supportsSharingNoScheduling=_supportsSharingNoScheduling - In the implementation block
@property (assign,nonatomic) BOOL supportsCalendarProxy;                              //@synthesize supportsCalendarProxy=_supportsCalendarProxy - In the implementation block
@property (assign,nonatomic) BOOL supportsInboxAvailability;                          //@synthesize supportsInboxAvailability=_supportsInboxAvailability - In the implementation block
@property (assign,nonatomic) BOOL supportsPrivateEvents;                              //@synthesize supportsPrivateEvents=_supportsPrivateEvents - In the implementation block
@property (assign,nonatomic) BOOL supportsSubscriptionCalendars;                      //@synthesize supportsSubscriptionCalendars=_supportsSubscriptionCalendars - In the implementation block
@property (assign,nonatomic) BOOL supportsPrincipalPropertySearch;                    //@synthesize supportsPrincipalPropertySearch=_supportsPrincipalPropertySearch - In the implementation block
@property (assign,nonatomic) BOOL supportsExtendedCalendarQuery;                      //@synthesize supportsExtendedCalendarQuery=_supportsExtendedCalendarQuery - In the implementation block
@property (assign,nonatomic) BOOL supportsRequestCompression;                         //@synthesize supportsRequestCompression=_supportsRequestCompression - In the implementation block
@property (assign,nonatomic) BOOL supportsManagedAttachments;                         //@synthesize supportsManagedAttachments=_supportsManagedAttachments - In the implementation block
@property (assign,nonatomic) BOOL supportsCheckForValidEmail;                         //@synthesize supportsCheckForValidEmail=_supportsCheckForValidEmail - In the implementation block
@property (assign,nonatomic) BOOL supportsChecksumming;                               //@synthesize supportsChecksumming=_supportsChecksumming - In the implementation block
@property (assign,nonatomic) BOOL supportsCalendarHomeSync;                           //@synthesize supportsCalendarHomeSync=_supportsCalendarHomeSync - In the implementation block
@property (assign,nonatomic) BOOL supportsCalendarNoTimezone;                         //@synthesize supportsCalendarNoTimezone=_supportsCalendarNoTimezone - In the implementation block
@property (assign,nonatomic) BOOL supportsCalendarRecurrenceSplit;                    //@synthesize supportsCalendarRecurrenceSplit=_supportsCalendarRecurrenceSplit - In the implementation block
@property (assign,nonatomic) BOOL supportsCalendarAudit;                              //@synthesize supportsCalendarAudit=_supportsCalendarAudit - In the implementation block
@property (assign,nonatomic) BOOL supportsTelephone;                                  //@synthesize supportsTelephone=_supportsTelephone - In the implementation block
@property (assign,nonatomic) BOOL alwaysSupportsFreebusyOnOutbox;                     //@synthesize alwaysSupportsFreebusyOnOutbox=_alwaysSupportsFreebusyOnOutbox - In the implementation block
@property (nonatomic,copy) NSString * supportedCalendarComponentSets;                 //@synthesize supportedCalendarComponentSets=_supportedCalendarComponentSets - In the implementation block
@property (nonatomic,retain) NSSet * complianceClasses;                               //@synthesize complianceClasses=_complianceClasses - In the implementation block
@property (nonatomic,copy) NSString * serverHeader;                                   //@synthesize serverHeader=_serverHeader - In the implementation block
@property (nonatomic,readonly) NSString * type; 
+(id)versionWithHTTPHeaders:(id)arg1 ;
+(id)_prototypeMatchingServerHeaders:(id)arg1 ;
+(id)versionWithPropertyValue:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(double)arg1 ;
-(double)version;
-(BOOL)supportsPrivateEvents;
-(BOOL)supportsSharing;
-(NSString *)supportedCalendarComponentSets;
-(void)setSupportedCalendarComponentSets:(NSString *)arg1 ;
-(BOOL)alwaysSupportsFreebusyOnOutbox;
-(BOOL)supportsPrincipalPropertySearch;
-(BOOL)supportsExtendedCalendarQuery;
-(void)setSupportsExtendedCalendarQuery:(BOOL)arg1 ;
-(BOOL)supportsAutoSchedule;
-(BOOL)supportsTimeRangeFilter;
-(BOOL)supportsTimeRangeFilterOnInbox;
-(BOOL)supportsTimeRangeFilterWithoutEndDate;
-(void)setServerHeader:(NSString *)arg1 ;
-(id)_propertiesToComplianceClasses;
-(id)_additionalFlagKeys;
-(void)setComplianceClasses:(NSSet *)arg1 ;
-(BOOL)supportsInboxAvailability;
-(void)setSupportsInboxAvailability:(BOOL)arg1 ;
-(void)_setPropertiesFromComplianceClasses:(id)arg1 ;
-(void)setSupportsRequestCompression:(BOOL)arg1 ;
-(NSString *)serverHeader;
-(NSSet *)complianceClasses;
-(id)_allFlagKeys;
-(BOOL)supportsRequestCompression;
-(id)propertyValue;
-(void)setSupportsTimeRangeFilter:(BOOL)arg1 ;
-(BOOL)supportsTodoTimeRangeFilter;
-(void)setSupportsTodoTimeRangeFilter:(BOOL)arg1 ;
-(void)setSupportsTimeRangeFilterWithoutEndDate:(BOOL)arg1 ;
-(void)setSupportsTimeRangeFilterOnInbox:(BOOL)arg1 ;
-(void)setSupportsAutoSchedule:(BOOL)arg1 ;
-(BOOL)supportsPrivateComments;
-(void)setSupportsPrivateComments:(BOOL)arg1 ;
-(BOOL)supportsLikenessPropagation;
-(void)setSupportsLikenessPropagation:(BOOL)arg1 ;
-(void)setSupportsSharing:(BOOL)arg1 ;
-(BOOL)supportsSharingNoScheduling;
-(void)setSupportsSharingNoScheduling:(BOOL)arg1 ;
-(BOOL)supportsCalendarProxy;
-(void)setSupportsCalendarProxy:(BOOL)arg1 ;
-(void)setSupportsPrivateEvents:(BOOL)arg1 ;
-(BOOL)supportsSubscriptionCalendars;
-(void)setSupportsSubscriptionCalendars:(BOOL)arg1 ;
-(void)setSupportsPrincipalPropertySearch:(BOOL)arg1 ;
-(BOOL)supportsManagedAttachments;
-(void)setSupportsManagedAttachments:(BOOL)arg1 ;
-(BOOL)supportsCheckForValidEmail;
-(void)setSupportsCheckForValidEmail:(BOOL)arg1 ;
-(BOOL)supportsChecksumming;
-(void)setSupportsChecksumming:(BOOL)arg1 ;
-(BOOL)supportsCalendarHomeSync;
-(void)setSupportsCalendarHomeSync:(BOOL)arg1 ;
-(BOOL)supportsCalendarNoTimezone;
-(void)setSupportsCalendarNoTimezone:(BOOL)arg1 ;
-(BOOL)supportsCalendarRecurrenceSplit;
-(void)setSupportsCalendarRecurrenceSplit:(BOOL)arg1 ;
-(void)setAlwaysSupportsFreebusyOnOutbox:(BOOL)arg1 ;
-(BOOL)supportsCalendarAudit;
-(void)setSupportsCalendarAudit:(BOOL)arg1 ;
-(BOOL)supportsTelephone;
-(void)setSupportsTelephone:(BOOL)arg1 ;
@end

