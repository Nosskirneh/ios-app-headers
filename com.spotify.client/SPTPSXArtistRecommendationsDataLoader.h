//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString, SPTDataLoader;
@protocol GLUEImageLoader;

@interface SPTPSXArtistRecommendationsDataLoader : NSObject <SPTDataLoaderDelegate>
{
    SPTDataLoader *_dataLoader;
    id <GLUEImageLoader> _imageLoader;
}

@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)handleRecommendedArtistsResponse:(id)arg1 withSuccess:(_Bool)arg2;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)sendDismissFeedbackForRecommendedArtist:(id)arg1;
- (void)fetchRecommendedArtistsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDataLoader:(id)arg1 imageLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

