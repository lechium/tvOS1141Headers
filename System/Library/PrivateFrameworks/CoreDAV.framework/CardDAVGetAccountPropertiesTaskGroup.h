/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVGetAccountPropertiesTaskGroup.h>

@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {

	NSSet* _addressBookHomes;
	NSSet* _directoryGatewayURLs;

}

@property (nonatomic,readonly) NSSet * addressBookHomes;                  //@synthesize addressBookHomes=_addressBookHomes - In the implementation block
@property (nonatomic,readonly) NSSet * directoryGatewayURLs;              //@synthesize directoryGatewayURLs=_directoryGatewayURLs - In the implementation block
-(id)description;
-(id)directoryGatewayURL;
-(NSSet *)addressBookHomes;
-(NSSet *)directoryGatewayURLs;
-(id)_copyAccountPropertiesPropFindElements;
-(void)_setPropertiesFromParsedResponses:(id)arg1 ;
-(id)homeSet;
@end

