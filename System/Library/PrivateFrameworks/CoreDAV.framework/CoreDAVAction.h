/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CoreDAVAction : NSObject {

	int _action;
	id _context;
	id _changeContext;

}

@property (nonatomic,readonly) int action;                  //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) id context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id changeContext;              //@synthesize changeContext=_changeContext - In the implementation block
-(id)description;
-(int)action;
-(id)context;
-(id)initWithAction:(int)arg1 context:(id)arg2 ;
-(id)changeContext;
-(void)setChangeContext:(id)arg1 ;
@end

