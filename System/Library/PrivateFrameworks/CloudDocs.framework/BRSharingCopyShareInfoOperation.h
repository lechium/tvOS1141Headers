/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharingCopyShareInfoOperation : BROperation {

	NSURL* _fileURL;
	/*^block*/id _copyShareInfoCompletionBlock;

}

@property (copy) id copyShareInfoCompletionBlock;              //@synthesize copyShareInfoCompletionBlock=_copyShareInfoCompletionBlock - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)copyShareInfoCompletionBlock;
-(void)setCopyShareInfoCompletionBlock:(id)arg1 ;
@end

