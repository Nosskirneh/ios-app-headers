//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSData, NSDictionary, NSUUID;

@interface IDRhmiFeatureInfoDownloadOperation : NSOperation
{
    _Bool _executing;
    _Bool _finished;
    NSUUID *_identifier;
    CDUnknownBlockType _completionHandler;
    NSDictionary *_featureInfoJSONObject;
    NSData *_iconData;
}

@property(retain, nonatomic) NSData *iconData; // @synthesize iconData=_iconData;
@property(retain, nonatomic) NSDictionary *featureInfoJSONObject; // @synthesize featureInfoJSONObject=_featureInfoJSONObject;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)appswitcherCompatibleIconDataWithImageData:(id)arg1;
- (void)downloadAppIcon;
- (void)downloadFeatureInfoJSON;
- (void)completeOperationWithError:(id)arg1;
- (void)completeOperation;
- (void)finishOperation;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (id)initWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

