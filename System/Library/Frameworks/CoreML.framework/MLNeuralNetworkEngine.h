/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLNeuralNetwork.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>
#import <libobjc.A.dylib/MLCompiledModelLoader.h>
#import <libobjc.A.dylib/MLSpecificationCompiler.h>
#import <libobjc.A.dylib/MLClassifier.h>
#import <libobjc.A.dylib/MLRegressor.h>

@class NSArray, NSString, NSMutableDictionary, MLModelDescription, MLModelInterface, MLModelMetadata;

@interface MLNeuralNetworkEngine : MLModel <MLNeuralNetwork, MLModelSpecificationLoader, MLCompiledModelLoader, MLSpecificationCompiler, MLClassifier, MLRegressor> {

	BOOL _usingCPU;
	BOOL _isEspresoBiasPreprocessingShared;
	int _precision;
	int _engine;
	int _qos;
	unsigned _batchSize;
	unsigned _seqSize;
	NSArray* _classLabels;
	NSString* _classScoreVectorName;
	NSArray* _inputLayers;
	NSArray* _outputLayers;
	unsigned long long _numInputs;
	unsigned long long _numOutputs;
	void* _context;
	void* _plan;
	NSMutableDictionary* _probDict;
	NSString* _modelFilePath;
	SCD_Struct_ML10* _network;
	map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *> > >* _inputBuffers;
	map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *> > >* _outputBuffers;
	map<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t> > >* _params;
	vector<const char *, std::__1::allocator<const char *> >* _names;
	vector<int, std::__1::allocator<int> >* _widths;
	vector<int, std::__1::allocator<int> >* _heights;
	vector<int, std::__1::allocator<int> >* _ks;
	vector<int, std::__1::allocator<int> >* _batches;
	vector<int, std::__1::allocator<int> >* _sequences;

}

