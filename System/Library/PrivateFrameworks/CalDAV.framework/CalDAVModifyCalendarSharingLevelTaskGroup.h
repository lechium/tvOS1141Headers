/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <libobjc.A.dylib/CoreDAVPropPatchTaskDelegate.h>

@class NSURL, NSString;

@interface CalDAVModifyCalendarSharingLevelTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {

	int _action;
	int _state;
	NSURL* _publishedURL;
	NSURL* _url;

}

@property (assign,nonatomic) int action;                            //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) int state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSURL * publishedURL;                  //@synthesize publishedURL=_publishedURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)state;
-(void)setState:(int)arg1 ;
-(NSURL *)url;
-(int)action;
-(void)setAction:(int)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(NSURL *)publishedURL;
-(void)setPublishedURL:(NSURL *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)startTaskGroup;
-(id)initWithSharingAction:(int)arg1 atCalendarURL:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4 ;
@end

