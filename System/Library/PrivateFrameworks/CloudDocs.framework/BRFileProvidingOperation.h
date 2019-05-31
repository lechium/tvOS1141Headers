/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRFileProvidingOperation : BROperation {

	NSURL* _url;
	unsigned long long _readingOptions;
	/*^block*/id _fileProvidingCompletion;
	BOOL _wantsCurrentVersion;

}

@property (assign,nonatomic) BOOL wantsCurrentVersion;              //@synthesize wantsCurrentVersion=_wantsCurrentVersion - In the implementation block
@property (nonatomic,copy) id fileProvidingCompletion;              //@synthesize fileProvidingCompletion=_fileProvidingCompletion - In the implementation block
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)fileProvidingCompletion;
-(void)setFileProvidingCompletion:(id)arg1 ;
-(id)initWithURL:(id)arg1 readingOptions:(unsigned long long)arg2 ;
-(BOOL)wantsCurrentVersion;
-(void)setWantsCurrentVersion:(BOOL)arg1 ;
@end

