/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKAppNavigationController <NSObject>
@optional
-(void)clear;
-(void)presentModal:(id)arg1 options:(id)arg2;
-(void)dismissModal;

@required
-(void)popDocument;
-(id)documents;
-(void)pushDocument:(id)arg1 options:(id)arg2;
-(void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
-(void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
-(void)popToDocument:(id)arg1;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1;

@end

