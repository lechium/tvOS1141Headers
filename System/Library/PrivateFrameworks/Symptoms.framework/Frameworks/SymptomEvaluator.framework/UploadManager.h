/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UploadSessionDelegate.h>

@class NSMutableArray, NSString;

@interface UploadManager : NSObject <UploadSessionDelegate> {

	NSMutableArray* _uploadSessions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)reportFailureAWDMetricWithIdentifier:(id)arg1 radar:(long long)arg2 urgency:(long long)arg3 requestTime:(id)arg4 preflightStatus:(short)arg5 userConsentStatus:(short)arg6 apnsIdentifier:(unsigned long long)arg7 fileInfo:(id)arg8 ;
-(void)uploadFiles:(id)arg1 toRadar:(id)arg2 identifier:(id)arg3 urgency:(long long)arg4 extraHTTPHeaders:(id)arg5 context:(id)arg6 ;
-(void)uploadFiles:(id)arg1 toURL:(id)arg2 toRadar:(id)arg3 identifier:(id)arg4 urgency:(long long)arg5 extraHTTPHeaders:(id)arg6 context:(id)arg7 ;
-(void)reportAWDMetricForUploadSession:(id)arg1 requestState:(short)arg2 preflightStatus:(short)arg3 userConsentStatus:(short)arg4 ;
-(void)uploadSessionCompleted:(id)arg1 ;
-(void)uploadSessionFailed:(id)arg1 ;
-(void)uploadFiles:(id)arg1 to:(id)arg2 identifier:(id)arg3 urgency:(long long)arg4 extraHTTPHeaders:(id)arg5 context:(id)arg6 ;
@end

