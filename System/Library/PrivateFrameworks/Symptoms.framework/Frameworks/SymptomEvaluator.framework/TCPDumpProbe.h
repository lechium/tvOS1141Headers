/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/NetDiagnosticProbe.h>

@protocol TCPDumpProbeDelegate, OS_dispatch_source;
@class NSMutableArray, NSObject;

@interface TCPDumpProbe : NetDiagnosticProbe {

	NSMutableArray* _probeOutputFilePaths;
	id<TCPDumpProbeDelegate> _delegate;
	double _duration;
	NSObject*<OS_dispatch_source> _tcpDumpTimer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> tcpDumpTimer;              //@synthesize tcpDumpTimer=_tcpDumpTimer - In the implementation block
@property (retain) id<TCPDumpProbeDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign) double duration;                                                   //@synthesize duration=_duration - In the implementation block
-(id<TCPDumpProbeDelegate>)delegate;
-(void)setDelegate:(id<TCPDumpProbeDelegate>)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)cancelTest:(/*^block*/id)arg1 ;
-(BOOL)startNetDiagnosticsTask:(/*^block*/id)arg1 ;
-(BOOL)stopNetDiagnosticsTask:(/*^block*/id)arg1 ;
-(void)setTcpDumpTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)tcpDumpTimer;
-(void)cancelTimer;
-(id)probeOutputFilePaths;
@end
