//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FlurryActor.h"

#import "IFlurryNodeDataProvider-Protocol.h"

@class FlurryNodeData, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_source;

@interface FlurryNodeDataProvider : FlurryActor <IFlurryNodeDataProvider>
{
    _Bool _keepMonitoringFile;
    int _fileDescriptor;
    NSString *_filePath;
    NSMutableArray *_observerArray;
    NSObject<OS_dispatch_source> *_source;
    FlurryNodeData *_nodeData;
}

+ (void)wipe;
+ (void)createDirectoryAtPath:(id)arg1;
+ (id)nodeDataProviderWithFilePath:(id)arg1;
@property(retain, nonatomic) FlurryNodeData *nodeData; // @synthesize nodeData=_nodeData;
@property(nonatomic) _Bool keepMonitoringFile; // @synthesize keepMonitoringFile=_keepMonitoringFile;
@property(nonatomic) int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
@property(nonatomic) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property(retain, nonatomic) NSMutableArray *observerArray; // @synthesize observerArray=_observerArray;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)notifyObserver;
- (void)alertDelegateOfEvents:(unsigned long long)arg1;
- (void)recreateDispatchSource;
- (void)beginMonitoringFile;
- (void)forceRefresh:(CDUnknownBlockType)arg1;
- (id)initWithFilePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

