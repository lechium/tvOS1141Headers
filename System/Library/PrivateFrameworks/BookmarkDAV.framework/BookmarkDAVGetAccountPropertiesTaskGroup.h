/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVGetAccountPropertiesTaskGroup.h>

@class NSSet;

@interface BookmarkDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {

	NSSet* _bookmarkHomes;

}

@property (nonatomic,readonly) NSSet * bookmarkHomes;              //@synthesize bookmarkHomes=_bookmarkHomes - In the implementation block
-(void)dealloc;
-(id)description;
-(id)_copyAccountPropertiesPropFindElements;
-(void)_setPropertiesFromParsedResponses:(id)arg1 ;
-(id)homeSet;
-(NSSet *)bookmarkHomes;
@end
