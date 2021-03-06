/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADEventPredicate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CADCalendarItemsWithExternalIdentifierPredicate : CADEventPredicate <NSSecureCoding> {

	int _entityType;
	NSString* _externalIdentifier;

}

@property (nonatomic,readonly) NSString * externalIdentifier;              //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (nonatomic,readonly) int entityType;                             //@synthesize entityType=_entityType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithExternalIdentifier:(id)arg1 ;
-(NSString *)externalIdentifier;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(id)initWithExternalIdentifier:(id)arg1 entityType:(int)arg2 ;
-(int)entityType;
-(id)predicateFormat;
@end

