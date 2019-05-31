/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/QLPreviewItem.h>

@class NSURL, NSString;

@interface CNContactPhotoPreviewItem : NSObject <QLPreviewItem> {

	NSURL* _previewItemURL;
	NSString* _previewItemTitle;

}

@property (nonatomic,retain) NSURL * previewItemURL;                   //@synthesize previewItemURL=_previewItemURL - In the implementation block
@property (nonatomic,retain) NSString * previewItemTitle;              //@synthesize previewItemTitle=_previewItemTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)previewItemURL;
-(NSString *)previewItemTitle;
-(void)setPreviewItemURL:(NSURL *)arg1 ;
-(void)setPreviewItemTitle:(NSString *)arg1 ;
@end
