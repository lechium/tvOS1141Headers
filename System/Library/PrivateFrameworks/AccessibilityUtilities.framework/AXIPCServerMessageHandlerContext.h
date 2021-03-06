/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXIPCServerMessageHandlerContext : NSObject {

	BOOL _async;
	/*^block*/id _handler;
	id _target;
	SEL _selector;

}

@property (nonatomic,readonly) id handler;                    //@synthesize handler=_handler - In the implementation block
@property (nonatomic,__weak,readonly) id target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;                  //@synthesize selector=_selector - In the implementation block
@property (nonatomic,readonly) BOOL async;                    //@synthesize async=_async - In the implementation block
-(BOOL)async;
-(id)target;
-(SEL)selector;
-(id)handler;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 async:(BOOL)arg3 ;
@end

