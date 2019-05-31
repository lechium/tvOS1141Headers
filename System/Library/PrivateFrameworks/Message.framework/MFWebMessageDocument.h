/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFWebAttachmentSource.h>

@class NSURL, MFMimeBody, MFMimePart, NSData, MFLock, NSMutableDictionary, MFAttachmentManager;

@interface MFWebMessageDocument : MFWebAttachmentSource {

	unsigned _uniqueId;
	NSURL* _baseURL;
	MFMimeBody* _mimeBody;
	MFMimePart* _htmlPart;
	NSData* _htmlData;
	MFLock* _lock;
	NSMutableDictionary* _partsByURL;
	NSMutableDictionary* _partsByFilename;
	unsigned _preferredEncoding;
	BOOL _visuallyEmpty;
	MFAttachmentManager* _attachmentManager;

}

@property (getter=isVisuallyEmpty) BOOL visuallyEmpty;                             //@synthesize visuallyEmpty=_visuallyEmpty - In the implementation block
@property (readonly) NSURL * baseURL;                                              //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) MFMimeBody * mimeBody;                                        //@synthesize mimeBody=_mimeBody - In the implementation block
@property (readonly) MFMimePart * mimePart;                                        //@synthesize htmlPart=_htmlPart - In the implementation block
@property (readonly) NSData * htmlData;                                            //@synthesize htmlData=_htmlData - In the implementation block
@property (assign) unsigned preferredEncoding;                                     //@synthesize preferredEncoding=_preferredEncoding - In the implementation block
@property (nonatomic,retain) MFAttachmentManager * attachmentManager;              //@synthesize attachmentManager=_attachmentManager - In the implementation block
-(NSURL *)baseURL;
-(id)init;
-(void)dealloc;
-(id)fileWrapper;
-(MFMimeBody *)mimeBody;
-(unsigned)preferredEncoding;
-(void)setPreferredEncoding:(unsigned)arg1 ;
-(MFMimePart *)mimePart;
-(id)initWithMimePart:(id)arg1 ;
-(id)_initWithMimePart:(id)arg1 htmlData:(id)arg2 ;
-(id)attachmentForURL:(id)arg1 ;
-(id)mimePartForURL:(id)arg1 ;
-(NSData *)htmlData;
-(id)initWithMimeBody:(id)arg1 ;
-(id)initWithMimePart:(id)arg1 htmlData:(id)arg2 encoding:(unsigned)arg3 ;
-(id)attachmentsInDocument;
-(id)preferredCharacterSet;
-(BOOL)isVisuallyEmpty;
-(void)setVisuallyEmpty:(BOOL)arg1 ;
-(MFAttachmentManager *)attachmentManager;
-(void)setAttachmentManager:(MFAttachmentManager *)arg1 ;
@end
