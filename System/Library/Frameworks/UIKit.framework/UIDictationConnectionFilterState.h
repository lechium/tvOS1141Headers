/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIDictationConnectionFilterState : NSObject {

	CFStringRef _transform;
	/*^block*/id _pendingDictationCommand;

}

@property (assign,nonatomic) CFStringRef transform;                 //@synthesize transform=_transform - In the implementation block
@property (nonatomic,copy) id pendingDictationCommand;              //@synthesize pendingDictationCommand=_pendingDictationCommand - In the implementation block
-(void)dealloc;
-(void)setTransform:(CFStringRef)arg1 ;
-(CFStringRef)transform;
-(void)setPendingDictationCommand:(id)arg1 ;
-(id)pendingDictationCommand;
@end

