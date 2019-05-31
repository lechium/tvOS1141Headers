/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSRunLoop;


@protocol CoreDAVTaskManager <NSObject>
@property (nonatomic,retain) NSRunLoop * workRunLoop; 
@required
-(void)submitIndependentCoreDAVTask:(id)arg1;
-(void)coreDAVTaskDidFinish:(id)arg1;
-(void)coreDAVTaskEndModal:(id)arg1;
-(void)coreDAVTaskRequestModal:(id)arg1;
-(NSRunLoop *)workRunLoop;
-(void)setWorkRunLoop:(id)arg1;
-(void)submitQueuedCoreDAVTask:(id)arg1;
-(void)shutdown;

@end

