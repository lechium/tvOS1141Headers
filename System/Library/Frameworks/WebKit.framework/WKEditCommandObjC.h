/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WKEditCommandObjC : NSObject {

	RefPtr<WebKit::WebEditCommandProxy, WTF::DumbPtrTraits<WebKit::WebEditCommandProxy> >* m_command;

}
-(id)initWithWebEditCommandProxy:(Ref<WebKit::WebEditCommandProxy, WTF::DumbPtrTraits<WebKit::WebEditCommandProxy> >*)arg1 ;
-(WebEditCommandProxy*)command;
@end
