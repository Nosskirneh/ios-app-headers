//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SASVASTDownloadFromURLOperationDelegate-Protocol.h"

@class NSDate, NSMutableArray, NSOperationQueue, NSString, NSTimer, SASVASTAd;
@protocol SASVASTCompliantObject, SASVASTManagerDelegate;

@interface SASVASTManager : NSObject <SASVASTDownloadFromURLOperationDelegate>
{
    id <SASVASTCompliantObject> _adObject;
    id <SASVASTManagerDelegate> _delegate;
    NSOperationQueue *_backgroundQueue;
    NSMutableArray *_vastModels;
    NSMutableArray *_wrapperAds;
    SASVASTAd *_currentRootAd;
    SASVASTAd *_currentAd;
    NSTimer *_timeoutTimer;
    NSDate *_startingOperationDate;
    NSDate *_maxOperationDate;
    NSDate *_rootModelDownloadDate;
    NSDate *_startBuffetFetchDate;
}

@property(retain, nonatomic) NSDate *startBuffetFetchDate; // @synthesize startBuffetFetchDate=_startBuffetFetchDate;
@property(retain, nonatomic) NSDate *rootModelDownloadDate; // @synthesize rootModelDownloadDate=_rootModelDownloadDate;
@property(retain, nonatomic) NSDate *maxOperationDate; // @synthesize maxOperationDate=_maxOperationDate;
@property(retain, nonatomic) NSDate *startingOperationDate; // @synthesize startingOperationDate=_startingOperationDate;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) SASVASTAd *currentAd; // @synthesize currentAd=_currentAd;
@property(retain, nonatomic) SASVASTAd *currentRootAd; // @synthesize currentRootAd=_currentRootAd;
@property(retain, nonatomic) NSMutableArray *wrapperAds; // @synthesize wrapperAds=_wrapperAds;
@property(retain, nonatomic) NSMutableArray *vastModels; // @synthesize vastModels=_vastModels;
@property(retain, nonatomic) NSOperationQueue *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(nonatomic) __weak id <SASVASTManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SASVASTCompliantObject> adObject; // @synthesize adObject=_adObject;
- (void).cxx_destruct;
- (id)addPassbackInfoToError:(id)arg1;
- (id)formatErrorWithText:(id)arg1 andParameter:(id)arg2;
- (id)rootModel;
- (void)failWithError:(id)arg1;
- (void)addEventFromVASTAd:(id)arg1 toAdObject:(id)arg2;
- (void)formatAdObject:(id)arg1 fromVASTAd:(id)arg2 wrappers:(id)arg3 error:(id)arg4;
- (void)processAd:(id)arg1;
- (double)setWrapperTimeoutForWrapper:(id)arg1;
- (void)addWrapperAd:(id)arg1;
- (void)addVASTModel:(id)arg1;
- (void)VASTDownloadOperation:(id)arg1 didFinishWithDatas:(id)arg2 fromURL:(id)arg3;
- (void)initBackgroundQueue;
- (void)resetBackgroundQueue;
- (double)buffetTime;
- (double)wrapperTime;
- (double)elapsedTime;
- (double)remainingTime;
- (void)timeoutTimerHit:(id)arg1;
- (void)cancelTimeoutTimer;
- (void)startTimeoutTimerWithDuration:(double)arg1;
- (void)fetchVASTDatasAtURL:(id)arg1 timeout:(double)arg2;
- (id)initWithAdObject:(id)arg1 VASTURL:(id)arg2 delegate:(id)arg3 timeoutAfter:(double)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

