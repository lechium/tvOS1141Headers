/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class CoreDAVAction;

@interface CoreDAVActionBackedTask : CoreDAVTask {

	CoreDAVAction* _backingAction;

}

@property (nonatomic,retain) CoreDAVAction * backingAction;              //@synthesize backingAction=_backingAction - In the implementation block
-(id)description;
-(void)setBackingAction:(CoreDAVAction *)arg1 ;
-(CoreDAVAction *)backingAction;
@end

