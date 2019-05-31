/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@protocol CalDAVCalendar, CalDAVPrincipal;
@class CalDAVBulkUploadTaskGroup;

@interface CalDAVMergeUploadTaskGroup : CoreDAVTaskGroup {

	BOOL _shouldTrySyncTokenForBulkUpload;
	CalDAVBulkUploadTaskGroup* _uploadTaskGroup;
	id<CalDAVCalendar> _calendar;
	id<CalDAVPrincipal> _principal;

}

@property (nonatomic,retain) CalDAVBulkUploadTaskGroup * uploadTaskGroup;              //@synthesize uploadTaskGroup=_uploadTaskGroup - In the implementation block
@property (nonatomic,retain) id<CalDAVCalendar> calendar;                              //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) id<CalDAVPrincipal> principal;                            //@synthesize principal=_principal - In the implementation block
@property (assign,nonatomic) BOOL shouldTrySyncTokenForBulkUpload;                     //@synthesize shouldTrySyncTokenForBulkUpload=_shouldTrySyncTokenForBulkUpload - In the implementation block
-(void)dealloc;
-(void)setCalendar:(id<CalDAVCalendar>)arg1 ;
-(id<CalDAVCalendar>)calendar;
-(void)startTaskGroup;
-(id)dataContentType;
-(void)cancelTaskGroup;
-(id)initWithCalendar:(id)arg1 principal:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4 ;
-(CalDAVBulkUploadTaskGroup *)uploadTaskGroup;
-(BOOL)shouldTrySyncTokenForBulkUpload;
-(void)setShouldTrySyncTokenForBulkUpload:(BOOL)arg1 ;
-(void)_performBulkUpload;
-(void)_performRegularUpload;
-(void)setUploadTaskGroup:(CalDAVBulkUploadTaskGroup *)arg1 ;
-(void)setPrincipal:(id<CalDAVPrincipal>)arg1 ;
-(id<CalDAVPrincipal>)principal;
@end