@property (nonatomic,readonly) unsigned long long numInputs;                              //@synthesize numInputs=_numInputs - In the implementation block
@property (nonatomic,readonly) unsigned long long numOutputs;                             //@synthesize numOutputs=_numOutputs - In the implementation block
@property (assign,nonatomic) map<std::__1::basic_string<char> inputBuffers;               //@synthesize inputBuffers=_inputBuffers - In the implementation block
@property (assign,nonatomic) map<std::__1::basic_string<char> outputBuffers;              //@synthesize outputBuffers=_outputBuffers - In the implementation block
@property (assign,nonatomic) BOOL usingCPU;                                               //@synthesize usingCPU=_usingCPU - In the implementation block
@property (assign,nonatomic) void* context;                                               //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) void* plan;                                                  //@synthesize plan=_plan - In the implementation block
@property (assign,nonatomic) SCD_Struct_ML10* network;                                    //@synthesize network=_network - In the implementation block
@property (assign,nonatomic) map<std::__1::basic_string<char> params;                     //@synthesize params=_params - In the implementation block
@property (assign,nonatomic) int precision;                                               //@synthesize precision=_precision - In the implementation block
@property (assign,nonatomic) int engine;                                                  //@synthesize engine=_engine - In the implementation block
@property (assign,nonatomic) int qos;                                                     //@synthesize qos=_qos - In the implementation block
@property (assign,nonatomic) BOOL isEspresoBiasPreprocessingShared;                       //@synthesize isEspresoBiasPreprocessingShared=_isEspresoBiasPreprocessingShared - In the implementation block
@property (assign,nonatomic) unsigned batchSize;                                          //@synthesize batchSize=_batchSize - In the implementation block
@property (assign,nonatomic) unsigned seqSize;                                            //@synthesize seqSize=_seqSize - In the implementation block
@property (assign,nonatomic) vector<const char * names;                                   //@synthesize names=_names - In the implementation block
@property (assign,nonatomic) vector<int widths;                                           //@synthesize widths=_widths - In the implementation block
@property (assign,nonatomic) vector<int heights;                                          //@synthesize heights=_heights - In the implementation block
@property (assign,nonatomic) vector<int ks;                                               //@synthesize ks=_ks - In the implementation block
@property (assign,nonatomic) vector<int batches;                                          //@synthesize batches=_batches - In the implementation block
@property (assign,nonatomic) vector<int sequences;                                        //@synthesize sequences=_sequences - In the implementation block
@property (nonatomic,retain) NSArray * classLabels;                                       //@synthesize classLabels=_classLabels - In the implementation block
@property (nonatomic,retain) NSString * classScoreVectorName;                             //@synthesize classScoreVectorName=_classScoreVectorName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * probDict;                              //@synthesize probDict=_probDict - In the implementation block
@property (nonatomic,retain) NSString * modelFilePath;                                    //@synthesize modelFilePath=_modelFilePath - In the implementation block
@property (nonatomic,readonly) NSArray * inputLayers;                                     //@synthesize inputLayers=_inputLayers - In the implementation block
@property (nonatomic,readonly) NSArray * outputLayers;                                    //@synthesize outputLayers=_outputLayers - In the implementation block
@property (nonatomic,readonly) MLModelDescription * modelDescription; 
@property (readonly) MLModelInterface * interface; 
@property (readonly) MLModelMetadata * metadata; 
+(id)compileSpecification:(MLModelSpecification*)arg1 toArchive:(MLModelOutputArchiver*)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)compiledVersionForSpecification:(MLModelSpecification*)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)loadModelFromCompiledArchive:(MLModelInputArchiver*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 error:(id*)arg4 ;
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 error:(id*)arg2 ;
+(id)neuralNetworkFromSpec:(id)arg1 error:(id*)arg2 ;
+(id)neuralNetworkFromSpec:(id)arg1 classScoreVectorName:(id)arg2 classLabels:(id)arg3 error:(id*)arg4 ;
-(void)setQos:(int)arg1 ;
-(int)qos;
-(void)setSequences:(vector<int)arg1 ;
-(vector<int)sequences;
-(NSArray *)inputLayers;
-(vector<const char *)names;
-(void)setNames:(vector<const char *)arg1 ;
-(void)dealloc;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(void)setEngine:(int)arg1 ;
-(unsigned)batchSize;
-(void)setBatchSize:(unsigned)arg1 ;
-(NSArray *)classLabels;
-(id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(NSString *)modelFilePath;
-(void)setModelFilePath:(NSString *)arg1 ;
-(id)evaluate:(id)arg1 error:(id*)arg2 ;
-(NSString *)classScoreVectorName;
-(id)initWithSpec:(id)arg1 classScoreVectorName:(id)arg2 classLabels:(id)arg3 error:(id*)arg4 ;
-(void)_deallocContextAndPlan;
-(BOOL)_setupContextAndPlanWithForceCPU:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)_matchEngineToOptions:(id)arg1 error:(id*)arg2 ;
-(id)initWithSpec:(id)arg1 classScoreVectorName:(id)arg2 classLabels:(id)arg3 forceCPU:(BOOL)arg4 error:(id*)arg5 ;
-(unsigned long long)numInputs;
-(id)evaluateNoAutoRelease:(id)arg1 error:(id*)arg2 ;
-(id)verifyInputs:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetSizes:(id)arg1 error:(id*)arg2 ;
-(BOOL)bindInputsAndOutputs:(id)arg1 allocatedImageData:(vector<std::__1::shared_ptr<unsigned char>, std::__1::allocator<std::__1::shared_ptr<unsigned char> > >*)arg2 error:(id*)arg3 ;
-(BOOL)unlockCVPixelBuffers:(id)arg1 error:(id*)arg2 ;
-(id)populateOutputs:(id*)arg1 ;
-(CVBufferRef)_pixelBufferFromEbuf:(SCD_Struct_ML24*)arg1 description:(id)arg2 error:(id*)arg3 ;
-(BOOL)resetSizesNoAutoRelease:(id)arg1 error:(id*)arg2 ;
-(id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)setClassLabels:(NSArray *)arg1 ;
-(void)setClassScoreVectorName:(NSString *)arg1 ;
-(NSArray *)outputLayers;
-(unsigned long long)numOutputs;
-(map<std::__1::basic_string<char>)inputBuffers;
-(void)setInputBuffers:(map<std::__1::basic_string<char>)arg1 ;
-(map<std::__1::basic_string<char>)outputBuffers;
-(void)setOutputBuffers:(map<std::__1::basic_string<char>)arg1 ;
-(BOOL)usingCPU;
-(void)setUsingCPU:(BOOL)arg1 ;
-(BOOL)isEspresoBiasPreprocessingShared;
-(void)setIsEspresoBiasPreprocessingShared:(BOOL)arg1 ;
-(unsigned)seqSize;
-(void)setSeqSize:(unsigned)arg1 ;
-(void)setWidths:(vector<int)arg1 ;
-(vector<int)heights;
-(void)setHeights:(vector<int)arg1 ;
-(vector<int)ks;
-(void)setKs:(vector<int)arg1 ;
-(vector<int)batches;
-(void)setBatches:(vector<int)arg1 ;
-(NSMutableDictionary *)probDict;
-(void)setProbDict:(NSMutableDictionary *)arg1 ;
-(void*)plan;
-(void)setPlan:(void*)arg1 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(SCD_Struct_ML10*)network;
-(void)setNetwork:(SCD_Struct_ML10*)arg1 ;
-(map<std::__1::basic_string<char>)params;
-(void)setParams:(map<std::__1::basic_string<char>)arg1 ;
-(int)engine;
-(vector<int)widths;
-(int)precision;
-(void)setPrecision:(int)arg1 ;
@end

