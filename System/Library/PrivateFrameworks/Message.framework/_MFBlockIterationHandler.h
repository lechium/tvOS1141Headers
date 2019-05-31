/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFSearchResultHandler.h>
#import <libobjc.A.dylib/QueryProgressMonitor.h>

@class MFActivityMonitor;

@interface _MFBlockIterationHandler : NSObject <MFSearchResultHandler, QueryProgressMonitor> {

	/*^block*/id _block;
	BOOL _cancelled;
	MFActivityMonitor* _monitor;

}
-(void)dealloc;
-(id)filter;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)beginResult:(unsigned)arg1 ;
-(void)setResultSubject:(char*)arg1 ;
-(void)setResultSender:(char*)arg1 ;
-(void)setResultDateRecieved:(double)arg1 ;
-(void)setResultUnread:(BOOL)arg1 ;
-(void)endResult;
-(BOOL)shouldCancel;
-(void)handleMessage:(id)arg1 ;
@end

