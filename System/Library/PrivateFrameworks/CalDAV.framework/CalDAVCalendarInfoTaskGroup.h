/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainerInfoTaskGroup.h>

@interface CalDAVCalendarInfoTaskGroup : CoreDAVContainerInfoTaskGroup {

	BOOL _fetchSharees;

}

@property (assign,nonatomic) BOOL fetchSharees;              //@synthesize fetchSharees=_fetchSharees - In the implementation block
-(id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 taskManager:(id)arg3 ;
-(id)_copyContainerParserMappings;
-(BOOL)fetchSharees;
-(id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2 ;
-(id)containerForURL:(id)arg1 ;
-(void)setFetchSharees:(BOOL)arg1 ;
@end
