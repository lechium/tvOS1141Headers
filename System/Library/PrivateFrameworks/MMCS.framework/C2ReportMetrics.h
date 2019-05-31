/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/C2RequestDelegate.h>

@class NSMutableURLRequest, C2RequestOptions, NSURLSessionTask, NSString;

@interface C2ReportMetrics : NSObject <C2RequestDelegate> {

	NSMutableURLRequest* _metricRequest;
	C2RequestOptions* _metricsOptions;
	NSURLSessionTask* _metricTask;
	/*^block*/id _testBehavior_tooManyTasksRunning;
	/*^block*/id _testBehavior_didCompleteWithError;

}

@property (nonatomic,retain) NSMutableURLRequest * metricRequest;              //@synthesize metricRequest=_metricRequest - In the implementation block
@property (nonatomic,retain) C2RequestOptions * metricsOptions;                //@synthesize metricsOptions=_metricsOptions - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * metricTask;                    //@synthesize metricTask=_metricTask - In the implementation block
@property (nonatomic,copy) id testBehavior_tooManyTasksRunning;                //@synthesize testBehavior_tooManyTasksRunning=_testBehavior_tooManyTasksRunning - In the implementation block
@property (nonatomic,copy) id testBehavior_didCompleteWithError;               //@synthesize testBehavior_didCompleteWithError=_testBehavior_didCompleteWithError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)reportNetworkStatistic:(id)arg1 originalSessionTask:(id)arg2 ;
+(id)requestForNetworkStatistic:(id)arg1 transferOptions:(id)arg2 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)send;
-(NSMutableURLRequest *)metricRequest;
-(void)setMetricRequest:(NSMutableURLRequest *)arg1 ;
-(id)initWithMetricRequest:(id)arg1 transferOptions:(id)arg2 ;
-(C2RequestOptions *)metricsOptions;
-(void)setMetricsOptions:(C2RequestOptions *)arg1 ;
-(NSURLSessionTask *)metricTask;
-(void)setMetricTask:(NSURLSessionTask *)arg1 ;
-(id)testBehavior_tooManyTasksRunning;
-(void)setTestBehavior_tooManyTasksRunning:(id)arg1 ;
-(id)testBehavior_didCompleteWithError;
-(void)setTestBehavior_didCompleteWithError:(id)arg1 ;
-(void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3 ;
-(void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3 ;
@end
