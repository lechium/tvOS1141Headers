/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface DSArchivePath : NSObject {

	BOOL _root;
	NSURL* _sourceUrl;
	NSString* _prefix;

}

@property (nonatomic,retain) NSURL * sourceUrl;              //@synthesize sourceUrl=_sourceUrl - In the implementation block
@property (nonatomic,retain) NSString * prefix;              //@synthesize prefix=_prefix - In the implementation block
@property (assign,nonatomic) BOOL root;                      //@synthesize root=_root - In the implementation block
+(id)archivePathWithSource:(id)arg1 prefix:(id)arg2 root:(BOOL)arg3 ;
-(NSURL *)sourceUrl;
-(void)setSourceUrl:(NSURL *)arg1 ;
-(void)setPrefix:(NSString *)arg1 ;
-(BOOL)root;
-(NSString *)prefix;
-(void)setRoot:(BOOL)arg1 ;
-(id)initWithSource:(id)arg1 prefix:(id)arg2 root:(BOOL)arg3 ;
@end
