//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FlurryActor.h"

#import "FlurryStreamParserDelegate-Protocol.h"
#import "IFlurryStreamComponentsConfigManager-Protocol.h"

@class NSString;
@protocol FlurryStreamComponentsConfigManagerDelegate, IFlurryEntityRecordManager, IFlurryEpochFrameSource, IFlurryErrorFrameSource, IFlurryEventFrameSource, IFlurryPaymentTransactionSource, IFlurrySessionInitInfoSource, IFlurryStreamFlushSource, IFlurryTransferManager;

@interface FlurryStreamComponentsConfigManager : FlurryActor <FlurryStreamParserDelegate, IFlurryStreamComponentsConfigManager>
{
    id <FlurryStreamComponentsConfigManagerDelegate> _delegate;
    id <IFlurryEventFrameSource> _eventFrameSource;
    id <IFlurryEpochFrameSource> _epochFrameSource;
    id <IFlurryErrorFrameSource> _errorFrameSource;
    id <IFlurrySessionInitInfoSource> _sessionInitInfoSource;
    id <IFlurryPaymentTransactionSource> _transactionSource;
    id <IFlurryStreamFlushSource> _streamFlushSource;
    id <IFlurryTransferManager> _transferManager;
    id <IFlurryEntityRecordManager> _entityRecordManager;
}

+ (id)frameLogFilePathWithName;
+ (id)crashedFrameLogFileName;
+ (id)frameLogFileName;
+ (id)frameLogFilePath;
+ (id)streamComponentsConfigManager;
@property(retain, nonatomic) id <IFlurryEntityRecordManager> entityRecordManager; // @synthesize entityRecordManager=_entityRecordManager;
@property(retain, nonatomic) id <IFlurryTransferManager> transferManager; // @synthesize transferManager=_transferManager;
@property(retain, nonatomic) id <IFlurryStreamFlushSource> streamFlushSource; // @synthesize streamFlushSource=_streamFlushSource;
@property(retain, nonatomic) id <IFlurryPaymentTransactionSource> transactionSource; // @synthesize transactionSource=_transactionSource;
@property(retain, nonatomic) id <IFlurrySessionInitInfoSource> sessionInitInfoSource; // @synthesize sessionInitInfoSource=_sessionInitInfoSource;
@property(retain, nonatomic) id <IFlurryErrorFrameSource> errorFrameSource; // @synthesize errorFrameSource=_errorFrameSource;
@property(retain, nonatomic) id <IFlurryEpochFrameSource> epochFrameSource; // @synthesize epochFrameSource=_epochFrameSource;
@property(retain, nonatomic) id <IFlurryEventFrameSource> eventFrameSource; // @synthesize eventFrameSource=_eventFrameSource;
@property(nonatomic) __weak id <FlurryStreamComponentsConfigManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)parsingComplete;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

