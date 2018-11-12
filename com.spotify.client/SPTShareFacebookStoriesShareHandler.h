//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTShareHandler-Protocol.h"

@class NSString, SPTDataLoader, SPTShareData, SPTShareLogger;

@interface SPTShareFacebookStoriesShareHandler : NSObject <SPTShareHandler, SPTDataLoaderDelegate>
{
    _Bool _isRequesting;
    SPTDataLoader *_dataLoader;
    SPTShareLogger *_shareLogger;
    CDUnknownBlockType _shareCompletionBlock;
    SPTShareData *_shareData;
}

@property(retain, nonatomic) SPTShareData *shareData; // @synthesize shareData=_shareData;
@property(copy, nonatomic) CDUnknownBlockType shareCompletionBlock; // @synthesize shareCompletionBlock=_shareCompletionBlock;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(retain, nonatomic) SPTShareLogger *shareLogger; // @synthesize shareLogger=_shareLogger;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)shareWithData:(id)arg1 shareDestination:(id)arg2 sharePresenter:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)createAlertModel;
- (void)executeCompletionWithError:(id)arg1;
- (void)shareEntityWithURL:(id)arg1 withImage:(id)arg2 topColor:(id)arg3 bottomColor:(id)arg4;
- (void)requestShareableArtefactForEntityURL:(id)arg1;
- (id)initWithDataLoader:(id)arg1 shareLogger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

